#pragma once
#inlucde 'smuggler.h'

class Police
{
	int _stressAnalysis;
	int _resistanceBribe;
	int _catching;
	int _searchDrug;
	int _posture;

public:
	Police();
	~Police();

	bool check(Smuggler*);
	bool searchDrug(Smuggler*);
};