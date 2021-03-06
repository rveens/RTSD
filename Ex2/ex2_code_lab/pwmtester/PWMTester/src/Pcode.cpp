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

namespace PWMTester { namespace Pcode { 

Pcode::Pcode(uint16_t &test) :
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
	static double t = 1.0;

	//t = -32768; // fast reverse
	//t = 32767; // fast forward
	//t = 32768; // stop
	//t = -1000; // deadzone?

	//this->test = (uint16_t) t;

	this->test = convert(normalise(t));
	printf("%lf, %lf, %d \n", t, normalise(t), convert(normalise(t)));
	//t+= 6.28318;
	while(t>512)
		t-= 1024;

  // protected region execute code end
}

// protected region additional functions on begin
uint16_t Pcode::convert(double f)
{
	int16_t deadzone = 2200;

	int16_t n = f*(32768-deadzone);
	if(n>0)
		n += deadzone;
	else if(n<0)
		n -= deadzone;

	if(n>=0 && n<32768)
		return n;
	else if(n >= -32768 && n<0)
	{
		return (uint16_t)n;
	}
	else
		return 0;
}

double Pcode::normalise(double n)
{
	// linear conversion assumed
	double min=-512, max=512;

	// normalise to [-1,1]
	n-= min;
	n/= max - min;
	n*= 2;
	n-= 1;

	return n;

	/*
	// scale to int16_t
	if(n=1)
		return 32767;
	else
		return n*32768;
	//*/
}

// protected region additional functions end

// Close namespace(s)
} } 
