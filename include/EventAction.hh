
#ifndef B1EventAction_h
#define B1EventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"

#include "G4Event.hh"
#include "G4AnalysisManager.hh"

#include "RunAction.hh"

/// Event action class

namespace sim
{

class EventAction : public G4UserEventAction
{
  public:
    EventAction(RunAction*);
    ~EventAction();

    void BeginOfEventAction(const G4Event*);
    void EndOfEventAction(const G4Event*);

    void AddEdep(G4double edep) { fEdep += edep; }

  private:
    RunAction* fRunAction = nullptr;
    G4double   fEdep;

};

}

#endif


