#pragma once
#include <string>
#include "police.h"

using namespace std;

int random(int);

class Police;

class Smuggler
{
	int _stress;
	int _documents;
	int _hideDrug;
	int _persuasion;
	int _escape;
	int _luck;
	int _hideout;

public:

	Smuggler();
	//~Smuggler();

	int getStress();
	int getDocuments();
	int getHideout();
	int getHideDrug();

	bool persuasion(Police*);
	bool escape(Police*);
	string description();
	
};