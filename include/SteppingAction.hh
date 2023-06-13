
#ifndef B1SteppingAction_h
#define B1SteppingAction_h 1

#include "G4UserSteppingAction.hh"
#include "globals.hh"

#include "G4Step.hh"

#include "EventAction.hh"

#include "G4LogicalVolume.hh"
#include "DetectorConstruction.hh"

/// Stepping action class

namespace sim
{

class SteppingAction : public G4UserSteppingAction
{
  public:
    SteppingAction(EventAction* eventAction);
    ~SteppingAction();

    // method from the base class
    virtual void UserSteppingAction(const G4Step*);

  private:
    //EventAction* fEventAction = nullptr;
    //G4LogicalVolume* fScoringVolume = nullptr;
    EventAction* fEventAction;
};

}

#endif
