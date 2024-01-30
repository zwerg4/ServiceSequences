/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: UnreachableState
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-11-22/AK124910 -  -
 *************************************************************************/

#pragma once

#include "basicfb.h"
#include "forte_int.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class FORTE_servSeq__UnreachableState final : public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_servSeq__UnreachableState)

  private:
    static const CStringDictionary::TStringId scmDataInputNames[];
    static const CStringDictionary::TStringId scmDataInputTypeIds[];
    static const TEventID scmEventEI1ID = 0;
    static const TDataIOID scmEIWith[];
    static const TForteInt16 scmEIWithIndexes[];
    static const CStringDictionary::TStringId scmEventInputNames[];
    static const TEventID scmEventEO1ID = 0;
    static const TForteInt16 scmEOWithIndexes[];
    static const CStringDictionary::TStringId scmEventOutputNames[];

    static const SFBInterfaceSpec scmFBInterfaceSpec;

    CIEC_ANY *getVarInternal(size_t) override;

    void alg_five(void);

    static const TForteInt16 scmStateSTART = 0;
    static const TForteInt16 scmStateState = 1;
    static const TForteInt16 scmStateState_1 = 2;
    static const TForteInt16 scmStateState_2 = 3;

    void enterStateSTART(CEventChainExecutionThread *const paECET);
    void enterStateState(CEventChainExecutionThread *const paECET);
    void enterStateState_1(CEventChainExecutionThread *const paECET);
    void enterStateState_2(CEventChainExecutionThread *const paECET);

    void executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) override;

    void readInputData(TEventID paEIID) override;
    void writeOutputData(TEventID paEIID) override;
    void setInitialValues() override;

  public:
    FORTE_servSeq__UnreachableState(CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer);

    CIEC_INT var_input;

    CEventConnection conn_EO1;

    CDataConnection *conn_input;

    CIEC_ANY *getDI(size_t) override;
    CIEC_ANY *getDO(size_t) override;
    CEventConnection *getEOConUnchecked(TPortId) override;
    CDataConnection **getDIConUnchecked(TPortId) override;
    CDataConnection *getDOConUnchecked(TPortId) override;

    void evt_EI1(const CIEC_INT &painput) {
      var_input = painput;
      executeEvent(scmEventEI1ID, nullptr);
    }

    void operator()(const CIEC_INT &painput) {
      evt_EI1(painput);
    }
};


