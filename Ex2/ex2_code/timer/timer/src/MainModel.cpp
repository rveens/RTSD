/**
 * Source file for the MainModel model
 * Generated by the TERRA Arch2LUNA generator version 1.0.0
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

  // Initialize hardware channels
  LUNA::Clock::period_t mysubmodelport_to_pertimerChannelTimerPeriod;
  mysubmodelport_to_pertimerChannelTimerPeriod.seconds = 0;
  mysubmodelport_to_pertimerChannelTimerPeriod.nanoseconds = 250000000;
  mysubmodelport_to_pertimerChannel = new PeriodicTimerChannel(mysubmodelport_to_pertimerChannelTimerPeriod, false);

  // Initialize model objects
  mysubmodel = new submodel::submodel(mysubmodelport_to_pertimerChannel);
  SETNAME(mysubmodel, "submodel");

  // Create Parallel group containing all architecture components
  parallelGroup = new Parallel(
    (CSPConstruct *) mysubmodel,
    NULL
  );
  SETNAME(parallelGroup, "parallelGroup");

  // Register group as top-level recursive object
  setToActivate(parallelGroup);
  setEvaluateCondition(true);
}

MainModel::~MainModel()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // Destroy model objects
  delete mysubmodel;

  // Destroy channels
  delete mysubmodelport_to_pertimerChannel;
}

// Close namespace(s)
} 
