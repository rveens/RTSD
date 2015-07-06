/**
 * Header file for the encodertestersubmodel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "Pcode.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace encodertestersubmodel { 

class encodertestersubmodel : public Sequential
{

public:
  // Define constructor and destructor
  encodertestersubmodel(ChannelIn<uint32_t> *port);
  virtual ~encodertestersubmodel();

private:

  // Class variables
  uint32_t test;

  // Model objects
  Pcode::Pcode *myPcode;
  Writer<uint32_t> *mywriter;



  // protected region additional class members or functions on begin

  // protected region additional class members or functions end
};

// Close namespace(s)
} 