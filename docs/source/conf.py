# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html
import sys
import os

sys.path.insert(0, os.path.abspath("../../"))
# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = "pairipcore-vm"
copyright = "2024, MatrixEditor"
author = "MatrixEditor"
release = "0.1"
master_doc = "index"

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
    "myst_parser",
    "sphinx_design",
    "sphinx.ext.autodoc",
    "sphinx.ext.intersphinx",
    "sphinx.ext.viewcode",
    "sphinx_copybutton",
]
myst_enable_extensions = ["attrs_inline"]

templates_path = ["_templates"]
exclude_patterns = ["build", "Thumbs.db", ".DS_Store"]


# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output
html_title = "pairipcore-vm"
html_theme = "sphinx_book_theme"
html_static_path = ["_static"]
html_theme_options = {
    "repository_url": "https://github.com/MatrixEditor/pairipcore-vm",
    "use_repository_button": True,
    "repository_branch": "master",
    "use_edit_page_button": True,
    "use_source_button": True,
    "use_issues_button": True,
    "use_download_button": True,
    "use_sidenotes": True,
    "show_toc_level": 2,
    "icon_links": [
        {
            "name": "Previous Research",
            "url": "https://github.com/Solaree/pairipcore",
            "icon": "fa-brands fa-github",
        },
        {
            "name": "Repository",
            "url": "https://github.com/executablebooks/sphinx-book-theme",
            "icon": "fa-brands fa-github",
        },
    ],
}
html_sidebars = {
    "**": [
        "navbar-logo.html",
        "search-button-field.html",
        "sbt-sidebar-nav.html",
    ]
}

# -- Options for autodoc ----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/extensions/autodoc.html#configuration

# Automatically extract typehints when specified and place them in
# descriptions of the relevant function/method.
autodoc_typehints = "both"

# Don't show class signature with the class' name.
autodoc_class_signature = "separated"

autodoc_preserve_defaults = False
autodoc_member_order = "bysource"
