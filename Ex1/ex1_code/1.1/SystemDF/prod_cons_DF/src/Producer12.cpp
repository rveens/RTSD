/**
 * Source file for the Producer12 model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "Producer12.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace Producer12 { 



Producer12::Producer12(ChannelIn<bool> *prod_ch1) :
    Sequential(NULL)
{
  SETNAME(this, "Producer12");

  // Initialize model objects
  mych1write = new Writer<bool>(&someValue, prod_ch1);
  SETNAME(mych1write, "ch1write");


  // Register model objects
  this->append_child(mych1write);

  // protected region constructor on begin
  // protected region constructor end
}

Producer12::~Producer12()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model objects
  delete mych1write;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} } 