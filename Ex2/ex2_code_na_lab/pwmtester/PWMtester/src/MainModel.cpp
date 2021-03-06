/**
 * Source file for the MainModel model
 * Generated by the TERRA Arch2LUNA generator version 1.0.0
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "MainModel.h"
// protected region additional headers on begin
#include <hw/inout.h>
#include <sys/neutrino.h>
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { 

MainModel::MainModel() :
    Recursion<CSProcess>()
{
  SETNAME(this, "MainModel");

  // Initialize hardware channels
  AnyIO::AnyioPWMSettings myPWMtesterpwmport_to_pwmportChannelSettings;
  myPWMtesterpwmport_to_pwmportChannelSettings.deviceNr = 0;
  myPWMtesterpwmport_to_pwmportChannelSettings.pwmNr = 2;
  myPWMtesterpwmport_to_pwmportChannelSettings.interlaced = false;
  myPWMtesterpwmport_to_pwmportChannelSettings.bridge_type = 1; //Thiemo H-Bridge 
  myPWMtesterpwmport_to_pwmportChannelSettings.baseAddress = 0x30;
  myPWMtesterpwmport_to_pwmportChannelSettings.registerSize = 2;
  myPWMtesterpwmport_to_pwmportChannelSettings.baseControlAddress = 0x40;
  myPWMtesterpwmport_to_pwmportChannelSettings.controlRegisterSize = 2;
  myPWMtesterpwmport_to_pwmportChannelSettings.gModeAddress = 0x52;
  myPWMtesterpwmport_to_pwmportChannelSettings.pwmEnableBit = 1;
  myPWMtesterpwmport_to_pwmportChannel = new AnyIO::AnyioPWMLinkDriver(myPWMtesterpwmport_to_pwmportChannelSettings);

  // Initialize model objects
  myPWMtester = new PWMTester::PWMTester(myPWMtesterpwmport_to_pwmportChannel);
  SETNAME(myPWMtester, "PWMtester");

  // Create Parallel group containing all architecture components
  parallelGroup = new Parallel(
    (CSPConstruct *) myPWMtester,
    NULL
  );
  SETNAME(parallelGroup, "parallelGroup");

  // Register group as top-level recursive object
  setToActivate(parallelGroup);
  setEvaluateCondition(true);
}

MainModel::~MainModel()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // Destroy model objects
  delete myPWMtester;

  // Destroy channels
  delete myPWMtesterpwmport_to_pwmportChannel;
}

// Close namespace(s)
} 
