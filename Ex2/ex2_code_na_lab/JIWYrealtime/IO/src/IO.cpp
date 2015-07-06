/**
 * Source file for the IO model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "IO.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace IO { 

IO::IO(ChannelOut<double> *horin, ChannelIn<uint16_t> *horout, ChannelOut<double> *verin, ChannelIn<uint16_t> *verout) :
    Parallel(NULL)
{
  SETNAME(this, "IO");

  // Initialize model objects
  myhor_convert = new hor_convert::hor_convert(hor_input, hor_output);
  SETNAME(myhor_convert, "hor_convert");
  myhorinpre = new Reader<double>(&hor_input, horin);
  SETNAME(myhorinpre, "horinpre");
  myhoroutwr = new Writer<uint16_t>(&hor_output, horout);
  SETNAME(myhoroutwr, "horoutwr");
  myver_convert = new ver_convert::ver_convert(ver_input, ver_output);
  SETNAME(myver_convert, "ver_convert");
  myverinre = new Reader<double>(&ver_input, verin);
  SETNAME(myverinre, "verinre");
  myveroutwr = new Writer<uint16_t>(&ver_output, verout);
  SETNAME(myveroutwr, "veroutwr");

  // Create SEQUENTIAL group
  mySEQUENTIAL = new Sequential(
    (CSPConstruct *) myhorinpre,
    (CSPConstruct *) myhor_convert,
    (CSPConstruct *) myhoroutwr,
    NULL
  );
  SETNAME(mySEQUENTIAL, "SEQUENTIAL");

  // Create SEQUENTIAL1 group
  mySEQUENTIAL1 = new Sequential(
    (CSPConstruct *) myverinre,
    (CSPConstruct *) myver_convert,
    (CSPConstruct *) myveroutwr,
    NULL
  );
  SETNAME(mySEQUENTIAL1, "SEQUENTIAL1");


  // Register model objects
  this->append_child(mySEQUENTIAL);
  this->append_child(mySEQUENTIAL1);

  // protected region constructor on begin

  // protected region constructor end
}

IO::~IO()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin

  // protected region destructor end

  // Destroy model groups
  delete mySEQUENTIAL;
  delete mySEQUENTIAL1;

  // Destroy model objects
  delete myveroutwr;
  delete myverinre;
  delete myver_convert;
  delete myhoroutwr;
  delete myhorinpre;
  delete myhor_convert;
}



// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} 