/**
 * Source file for the encodertestersubmodel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "encodertestersubmodel.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace encodertestersubmodel { 

encodertestersubmodel::encodertestersubmodel(ChannelIn<uint32_t> *port) :
    Sequential(NULL)
{
  SETNAME(this, "encodertestersubmodel");

  // Initialize model objects
  myPcode = new Pcode::Pcode(test);
  SETNAME(myPcode, "Pcode");
  mywriter = new Writer<uint32_t>(&test, port);
  SETNAME(mywriter, "writer");


  // Register model objects
  this->append_child(myPcode);
  this->append_child(mywriter);

  // protected region constructor on begin

  // protected region constructor end
}

encodertestersubmodel::~encodertestersubmodel()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin

  // protected region destructor end

  // Destroy model objects
  delete mywriter;
  delete myPcode;
}



// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} 
