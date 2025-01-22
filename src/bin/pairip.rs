use std::path::PathBuf;

use clap::{Parser, Subcommand};
use pairipcore::error::Error;

pub mod cmd;
pub mod util;

#[derive(Parser)]
pub struct InputOptions {
    #[arg(value_name = "VMCODE_FILE")]
    pub vmcode_file: Option<PathBuf>,
}

#[derive(Parser)]
#[command(author, version, about, long_about = None)]
#[clap(arg_required_else_help = true)]
pub struct Cli {
    #[command(subcommand)]
    pub command: Option<Commands>,
}

#[derive(Subcommand)]
pub enum Commands {
    FindKey {
        #[command(flatten)]
        options: FindKeyOptions,
    },
    Strings {
        #[command(flatten)]
        options: FindStringsOptions,
    },
}

#[derive(Parser)]
#[clap(arg_required_else_help = true)]
pub struct FindKeyOptions {
    #[command(flatten)]
    pub input: InputOptions,

    #[arg(long, value_name = "FMTID[,...]")]
    pub fmt_ids: Option<String>,

    #[arg(short, long, value_name = "FILE")]
    pub save_to: Option<PathBuf>,

    #[arg(short = 'b', long, action = clap::ArgAction::SetTrue)]
    pub as_bin: bool,
}

#[derive(Parser)]
#[command(arg_required_else_help = true)]
pub struct FindStringsOptions {
    #[command(flatten)]
    pub input: InputOptions,

    #[arg(short = 'K', long, value_name = "FILE/KEY")]
    pub key: Option<String>,

    #[arg(long, value_name = "FMTID[,...]")]
    pub fmt_ids: Option<String>,

    #[arg(short, long, value_name = "FILE")]
    pub output: Option<PathBuf>,

    #[arg(long, value_name = "OFFSET")]
    pub start: Option<u32>,

    #[arg(long, value_name = "STEP")]
    pub step: Option<u32>,

    #[arg(short = 'a', long, action = clap::ArgAction::SetTrue)]
    pub show_addr: bool,
}

fn main() -> Result<(), Error> {
    let cli: Cli = Cli::parse();
    match &cli.command {
        Some(Commands::FindKey { options }) => cmd::find_key::main(options)?,
        Some(Commands::Strings { options }) => cmd::find_strings::main(options)?,
        _ => {}
    }
    Ok(())
}
