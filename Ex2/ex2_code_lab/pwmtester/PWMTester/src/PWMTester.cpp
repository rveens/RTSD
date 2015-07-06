/**
 * Source file for the PWMTester model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "PWMTester.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace PWMTester { 

PWMTester::PWMTester(ChannelIn<uint16_t> *pwmport) :
    Sequential(NULL)
{
  SETNAME(this, "PWMTester");

  // Initialize model objects
  myPcode = new Pcode::Pcode(test);
  SETNAME(myPcode, "Pcode");
  mypwmwriter = new Writer<uint16_t>(&test, pwmport);
  SETNAME(mypwmwriter, "pwmwriter");


  // Register model objects
  this->append_child(myPcode);
  this->append_child(mypwmwriter);

  // protected region constructor on begin
  // protected region constructor end
}

PWMTester::~PWMTester()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model objects
  delete mypwmwriter;
  delete myPcode;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} 