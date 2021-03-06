/**
 * Header file for the MainModel model
 * Generated by the TERRA Arch2LUNA generator version 1.0.0
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Hardware Channels
#include "anyio/AnyioPWMLinkDriverSim.h"

// Models
#include "PWMTester/PWMTester.h"

using namespace LUNA::CSP;

namespace MainModel { 

class MainModel : public Recursion<CSProcess>
{

public:
  // Define constructor and destructor
  MainModel();
  virtual ~MainModel();

private:

  // Channel definitions
  AnyIO::AnyioPWMLinkDriverSim *myPWMtesterpwmport_to_pwmportChannel;

  // Model objects
  PWMTester::PWMTester *myPWMtester;

  // Model groups
  Parallel *parallelGroup;
};

// Close namespace(s)
} 
