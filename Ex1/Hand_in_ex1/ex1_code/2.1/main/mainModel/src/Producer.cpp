/**
 * Source file for the Producer model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "Producer.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace Producer { 

/*
 * Global variable to access the model instance
 * TODO This fails when Producer is used multiple times!
 */
Producer* g_Producer;

// Wrapper function of evaluate function for the Prullenbak guard
bool myPrullenbakGuardEvaluateWrapper()
{
  // Just call the class function
  return g_Producer->PrullenbakGuardEvaluate();
}

// Wrapper function of evaluate function for the w1 guard
bool myw1GuardEvaluateWrapper()
{
  // Just call the class function
  return g_Producer->w1GuardEvaluate();
}

// Wrapper function of evaluate function for the w2 guard
bool myw2GuardEvaluateWrapper()
{
  // Just call the class function
  return g_Producer->w2GuardEvaluate();
}

// Wrapper function of evaluate function for the w3 guard
bool myw3GuardEvaluateWrapper()
{
  // Just call the class function
  return g_Producer->w3GuardEvaluate();
}

Producer::Producer(ChannelIn<int> *ch1, ChannelIn<int> *ch2, ChannelIn<int> *ch3) :
    Sequential(NULL)
{
  SETNAME(this, "Producer");
  g_Producer = this;

  // Initialize model objects
  myPCode = new PCode::PCode(data);
  SETNAME(myPCode, "PCode");
  myPrullenbak = new Prullenbak::Prullenbak(data);
  SETNAME(myPrullenbak, "Prullenbak");
  myw1 = new Writer<int>(&data, ch1);
  SETNAME(myw1, "w1");
  myw2 = new Writer<int>(&data, ch2);
  SETNAME(myw2, "w2");
  myw3 = new Writer<int>(&data, ch3);
  SETNAME(myw3, "w3");

  // Set conditions for the guarded objects that are not in a Sequential group
  AltIfOption<int>* myPrullenbak_guard = new AltIfOption<int>(myPrullenbak, myPrullenbakGuardEvaluateWrapper);
  SETNAME(myPrullenbak_guard, "Prullenbak-guard");
  AltIfOption<int>* myw1_guard = new AltIfOption<int>(myw1, myw1GuardEvaluateWrapper);
  SETNAME(myw1_guard, "w1-guard");
  AltIfOption<int>* myw2_guard = new AltIfOption<int>(myw2, myw2GuardEvaluateWrapper);
  SETNAME(myw2_guard, "w2-guard");
  AltIfOption<int>* myw3_guard = new AltIfOption<int>(myw3, myw3GuardEvaluateWrapper);
  SETNAME(myw3_guard, "w3-guard");
  // Create ALTERNATIVE group
  myALTERNATIVE = new Alternative(
    true,
    (CSPConstruct *) myw2_guard,
    (CSPConstruct *) myw3_guard,
    (CSPConstruct *) myPrullenbak_guard,
    (CSPConstruct *) myw1_guard,
    NULL
  );
  SETNAME(myALTERNATIVE, "ALTERNATIVE");


  // Register model objects
  this->append_child(myPCode);
  this->append_child(myALTERNATIVE);

  // protected region constructor on begin
  // protected region constructor end
}

Producer::~Producer()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model groups
  delete myALTERNATIVE;

  // Destroy model objects
  delete myw3;
  delete myw2;
  delete myw1;
  delete myPrullenbak;
  delete myPCode;
}

bool Producer::PrullenbakGuardEvaluate()
{
  return data != 1 && data != 2 && data != 3;
}

bool Producer::w1GuardEvaluate()
{
  return data == 1;
}

bool Producer::w2GuardEvaluate()
{
  return data == 2;
}

bool Producer::w3GuardEvaluate()
{
  return data == 3;
}

// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} } 
