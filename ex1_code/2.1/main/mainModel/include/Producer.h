/**
 * Header file for the Producer model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "Producer/PCode.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace MainModel { namespace Producer { 

class Producer : public Sequential
{

public:
  // Define constructor and destructor
  Producer(GuardedChannelIn<int> *ch1, GuardedChannelIn<int> *ch2, GuardedChannelIn<int> *ch3);
  virtual ~Producer();



private:

  // Class variables
  int data;

  // Model objects
  PCode::PCode *myPCode;
  GuardedWriter<int> *myw1;
  GuardedWriter<int> *myw2;
  GuardedWriter<int> *myw3;

  // Model groups
  Alternative *myALTERNATIVE;

  // protected region additional class members or functions on begin

  // protected region additional class members or functions end
};

// Close namespace(s)
} } 