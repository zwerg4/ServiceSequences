/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: G_10Events_5Unused
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "G_10Events_5Unused_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/G_10Events_5Unused_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__G_10Events_5Unused, g_nStringIdservSeq__G_10Events_5Unused)

const CStringDictionary::TStringId FORTE_servSeq__G_10Events_5Unused::scmDataOutputNames[] = {g_nStringIdOutputString};
const CStringDictionary::TStringId FORTE_servSeq__G_10Events_5Unused::scmDataOutputTypeIds[] = {g_nStringIdSTRING};
const TForteInt16 FORTE_servSeq__G_10Events_5Unused::scmEIWithIndexes[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_servSeq__G_10Events_5Unused::scmEventInputNames[] = {g_nStringIdEI1, g_nStringIdEI2, g_nStringIdEI3, g_nStringIdEI4, g_nStringIdEI5, g_nStringIdEI6, g_nStringIdEI7, g_nStringIdEI8, g_nStringIdEI9, g_nStringIdEI10};
const TDataIOID FORTE_servSeq__G_10Events_5Unused::scmEOWith[] = {0, scmWithListDelimiter};
const TForteInt16 FORTE_servSeq__G_10Events_5Unused::scmEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_servSeq__G_10Events_5Unused::scmEventOutputNames[] = {g_nStringIdAlgo1};
const SFBInterfaceSpec FORTE_servSeq__G_10Events_5Unused::scmFBInterfaceSpec = {
  10, scmEventInputNames, nullptr, scmEIWithIndexes,
  1, scmEventOutputNames, scmEOWith, scmEOWithIndexes,
  0, nullptr, nullptr,
  1, scmDataOutputNames, scmDataOutputTypeIds,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__G_10Events_5Unused::FORTE_servSeq__G_10Events_5Unused(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr),
    var_conn_OutputString(var_OutputString),
    conn_Algo1(this, 0),
    conn_OutputString(this, 0, &var_conn_OutputString) {
}

void FORTE_servSeq__G_10Events_5Unused::setInitialValues() {
  var_OutputString = ""_STRING;
}

void FORTE_servSeq__G_10Events_5Unused::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
  do {
    switch(mECCState) {
      case scmStateSTART:
        if(scmEventEI1ID == paEIID) enterStateState_1(paECET);
        else
        if(scmEventEI3ID == paEIID) enterStateState_2(paECET);
        else
        if(scmEventEI5ID == paEIID) enterStateState_3(paECET);
        else
        if(scmEventEI7ID == paEIID) enterStateState_4(paECET);
        else
        if(scmEventEI9ID == paEIID) enterStateState_5(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_1:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_2:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_3:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_4:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_5:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 6.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__G_10Events_5Unused::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__G_10Events_5Unused::enterStateState_1(CEventChainExecutionThread *const) {
  mECCState = scmStateState_1;
}

void FORTE_servSeq__G_10Events_5Unused::enterStateState_2(CEventChainExecutionThread *const) {
  mECCState = scmStateState_2;
}

void FORTE_servSeq__G_10Events_5Unused::enterStateState_3(CEventChainExecutionThread *const) {
  mECCState = scmStateState_3;
}

void FORTE_servSeq__G_10Events_5Unused::enterStateState_4(CEventChainExecutionThread *const) {
  mECCState = scmStateState_4;
}

void FORTE_servSeq__G_10Events_5Unused::enterStateState_5(CEventChainExecutionThread *const) {
  mECCState = scmStateState_5;
}

void FORTE_servSeq__G_10Events_5Unused::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__G_10Events_5Unused::writeOutputData(const TEventID paEIID) {
  switch(paEIID) {
    case scmEventAlgo1ID: {
      writeData(0, var_OutputString, conn_OutputString);
      break;
    }
    default:
      break;
  }
}

CIEC_ANY *FORTE_servSeq__G_10Events_5Unused::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__G_10Events_5Unused::getDO(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_OutputString;
  }
  return nullptr;
}

CEventConnection *FORTE_servSeq__G_10Events_5Unused::getEOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_Algo1;
  }
  return nullptr;
}

CDataConnection **FORTE_servSeq__G_10Events_5Unused::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__G_10Events_5Unused::getDOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_OutputString;
  }
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__G_10Events_5Unused::getVarInternal(size_t) {
  return nullptr;
}

