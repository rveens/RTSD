/**
 * Source file for the submodel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "submodel.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace submodel { 

submodel::submodel(ChannelIn<LUNA::Clock::period_t> *port) :
    Sequential(NULL)
{
  SETNAME(this, "submodel");

  // Initialize model objects
  myPcode = new Pcode::Pcode(test);
  SETNAME(myPcode, "Pcode");
  mytestwr = new Writer<LUNA::Clock::period_t>(&test, port);
  SETNAME(mytestwr, "testwr");


  // Register model objects
  this->append_child(myPcode);
  this->append_child(mytestwr);

  // protected region constructor on begin
  // protected region constructor end
}

submodel::~submodel()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model objects
  delete mytestwr;
  delete myPcode;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} 
