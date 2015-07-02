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
#include <string.h>
#include <sys/time.h>
#include <sys/neutrino.h>
#include <sys/syspage.h>
#include <inttypes.h>
#include <stdio.h>
// protected region additional headers end

namespace submodel { namespace Pcode { 

Pcode::Pcode(LUNA::Clock::period_t &test) :
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
	static struct timespec t1;
	static uint64_t clockcycle;

	struct timespec t2;
	struct timespec res;
	uint64_t currentcycle = ClockCycles();

	clock_gettime(CLOCK_REALTIME, &t2);
	clock_getres(CLOCK_REALTIME, &res);
	int64_t dcycle= currentcycle-clockcycle;
	uint64_t cps = SYSPAGE_ENTRY(qtime)->cycles_per_sec;

	if(currentcycle > clockcycle)
		printf("%lld, %lld, %lld, %ld.%.9ld, %ld.%.9ld, %ld.%.9ld\n", currentcycle, clockcycle, cps, res.tv_sec, res.tv_nsec, t2.tv_sec, t2.tv_nsec, t1.tv_sec, t1.tv_nsec);

	t1 = t2;
	clockcycle = currentcycle;

	// protected region execute code end
}

// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} } 
