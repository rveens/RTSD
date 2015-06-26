/**
 * Source file for the XXControllerModel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * 20-sim C++ glue code to connect to ControllerModel
 * Modifying this file is absolutely not recommended!
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "XXControllerModel.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace Controller { namespace XXControllerModel { 

XXControllerModel::XXControllerModel(double &MV, double &SP, double &output) :
    CodeBlock(), MV(MV), SP(SP), output(output){
  SETNAME(this, "XXControllerModel");

  using namespace LUNA::xxsim;

  m_model = new ControllerModel;


  m_model->addInput(&SP, XXVARIABLE, 0, 1, 1);


  m_model->addInput(&MV, XXVARIABLE, 1, 1, 1);


  m_model->addOutput(&output, XXVARIABLE, 2, 1, 1);


  m_model->start();
}

XXControllerModel::~XXControllerModel()
{
    m_model->stop();

	//@todo Clean up adapters

    delete m_model;
}

void XXControllerModel::execute()
{
    m_model->step();
}

// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} } 
