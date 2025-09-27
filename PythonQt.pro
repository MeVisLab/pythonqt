TEMPLATE = subdirs

# Define the full set of subdirectories, including the generator.
# This list is used as the default build target.
ALL_SUBDIRS = generator src extensions tests examples

tests.depends += src extensions
extensions.depends += src
examples.depends += src extensions

# The 'generator_only' config can be used to override the default.
CONFIG(generator_only) {
    # If the generator_only config is set, override the SUBDIRS list
    # to only include the generator.
    SUBDIRS = generator
} else: CONFIG(exclude_generator) {
    # If the 'generator_only' option is not present, but 'exclude_generator' is,
    # then remove the generator from the default list.
    SUBDIRS = $$ALL_SUBDIRS
    SUBDIRS -= generator
} else {
    # If neither special option is set, use the default build which includes everything.
    SUBDIRS = $$ALL_SUBDIRS
}