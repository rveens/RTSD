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

namespace EncoderTester { namespace Pcode { 

class Pcode : public CodeBlock
{

public:
  // Define constructor and destructor
  Pcode(uint32_t &test);
  virtual ~Pcode();

  void execute();

private:

  // Class variables
  uint32_t &test;

  // protected region additional class members or functions on begin
  double convert(uint32_t i);
  double scale(double n);
  // protected region additional class members or functions end
};

// Close namespace(s)
} } 
