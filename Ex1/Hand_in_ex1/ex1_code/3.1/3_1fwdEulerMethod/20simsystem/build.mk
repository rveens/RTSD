# build.mk file for 20simsystem.cspm, provide information to 'project MakeFile' 
# Generated by the TERRA CSPm2LUNA generator version 1.1.3
#
# protected region document description on begin
# protected region document description end

TARGETS+=bin/20simsystem

20simsystem/20simsystem:
	@echo
	@echo "Building $@"
	@make -C 20simsystem --no-print-directory

bin/20simsystem: 20simsystem/20simsystem | bin
	@cp $^ $@
	@echo "Build $@"

# Additional dependencies to ensure that bin/20simsystem gets properly rebuild
20simsystem/20simsystem: 20simsystem/src/main.cpp LinearSystem/lib/libLinearSystem.a Step/lib/libStep.a Controller/lib/libController.a
20simsystem/20simsystem: 20simsystem/src/MainModel.cpp 20simsystem/include/MainModel.h Controller/include/Controller/Controller.h LinearSystem/include/LinearSystem/LinearSystem.h Step/include/Step/Step.h

# protected region additional dependencies on begin
# protected region additional dependencies end