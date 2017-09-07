#pragma once
#include<vector>
#include "Footballer.h"
class Team {
private:
	string Name;
	vector<Footballer> Players;
public:
	Team() {
		Name = "No Name";
	}
	Team(vector<Footballer> players) {
		this->Players = players;
	}
	int GetCount() {
		return Players.size();
	}
	void AddPlayer(Footballer footballer) {
		Players.push_back(footballer);
	}
	void DeletePlayer(Footballer footballer) {
		for(int i=0; i<Players.size();i++)
		{
			if (Players[i] == footballer)
				Players.erase(Players.begin + i);
		}
	}
};