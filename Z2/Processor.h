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
	vector<Footballer*> GetBestThreePlayers() {
		vector<Footballer*> bestPlayers = GetTeam()->GetPlayers();
		while (bestPlayers.size() > 3) {
			short indexOfWorsestPlayer = 0;
			for (short i = 1; i < 4; i++)
			{
				if (bestPlayers[i]->GetGoals() < bestPlayers[indexOfWorsestPlayer]->GetGoals())
				{
					indexOfWorsestPlayer = i;
				}
			}
			bestPlayers.erase(bestPlayers.begin() + indexOfWorsestPlayer);
		}
		return bestPlayers;
	}
};