#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartMenuExperienceHost.exe by Windissect. 4 member(s).
namespace ExperienceHostLoggingTelemetry {
class LaunchExperience {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchExperience@ExperienceHostLoggingTelemetry@@QEAAXPEB_W@Z
    void StartActivity(wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchExperience@ExperienceHostLoggingTelemetry@@QEAA@XZ
    ~LaunchExperience();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchExperience@ExperienceHostLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchExperience@ExperienceHostLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ExperienceHostLoggingTelemetry
