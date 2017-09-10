#pragma once
#include "Team.h"
class Processor {
	Team *MyTeam;
	Processor(Team *Team) {
		MyTeam = Team;
	}
};