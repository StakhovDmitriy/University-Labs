#pragma once
#include "Team.h"
class Processor {
private:
	Team *MyTeam;
public:
	Team* GetTeam() {
		return MyTeam;
	}
	Processor(Team *Team) {
		MyTeam = Team;
	}
};