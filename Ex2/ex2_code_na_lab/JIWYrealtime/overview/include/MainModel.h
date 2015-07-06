/**
 * Header file for the MainModel model
 * Generated by the TERRA Arch2LUNA generator version 1.0.0
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Hardware Channels
#include "anyio/AnyioEncoderLinkDriver.h"
#include "anyio/AnyioPWMLinkDriver.h"

// Models
#include "Encoder_convert/Encoder_convert.h"
#include "Encoder_vert/Encoder_vert.h"
#include "JIWY/JIWY.h"
#include "Joystick/Joystick.h"

using namespace LUNA::CSP;

namespace MainModel { 

class MainModel : public Recursion<CSProcess>
{

public:
  // Define constructor and destructor
  MainModel();
  virtual ~MainModel();

private:

  // Channel definitions
  UnbufferedChannel<double, One2In, Out2One> *myEncoder_horoutputport_to_JIWYrobot_hor_feedbackChannel;
  UnbufferedChannel<double, One2In, Out2One> *myEncoder_vertoutputport_to_JIWYrobot_ver_feedbackChannel;
  AnyIO::AnyioPWMLinkDriver *myJIWYrobot_hor_out_to_robot_pwm_horChannel;
  AnyIO::AnyioPWMLinkDriver *myJIWYrobot_ver_out_to_robot_pwm_vertChannel;
  UnbufferedChannel<double, One2In, Out2One> *myJoystickjoystick_hor_to_JIWYjoystick_hor_inChannel;
  UnbufferedChannel<double, One2In, Out2One> *myJoystickjoystick_ver_to_JIWYjoystick_vert_inChannel;
  AnyIO::AnyioEncoderLinkDriver<uint32_t> *myencoder_hor_robot_to_Encoder_horinputportChannel;
  AnyIO::AnyioEncoderLinkDriver<uint32_t> *myencoder_ver_robot_to_Encoder_vertinputportChannel;

  // Model objects
  Encoder_convert::Encoder_convert *myEncoder_hor;
  Encoder_vert::Encoder_vert *myEncoder_vert;
  JIWY::JIWY *myJIWY;
  Joystick::Joystick *myJoystick;

  // Model groups
  Parallel *parallelGroup;
};

// Close namespace(s)
} 