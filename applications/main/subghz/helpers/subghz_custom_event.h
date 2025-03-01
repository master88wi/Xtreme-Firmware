#pragma once

typedef enum {
    SubGhzCustomEventManagerNoSet = 0,
    SubGhzCustomEventManagerSet,
    SubGhzCustomEventManagerSetRAW,

    //SubmenuIndex
    SubmenuIndexFaacSLH_Manual_433,
    SubmenuIndexFaacSLH_Manual_868,
    SubmenuIndexFaacSLH_433,
    SubmenuIndexFaacSLH_868,
    SubmenuIndexBFTClone,
    SubmenuIndexBFTMitto,
    SubmenuIndexSomfyTelis,
    SubmenuIndexBeninca433,
    SubmenuIndexBeninca868,
    SubmenuIndexAllmatic433,
    SubmenuIndexAllmatic868,
    SubmenuIndexCenturion433,
    SubmenuIndexIronLogic,
    SubmenuIndexElmesElectronic,
    SubmenuIndexSommer_FM_434,
    SubmenuIndexSommer_FM_868,
    SubmenuIndexStilmatic,
    SubmenuIndexDTMNeo433,
    SubmenuIndexGibidi433,
    SubmenuIndexGSN,
    SubmenuIndexAprimatic,
    SubmenuIndexANMotorsAT4,
    SubmenuIndexAlutechAT4N,
    SubmenuIndexNiceFlo12bit,
    SubmenuIndexNiceFlo24bit,
    SubmenuIndexNiceFlorS_433_92,
    SubmenuIndexNiceOne_433_92,
    SubmenuIndexNiceSmilo_433_92,
    SubmenuIndexCAME12bit,
    SubmenuIndexCAME24bit,
    SubmenuIndexCAME12bit868,
    SubmenuIndexCAME24bit868,
    SubmenuIndexCAMETwee,
    SubmenuIndexCAMESpace,
    SubmenuIndexCameAtomo433,
    SubmenuIndexCameAtomo868,
    SubmenuIndexPricenton433,
    SubmenuIndexPricenton315,
    SubmenuIndexBETT_433,
    SubmenuIndexLinear_300_00,
    SubmenuIndexNeroSketch, //Deleted in OFW
    SubmenuIndexNeroRadio, //Deleted in OFW
    SubmenuIndexGateTX,
    SubmenuIndexDoorHan_315_00,
    SubmenuIndexDoorHan_433_92,
    SubmenuIndexLiftMaster_315_00,
    SubmenuIndexLiftMaster_390_00,
    SubmenuIndexLiftMaster_433_00,
    SubmenuIndexSecPlus_v2_310_00,
    SubmenuIndexSecPlus_v2_315_00,
    SubmenuIndexSecPlus_v2_390_00,
    SubmenuIndexSecPlus_v2_433_00,

    //SubGhzCustomEvent
    SubGhzCustomEventSceneDeleteSuccess = 100,
    SubGhzCustomEventSceneDelete,
    SubGhzCustomEventSceneDeleteRAW,
    SubGhzCustomEventSceneDeleteRAWBack,

    SubGhzCustomEventSceneReceiverInfoTxStart,
    SubGhzCustomEventSceneReceiverInfoTxStop,
    SubGhzCustomEventSceneReceiverInfoSave,
    SubGhzCustomEventSceneSaveName,
    SubGhzCustomEventSceneSaveSuccess,
    SubGhzCustomEventSceneShowErrorBack,
    SubGhzCustomEventSceneShowErrorOk,
    SubGhzCustomEventSceneShowErrorSub,
    SubGhzCustomEventSceneShowOnlyRX,
    SubGhzCustomEventSceneAnalyzerLock,
    SubGhzCustomEventSceneAnalyzerUnlock,
    SubGhzCustomEventSceneSettingLock,

    SubGhzCustomEventSceneExit,
    SubGhzCustomEventSceneStay,

    SubGhzCustomEventSceneRpcLoad,
    SubGhzCustomEventSceneRpcButtonPress,
    SubGhzCustomEventSceneRpcButtonRelease,
    SubGhzCustomEventSceneRpcSessionClose,

    SubGhzCustomEventViewReceiverOK,
    SubGhzCustomEventViewReceiverConfig,
    SubGhzCustomEventViewReceiverBack,
    SubGhzCustomEventViewReceiverOffDisplay,
    SubGhzCustomEventViewReceiverUnlock,
    SubGhzCustomEventViewReceiverDeleteItem,

    SubGhzCustomEventViewReadRAWBack,
    SubGhzCustomEventViewReadRAWIDLE,
    SubGhzCustomEventViewReadRAWREC,
    SubGhzCustomEventViewReadRAWConfig,
    SubGhzCustomEventViewReadRAWErase,
    SubGhzCustomEventViewReadRAWSendStart,
    SubGhzCustomEventViewReadRAWSendStop,
    SubGhzCustomEventViewReadRAWSave,
    SubGhzCustomEventViewReadRAWTXRXStop,
    SubGhzCustomEventViewReadRAWMore,

    SubGhzCustomEventViewTransmitterBack,
    SubGhzCustomEventViewTransmitterSendStart,
    SubGhzCustomEventViewTransmitterSendStop,
    SubGhzCustomEventViewTransmitterError,

    SubGhzCustomEventViewFreqAnalOkShort,
    SubGhzCustomEventViewFreqAnalOkLong,

    SubGhzCustomEventByteInputDone,
} SubGhzCustomEvent;
