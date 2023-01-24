ifndef CHPL_MAKE_HOME
export CHPL_MAKE_HOME=$(shell pwd)/../..
endif

CHPL_MAKE_HOST_TARGET = --host
include $(CHPL_MAKE_HOME)/make/Makefile.base

default: all

all: antlr 

clean: FORCE
	rm -rf $(ANTLR_DIR)/build

cleanall: FORCE
	rm -rf $(ANTLR_DIR)/build

clobber: FORCE
	rm -rf $(ANTLR_DIR)/build $(ANTLR_DIR)/install

CMAKE ?= cmake

# TODO: Copy what dyno does for Debug/Release builds in CMAKE_BUILD_TYPE.
antlr-config: FORCE
	mkdir -p $(ANTLR_BUILD_DIR)
	cd $(ANTLR_BUILD_DIR) && $(CMAKE) -S$(ANTLR_SUBDIR) \
	    -DCMAKE_INSTALL_PREFIX='$(ANTLR_INSTALL_DIR)' \
	    -DCMAKE_C_COMPILER='$(CC)' \
	    -DCMAKE_C_FLAGS='$(WARN_CFLAGS)' \
	    -DCMAKE_CXX_COMPILER='$(CXX)' \
	    -DCMAKE_CXX_FLAGS='$(COMP_CXXFLAGS)' \
	    -DCMAKE_EXE_LINKER_FLAGS='$(LDFLAGS)' \
	    -DCMAKE_MODULE_LINKER_FLAGS='$(LDFLAGS)' \
	    -DBUILD_SHARED_LIBS=OFF
	    -DCMAKE_BUILD_TYPE=Debug

antlr-build: FORCE
	cd $(ANTLR_BUILD_DIR) && $(CMAKE) --build . --target=install

antlr: antlr-config antlr-build

FORCE:

.NOTPARALLEL:
