# build.mk file for overview.archm, provide information to 'project MakeFile' 
# Generated by the TERRA Arch2LUNA generator version 1.0.0
#
# protected region document description on begin
# protected region document description end

TARGETS+=bin/overview

overview/overview:
	@echo
	@echo "Building $@"
	@make -C overview --no-print-directory

bin/overview: overview/overview | bin
	@cp $^ $@
	@echo "Build $@"

# Additional dependencies to ensure that bin/overview gets properly rebuild
overview/overview: overview/src/main.cpp JIWY/lib/libJIWY.a Joystick/lib/libJoystick.a IO/lib/libIO.a Encoder_convert/lib/libEncoder_convert.a Encoder_convert/lib/libEncoder_convert.a
overview/overview: overview/src/MainModel.cpp overview/include/MainModel.h Encoder_convert/include/Encoder_convert/Encoder_convert.h Encoder_convert/include/Encoder_convert/Encoder_convert.h IO/include/IO/IO.h JIWY/include/JIWY/JIWY.h Joystick/include/Joystick/Joystick.h

# protected region additional dependencies on begin
# protected region additional dependencies end