/**
 * Header file for the PositionControllerTilt model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "XXPositionControllerTiltModel.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace PositionControllerTilt { 

class PositionControllerTilt : public Sequential
{

public:
  // Define constructor and destructor
  PositionControllerTilt(ChannelOut<double> *corr, ChannelOut<double> *in, ChannelIn<double> *out, ChannelOut<double> *position);
  virtual ~PositionControllerTilt();

private:

  // Class variables
  double v_corr;
  double v_in;
  double v_out;
  double v_position;

  // Model objects
  XXPositionControllerTiltModel::XXPositionControllerTiltModel *myXXPositionControllerTiltModel;
  Reader<double> *myr_corr;
  Reader<double> *myr_in;
  Reader<double> *myr_position;
  Writer<double> *myw_out;

  // Model groups
  Parallel *myINS;



  // protected region additional class members or functions on begin
  // protected region additional class members or functions end
};

// Close namespace(s)
} 
