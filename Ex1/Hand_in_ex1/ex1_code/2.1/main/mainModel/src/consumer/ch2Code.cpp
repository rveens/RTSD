/**
 * Source file for the ch2Code model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "consumer/ch2Code.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace consumer { namespace ch2Code { 

ch2Code::ch2Code(int &appel) :
    CodeBlock(), appel(appel){
  SETNAME(this, "ch2Code");

  // protected region constructor on begin
  // protected region constructor end
}

ch2Code::~ch2Code()
{
  // protected region destructor on begin
  // protected region destructor end
}

void ch2Code::execute()
{
  // protected region execute code on begin
	printf("C2->Receiving %d\n", this->appel);
  // protected region execute code end
}

// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} } } 