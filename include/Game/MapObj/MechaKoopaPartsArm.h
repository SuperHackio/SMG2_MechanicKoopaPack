#pragma once

#include "Game/MapObj/MapObjActor.h"

class MechaKoopaPartsArm : public MapObjActor {
public:
    MechaKoopaPartsArm(const char*);

    virtual ~MechaKoopaPartsArm();
    virtual void init(const JMapInfoIter&);
    virtual void initCaseUseSwitchB(const MapObjActorInitInfo&);
    virtual void initCaseNoUseSwitchB(const MapObjActorInitInfo&);

    void exeWait();
    void exeMoveStart();
    void exeMove();
    void exeBreakStart();
    void exeBreak();
    void startBreak();

    bool mIsRightArm;   // _C4
};

namespace NrvMechaKoopaPartsArm {
    NERVE(MechaKoopaPartsArmNrvWaitFront);
    NERVE(MechaKoopaPartsArmNrvWaitRear);
    ENDABLE_NERVE(MechaKoopaPartsArmNrvMoveStartFront);
    ENDABLE_NERVE(MechaKoopaPartsArmNrvMoveStartRear);
    NERVE(MechaKoopaPartsArmNrvMoveFront);
    NERVE(MechaKoopaPartsArmNrvMoveRear);
    NERVE(MechaKoopaPartsArmNrvBreakStart);
    NERVE(MechaKoopaPartsArmNrvBreak);
};