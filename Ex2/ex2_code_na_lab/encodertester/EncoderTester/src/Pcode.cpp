/**
 * Source file for the Pcode model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "Pcode.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace EncoderTester { namespace Pcode { 

Pcode::Pcode(uint32_t &test) :
    CodeBlock(), test(test){
  SETNAME(this, "Pcode");

  // protected region constructor on begin
  // protected region constructor end
}

Pcode::~Pcode()
{
  // protected region destructor on begin
  // protected region destructor end
}

void Pcode::execute()
{
  // protected region execute code on begin
	printf("%d, %f \n", this->test, convert(this->test));
  // protected region execute code end
}

// protected region additional functions on begin
double Pcode::convert(uint32_t i)
{
	return (int32_t)i;
}

double Pcode::scale(double n)
{
	return n;
}
// protected region additional functions end

// Close namespace(s)
} } 
