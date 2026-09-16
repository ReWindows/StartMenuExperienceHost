#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartMenuExperienceHost.exe by Windissect. 5 member(s).
class __abi_FTMWeakRefData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ
    void ReleaseControlBlock();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z
    __abi_FTMWeakRefData(::Platform::Object & *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z
    __abi_FTMWeakRefData(::Platform::Object & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z
    long __abi_QueryInterface(::Platform::Guid &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ
    void __abi_dtor();
};
