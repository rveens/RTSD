/**
 * Source file for the MainModel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "MainModel.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { 

MainModel::MainModel() :
    Recursion<CSProcess>()
{
  SETNAME(this, "MainModel");

  // Initialize channels
  myControlleroutput_to_LinearSystemuChannel = new UnbufferedChannel<double, One2In, Out2One>();
  myLinearSystemy_to_ControllerMVChannel = new UnbufferedChannel<double, One2In, Out2One>();
  myStepoutput_to_ControllerSPChannel = new UnbufferedChannel<double, One2In, Out2One>();

  // Initialize model objects
  myController = new Controller::Controller(myLinearSystemy_to_ControllerMVChannel, myStepoutput_to_ControllerSPChannel, myControlleroutput_to_LinearSystemuChannel);
  SETNAME(myController, "Controller");
  myLinearSystem = new LinearSystem::LinearSystem(myControlleroutput_to_LinearSystemuChannel, myLinearSystemy_to_ControllerMVChannel);
  SETNAME(myLinearSystem, "LinearSystem");
  myStep = new Step::Step(myStepoutput_to_ControllerSPChannel);
  SETNAME(myStep, "Step");

  // Create PARALLEL group
  myPARALLEL = new Parallel(
    (CSPConstruct *) myLinearSystem,
    (CSPConstruct *) myController,
    (CSPConstruct *) myStep,
    NULL
  );
  SETNAME(myPARALLEL, "PARALLEL");

  // Register PARALLEL as top-level recursive object
  setToActivate(myPARALLEL);
  setEvaluateCondition(true);


  // protected region constructor on begin
  // protected region constructor end
}

MainModel::~MainModel()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model groups
  delete myPARALLEL;

  // Destroy model objects
  delete myStep;
  delete myLinearSystem;
  delete myController;

  // Destroy channels
  delete myControlleroutput_to_LinearSystemuChannel;
  delete myLinearSystemy_to_ControllerMVChannel;
  delete myStepoutput_to_ControllerSPChannel;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} 