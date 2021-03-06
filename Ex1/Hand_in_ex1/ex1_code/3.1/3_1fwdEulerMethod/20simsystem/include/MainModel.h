/**
 * Header file for the MainModel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "Controller/Controller.h"
#include "LinearSystem/LinearSystem.h"
#include "Step/Step.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

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
  UnbufferedChannel<double, One2In, Out2One> *myControlleroutput_to_LinearSystemuChannel;
  UnbufferedChannel<double, One2In, Out2One> *myLinearSystemy_to_ControllerMVChannel;
  UnbufferedChannel<double, One2In, Out2One> *myStepoutput_to_ControllerSPChannel;

  // Model objects
  Controller::Controller *myController;
  LinearSystem::LinearSystem *myLinearSystem;
  Step::Step *myStep;

  // Model groups
  Parallel *myPARALLEL;



  // protected region additional class members or functions on begin
  // protected region additional class members or functions end
};

// Close namespace(s)
} 
