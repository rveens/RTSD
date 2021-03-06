# build.mk file for IO.cspm, provide information to 'project MakeFile' 
# Generated by the TERRA CSPm2LUNA generator version 1.1.3
#
# protected region document description on begin

# protected region document description end

TARGETS+=lib/libIO.a

IO/lib/libIO.a:
	@echo
	@echo "Building $@"
	@make -C IO --no-print-directory

lib/libIO.a: IO/lib/libIO.a | lib
	@cp $^ $@
	@echo "Build $@"

# Additional dependencies to ensure that lib/libIO.a gets properly rebuild
IO/lib/libIO.a: IO/src/IO.cpp IO/include/IO/IO.h
IO/lib/libIO.a: IO/src/hor_convert.cpp IO/include/IO/hor_convert.h
IO/lib/libIO.a: IO/src/ver_convert.cpp IO/include/IO/ver_convert.h

# protected region additional dependencies on begin

# protected region additional dependencies end