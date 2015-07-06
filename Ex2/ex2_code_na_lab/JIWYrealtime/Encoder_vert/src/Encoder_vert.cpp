/**
 * Source file for the Encoder_vert model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "Encoder_vert.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace Encoder_vert { 

Encoder_vert::Encoder_vert(ChannelOut<uint32_t> *inputport, ChannelIn<double> *outputport) :
    Sequential(NULL)
{
  SETNAME(this, "Encoder_vert");

  // Initialize model objects
  myencoder_reader = new Reader<uint32_t>(&input, inputport);
  SETNAME(myencoder_reader, "encoder_reader");
  myencodervert = new encodervert::encodervert(input, output);
  SETNAME(myencodervert, "encodervert");
  myendocer_writer = new Writer<double>(&output, outputport);
  SETNAME(myendocer_writer, "endocer_writer");


  // Register model objects
  this->append_child(myencoder_reader);
  this->append_child(myencodervert);
  this->append_child(myendocer_writer);

  // protected region constructor on begin
  // protected region constructor end
}

Encoder_vert::~Encoder_vert()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model objects
  delete myendocer_writer;
  delete myencodervert;
  delete myencoder_reader;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} 
