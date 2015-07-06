/**
 * Header file for the  model
 * Generated by the TERRA Arch2LUNA generator version 1.0.0
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Hardware Channels
#include "csp/channels/PeriodicTimerChannel.h"

// Models
#include "submodel/submodel.h"

using namespace LUNA::CSP;

namespace  { 

class  : public Recursion<CSProcess>
{

public:
  // Define constructor and destructor
  ();
  virtual ~();

private:

  // Channel definitions
  PeriodicTimerChannel *mysubmodelport_to_pertimerChannel;

  // Model objects
  submodel::submodel *mysubmodel;

  // Model groups
  Parallel *parallelGroup;
};

// Close namespace(s)
} 