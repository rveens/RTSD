/**
 * Header file for the CCode model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
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

namespace MainModel { namespace Consumer12 { namespace CCode { 

class CCode : public CodeBlock
{

public:
  // Define constructor and destructor
  CCode(int &CCode_aVariable, int &CCode_bVariable);
  virtual ~CCode();

  void execute();

private:

  // Class variables
  int &CCode_aVariable;
  int &CCode_bVariable;

  // protected region additional class members or functions on begin
  // protected region additional class members or functions end
};

// Close namespace(s)
} } } 
