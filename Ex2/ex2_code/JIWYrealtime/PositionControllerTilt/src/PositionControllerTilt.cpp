/**
 * Source file for the PositionControllerTilt model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "PositionControllerTilt.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace PositionControllerTilt { 

PositionControllerTilt::PositionControllerTilt(ChannelOut<double> *corr, ChannelOut<double> *in, ChannelIn<double> *out, ChannelOut<double> *position) :
    Sequential(NULL)
{
  SETNAME(this, "PositionControllerTilt");

  // Initialize model objects
  myXXPositionControllerTiltModel = new XXPositionControllerTiltModel::XXPositionControllerTiltModel(v_corr, v_in, v_out, v_position);
  SETNAME(myXXPositionControllerTiltModel, "XXPositionControllerTiltModel");
  myr_corr = new Reader<double>(&v_corr, corr);
  SETNAME(myr_corr, "r_corr");
  myr_in = new Reader<double>(&v_in, in);
  SETNAME(myr_in, "r_in");
  myr_position = new Reader<double>(&v_position, position);
  SETNAME(myr_position, "r_position");
  myw_out = new Writer<double>(&v_out, out);
  SETNAME(myw_out, "w_out");

  // Create INS group
  myINS = new Parallel(
    (CSPConstruct *) myr_corr,
    (CSPConstruct *) myr_in,
    (CSPConstruct *) myr_position,
    NULL
  );
  SETNAME(myINS, "INS");


  // Register model objects
  this->append_child(myINS);
  this->append_child(myXXPositionControllerTiltModel);
  this->append_child(myw_out);

  // protected region constructor on begin
  // protected region constructor end
}

PositionControllerTilt::~PositionControllerTilt()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model groups
  delete myINS;

  // Destroy model objects
  delete myw_out;
  delete myr_position;
  delete myr_in;
  delete myr_corr;
  delete myXXPositionControllerTiltModel;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} 
