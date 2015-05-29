/**
 * Source file for the Controller model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "Controller.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace Controller { 

Controller::Controller(ChannelOut<double> *MV, ChannelOut<double> *SP, ChannelIn<double> *output, ChannelIn<double> *steervalue) :
    Sequential(NULL)
{
  SETNAME(this, "Controller");

  // Initialize model objects
  myXXControllerModel = new XXControllerModel::XXControllerModel(v_MV, v_SP, v_output);
  SETNAME(myXXControllerModel, "XXControllerModel");
  myr_MV = new Reader<double>(&v_MV, MV);
  SETNAME(myr_MV, "r_MV");
  myr_SP = new Reader<double>(&v_SP, SP);
  SETNAME(myr_SP, "r_SP");
  myw_output = new Writer<double>(&v_output, output);
  SETNAME(myw_output, "w_output");
  mywriter1 = new Writer<double>(&v_MV, steervalue);
  SETNAME(mywriter1, "writer1");

  // Create INS group
  myINS = new Parallel(
    (CSPConstruct *) myr_SP,
    (CSPConstruct *) myr_MV,
    NULL
  );
  SETNAME(myINS, "INS");

  // Create PARALLEL group
  myPARALLEL = new Parallel(
    (CSPConstruct *) myw_output,
    (CSPConstruct *) mywriter1,
    NULL
  );
  SETNAME(myPARALLEL, "PARALLEL");


  // Register model objects
  this->append_child(myINS);
  this->append_child(myXXControllerModel);
  this->append_child(myPARALLEL);

  // protected region constructor on begin
  // protected region constructor end
}

Controller::~Controller()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model groups
  delete myINS;
  delete myPARALLEL;

  // Destroy model objects
  delete mywriter1;
  delete myw_output;
  delete myr_SP;
  delete myr_MV;
  delete myXXControllerModel;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} 
