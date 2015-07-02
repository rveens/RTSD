/**
 * Header file for the Pcode model
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
// protected region additional headers end

using namespace LUNA::CSP;

namespace PWMTester { namespace Pcode { 

class Pcode : public CodeBlock
{

public:
  // Define constructor and destructor
  Pcode(uint16_t &test);
  virtual ~Pcode();

  void execute();

private:

  // Class variables
  uint16_t &test;

  // protected region additional class members or functions on begin
  uint16_t convert(double n);
  double normalise(double n);
  // protected region additional class members or functions end
};

// Close namespace(s)
} } 
