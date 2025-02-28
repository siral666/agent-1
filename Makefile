include ./build.config

CFLAGS = $(DEFINES) $(INCLUDES)

define make_sub_dir
set -e;										\
	for subdir in $(SUBDIR); do						\
		if [ -d "$${subdir}" ]; then					\
			$(MAKE) $(@) --directory="$${subdir}";	\
		fi								\
	done
endef

SUBDIR := 01_SDK 10_PROJECT

.PHONY: all

all:
	@$(make_sub_dir)

install:
	@$(make_sub_dir)
	
clean:
	@$(make_sub_dir)