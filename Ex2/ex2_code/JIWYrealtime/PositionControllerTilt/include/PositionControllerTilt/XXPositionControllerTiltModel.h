/**
 * Header file for the XXPositionControllerTiltModel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * 20-sim C++ glue code to connect to PositionControllerTiltModel
 * Modifying this file is absolutely not recommended!
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"
#include "xxsim/PositionControllerTiltModel.hpp" 
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace PositionControllerTilt { namespace XXPositionControllerTiltModel { 

class XXPositionControllerTiltModel : public CodeBlock
{

public:
  // Define constructor and destructor
  XXPositionControllerTiltModel(uint32_t &corr, uint32_t &in, uint32_t &out, uint32_t &position);
  virtual ~XXPositionControllerTiltModel();

  void execute();

private:

  // Class variables
  uint32_t &corr;
  uint32_t &in;
  uint32_t &out;
  uint32_t &position;

  PositionControllerTiltModel *m_model;
};

// Close namespace(s)
} } 
