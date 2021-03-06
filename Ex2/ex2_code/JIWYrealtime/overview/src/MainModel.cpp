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
// Each additional header should get a corresponding dependency in the Makefile
#include <hw/inout.h>
#include <sys/neutrino.h>
// protected region additional headers end

namespace MainModel { 

MainModel::MainModel() :
    Recursion<CSProcess>()
{
  SETNAME(this, "MainModel");

  // Initialize channels
  myEncoder_horoutputport_to_JIWYrobot_hor_feedbackChannel = new UnbufferedChannel<double, One2In, Out2One>();
  myEncoder_veroutputport_to_JIWYrobot_ver_feedbackChannel = new UnbufferedChannel<double, One2In, Out2One>();
  myJoystickjoystick_hor_to_JIWYjoystick_hor_inChannel = new UnbufferedChannel<double, One2In, Out2One>();
  myJoystickjoystick_ver_to_JIWYjoystick_vert_inChannel = new UnbufferedChannel<double, One2In, Out2One>();

  // Initialize hardware channels
  AnyIO::AnyioPWMSettings myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.deviceNr = 0;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.pwmNr = 2;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.interlaced = false;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.bridge_type = 1; //Thiemo H-Bridge 
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.baseAddress = 0x30;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.registerSize = 2;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.baseControlAddress = 0x40;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.controlRegisterSize = 2;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.gModeAddress = 0x52;
  myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings.pwmEnableBit = 1;
  myJIWYrobot_hor_out_to_robot_pwm_horChannel = new AnyIO::AnyioPWMLinkDriver(myJIWYrobot_hor_out_to_robot_pwm_horChannelSettings);

  AnyIO::AnyioPWMSettings myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.deviceNr = 0;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.pwmNr = 3;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.interlaced = false;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.bridge_type = 1; //Thiemo H-Bridge 
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.baseAddress = 0x30;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.registerSize = 2;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.baseControlAddress = 0x40;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.controlRegisterSize = 2;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.gModeAddress = 0x52;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings.pwmEnableBit = 1;
  myJIWYrobot_ver_out_to_robot_pwm_vertChannel = new AnyIO::AnyioPWMLinkDriver(myJIWYrobot_ver_out_to_robot_pwm_vertChannelSettings);

  AnyIO::AnyioEncoderSettings myencoder_hor_robot_to_Encoder_horinputportChannelSettings;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.deviceNr = 0;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.encoderNr = 2;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.baseAddress = 0x0;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.registerSize = 4;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.baseControlAddress = 0x20;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.controlRegisterSize = 2;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.gModeAddress = 0x52;
  myencoder_hor_robot_to_Encoder_horinputportChannelSettings.encoderEnableBit = 1;
  myencoder_hor_robot_to_Encoder_horinputportChannel = new AnyIO::AnyioEncoderLinkDriver<uint32_t>(myencoder_hor_robot_to_Encoder_horinputportChannelSettings);

  AnyIO::AnyioEncoderSettings myencoder_ver_robot_to_Encoder_verinputportChannelSettings;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.deviceNr = 0;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.encoderNr = 3;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.baseAddress = 0x0;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.registerSize = 4;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.baseControlAddress = 0x20;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.controlRegisterSize = 2;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.gModeAddress = 0x52;
  myencoder_ver_robot_to_Encoder_verinputportChannelSettings.encoderEnableBit = 1;
  myencoder_ver_robot_to_Encoder_verinputportChannel = new AnyIO::AnyioEncoderLinkDriver<uint32_t>(myencoder_ver_robot_to_Encoder_verinputportChannelSettings);

  // Initialize model objects
  myEncoder_hor = new Encoder_convert::Encoder_convert(myencoder_hor_robot_to_Encoder_horinputportChannel, myEncoder_horoutputport_to_JIWYrobot_hor_feedbackChannel);
  SETNAME(myEncoder_hor, "Encoder_hor");
  myEncoder_ver = new Encoder_convert::Encoder_convert(myencoder_ver_robot_to_Encoder_verinputportChannel, myEncoder_veroutputport_to_JIWYrobot_ver_feedbackChannel);
  SETNAME(myEncoder_ver, "Encoder_ver");
  myJIWY = new JIWY::JIWY(myJoystickjoystick_hor_to_JIWYjoystick_hor_inChannel, myJoystickjoystick_ver_to_JIWYjoystick_vert_inChannel, myEncoder_horoutputport_to_JIWYrobot_hor_feedbackChannel, myJIWYrobot_hor_out_to_robot_pwm_horChannel, myEncoder_veroutputport_to_JIWYrobot_ver_feedbackChannel, myJIWYrobot_ver_out_to_robot_pwm_vertChannel);
  SETNAME(myJIWY, "JIWY");
  myJoystick = new Joystick::Joystick(myJoystickjoystick_hor_to_JIWYjoystick_hor_inChannel, myJoystickjoystick_ver_to_JIWYjoystick_vert_inChannel);
  SETNAME(myJoystick, "Joystick");

  // Create Parallel group containing all architecture components
  parallelGroup = new Parallel(
    (CSPConstruct *) myEncoder_hor,
    (CSPConstruct *) myEncoder_ver,
    (CSPConstruct *) myJIWY,
    (CSPConstruct *) myJoystick,
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
  delete myJoystick;
  delete myJIWY;
  delete myEncoder_ver;
  delete myEncoder_hor;

  // Destroy channels
  delete myEncoder_horoutputport_to_JIWYrobot_hor_feedbackChannel;
  delete myEncoder_veroutputport_to_JIWYrobot_ver_feedbackChannel;
  delete myJIWYrobot_hor_out_to_robot_pwm_horChannel;
  delete myJIWYrobot_ver_out_to_robot_pwm_vertChannel;
  delete myJoystickjoystick_hor_to_JIWYjoystick_hor_inChannel;
  delete myJoystickjoystick_ver_to_JIWYjoystick_vert_inChannel;
  delete myencoder_hor_robot_to_Encoder_horinputportChannel;
  delete myencoder_ver_robot_to_Encoder_verinputportChannel;
}

// Close namespace(s)
} 
