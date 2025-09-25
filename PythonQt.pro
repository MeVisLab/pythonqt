TEMPLATE = subdirs

SUBDIRS = src extensions
extensions.depends += src

CONFIG(tests) {
    SUBDIRS += tests
    tests.depends += extensions
}

CONFIG(generator) {
    SUBDIRS += generator
}

CONFIG(examples) {
    SUBDIRS += examples
    examples.depends += extensions
}
