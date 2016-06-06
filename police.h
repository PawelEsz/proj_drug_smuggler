#pragma once
#include <string>
#include "smuggler.h"

using namespace std;

class Smuggler;

class Police
{
	int _stressAnalysis;
	int _resistanceBribe;
	int _catching;
	int _searchDrug;
	int _posture;

public:
	Police();
	//~Police();

	int getResistanceBribe();
	int getPosture();
	int getCatching();

	bool check(Smuggler*);
	bool searchHideout(Smuggler*);
	bool searchDrug(Smuggler*);
	string description();
};