#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartMenuExperienceHost.exe by Windissect. 2 member(s).
namespace Platform::Details {
class Heap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@Heap@Details@Platform@@SAPEAX_K0@Z
    static void * Allocate(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z
    static void PlacementFree(void *, void *);
};
} // namespace Platform::Details
