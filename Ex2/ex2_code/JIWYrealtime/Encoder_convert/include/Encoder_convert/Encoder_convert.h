/**
 * Header file for the Encoder_convert model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "encoderconvert.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace Encoder_convert { 

class Encoder_convert : public Sequential
{

public:
  // Define constructor and destructor
  Encoder_convert(ChannelOut<uint32_t> *inputport, ChannelIn<double> *outputport);
  virtual ~Encoder_convert();

private:

  // Class variables
  uint32_t input;
  double output;

  // Model objects
  Reader<uint32_t> *myencoder_reader;
  encoderconvert::encoderconvert *myencoderconvert;
  Writer<double> *myendocer_writer;



  // protected region additional class members or functions on begin
  // protected region additional class members or functions end
};

// Close namespace(s)
} 
