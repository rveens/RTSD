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
  AnyIO::AnyioEncoderSettings myEncoderTesterport_to_encoderportChannelSettings;
  myEncoderTesterport_to_encoderportChannelSettings.deviceNr = 0;
  myEncoderTesterport_to_encoderportChannelSettings.encoderNr = 0;
  myEncoderTesterport_to_encoderportChannelSettings.baseAddress = 0x0;
  myEncoderTesterport_to_encoderportChannelSettings.registerSize = 4;
  myEncoderTesterport_to_encoderportChannelSettings.baseControlAddress = 0x20;
  myEncoderTesterport_to_encoderportChannelSettings.controlRegisterSize = 2;
  myEncoderTesterport_to_encoderportChannelSettings.gModeAddress = 0x52;
  myEncoderTesterport_to_encoderportChannelSettings.encoderEnableBit = 0;
  myEncoderTesterport_to_encoderportChannel = new AnyIO::AnyioEncoderLinkDriver<uint32_t>(myEncoderTesterport_to_encoderportChannelSettings);

  // Initialize model objects
  myEncoderTester = new encodertestersubmodel::encodertestersubmodel(myEncoderTesterport_to_encoderportChannel);
  SETNAME(myEncoderTester, "EncoderTester");

  // Create Parallel group containing all architecture components
  parallelGroup = new Parallel(
    (CSPConstruct *) myEncoderTester,
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
  delete myEncoderTester;

  // Destroy channels
  delete myEncoderTesterport_to_encoderportChannel;
}

// Close namespace(s)
} 
