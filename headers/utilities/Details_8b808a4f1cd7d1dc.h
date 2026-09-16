#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartMenuExperienceHost.exe by Windissect. 10 member(s).
namespace Platform {
class Details {
public:
    class ControlBlock;
    class Heap;
    class InProcModule;
    class __abi_CaptureBase;
    class __abi_CapturePtr;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@Details@Platform@@YAXXZ
    void Cleanup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCmdArguments@Details@Platform@@YAPEAPEA_WPEAH@Z
    wchar_t * * GetCmdArguments(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIBoxArrayVtable@Details@Platform@@YAPEAXPEAX@Z
    void * GetIBoxArrayVtable(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Details@Platform@@YAHXZ
    int Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeData@Details@Platform@@YAJH@Z
    long InitializeData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReCreateFromException@Details@Platform@@YAJPE$AAVException@2@@Z
    long ReCreateFromException(::Platform::Exception & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportUnhandledError@Details@Platform@@YAXPE$AAVException@2@@Z
    void ReportUnhandledError(::Platform::Exception & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeData@Details@Platform@@YAXH@Z
    void UninitializeData(int);
};
} // namespace Platform
