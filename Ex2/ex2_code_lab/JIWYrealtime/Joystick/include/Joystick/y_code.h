/**
 * Header file for the y_code model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
#include "hid/HID.h"
// protected region additional headers end

using namespace LUNA::CSP;

namespace Joystick { namespace y_code { 

class y_code : public CodeBlock
{

public:
  // Define constructor and destructor
  y_code(double &y);
  virtual ~y_code();

  void execute();

private:

  // Class variables
  double &y;

  // protected region additional class members or functions on begin
  LUNA::CSP::HIDAbsAxisChannel *channel;
  LUNA::CSP::Reader<double> *reader;
  // protected region additional class members or functions end
};

// Close namespace(s)
} } 