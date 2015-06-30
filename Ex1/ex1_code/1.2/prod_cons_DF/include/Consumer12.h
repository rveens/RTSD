/**
 * Header file for the Consumer12 model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "Consumer12/CCode.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace MainModel { namespace Consumer12 { 

class Consumer12 : public Recursion<CSPConstruct>
{

public:
  // Define constructor and destructor
  Consumer12(ChannelOut<int> *cons_ch1, ChannelOut<int> *cons_ch2);
  virtual ~Consumer12();



private:

  // Class variables
  int aVarable;
  int bVariable;

  // Model objects
  CCode::CCode *myCCode;
  Reader<int> *mych1read;
  Reader<int> *mych2read;

  // Model groups
  Sequential *mySEQUENTIAL;
  Sequential *mySEQUENTIAL_A;

  // protected region additional class members or functions on begin
  // protected region additional class members or functions end
};

// Close namespace(s)
} } 