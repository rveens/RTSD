/**
 * Header file for the MainModel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "Producer.h"
#include "consumer.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace MainModel { 

class MainModel : public Parallel
{

public:
  // Define constructor and destructor
  MainModel();
  virtual ~MainModel();



private:

  // Channel definitions
  UnbufferedChannel<int, One2In, Out2One> *myProducerch1_to_consumerch1Channel;
  UnbufferedChannel<int, One2In, Out2One> *myProducerch2_to_consumerch2Channel;
  UnbufferedChannel<int, One2In, Out2One> *myProducerch3_to_consumerch3Channel;

  // Model objects
  Producer::Producer *myProducer;
  consumer::consumer *myconsumer;

  // protected region additional class members or functions on begin
  // protected region additional class members or functions end
};

// Close namespace(s)
} 
