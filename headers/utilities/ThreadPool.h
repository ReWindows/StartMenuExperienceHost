#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartMenuExperienceHost.exe by Windissect. 1 member(s).
namespace Windows::System::Threading {
class ThreadPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunAsync@ThreadPool@Threading@System@Windows@@SAPE$AAUIAsyncAction@Foundation@4@PE$AAVWorkItemHandler@234@@Z
    static ::Windows::Foundation::IAsyncAction & * RunAsync(::Windows::System::Threading::WorkItemHandler & *);
};
} // namespace Windows::System::Threading
