#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartMenuExperienceHost.exe by Windissect. 3 member(s).
class __winRT {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z
    long __getActivationFactoryByPCWSTR(void *, ::Platform::Guid &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z
    long __getIids(int, unsigned long *, __s_GUID const *, ::Platform::Guid * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z
    long __windowsCreateString(wchar_t const *, int, HSTRING__* *);
};
