/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: F_1States_2Algo
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#pragma once

#include "basicfb.h"
#include "forte_string.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class FORTE_servSeq__F_1States_2Algo final : public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_servSeq__F_1States_2Algo)

  private:
    static const CStringDictionary::TStringId scmDataOutputNames[];
    static const CStringDictionary::TStringId scmDataOutputTypeIds[];
    static const TEventID scmEventEI1ID = 0;
    static const TForteInt16 scmEIWithIndexes[];
    static const CStringDictionary::TStringId scmEventInputNames[];
    static const TEventID scmEventAlgo1ID = 0;
    static const TForteInt16 scmEOWithIndexes[];
    static const CStringDictionary::TStringId scmEventOutputNames[];

    static const SFBInterfaceSpec scmFBInterfaceSpec;

    CIEC_ANY *getVarInternal(size_t) override;

    void alg_ALGO1(void);
    void alg_ALGO2(void);

    static const TForteInt16 scmStateSTART = 0;
    static const TForteInt16 scmStateState_1 = 1;
    static const TForteInt16 scmStateState = 2;

    void enterStateSTART(CEventChainExecutionThread *const paECET);
    void enterStateState_1(CEventChainExecutionThread *const paECET);
    void enterStateState(CEventChainExecutionThread *const paECET);

    void executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) override;

    void readInputData(TEventID paEIID) override;
    void writeOutputData(TEventID paEIID) override;
    void setInitialValues() override;

  public:
    FORTE_servSeq__F_1States_2Algo(CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer);

    CIEC_STRING var_OutputString;

    CIEC_STRING var_conn_OutputString;

    CEventConnection conn_Algo1;

    CDataConnection conn_OutputString;

    CIEC_ANY *getDI(size_t) override;
    CIEC_ANY *getDO(size_t) override;
    CEventConnection *getEOConUnchecked(TPortId) override;
    CDataConnection **getDIConUnchecked(TPortId) override;
    CDataConnection *getDOConUnchecked(TPortId) override;

    void evt_EI1(CIEC_STRING &paOutputString) {
      executeEvent(scmEventEI1ID, nullptr);
      paOutputString = var_OutputString;
    }

    void operator()(CIEC_STRING &paOutputString) {
      evt_EI1(paOutputString);
    }
};


