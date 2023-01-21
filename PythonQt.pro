TEMPLATE = subdirs

SUBDIRS = generator src extensions tests examples
tests.depends += src extensions
extensions.depends += src
examples.depends += src extensions
