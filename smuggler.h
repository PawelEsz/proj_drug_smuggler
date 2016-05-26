#pragma once

class Smuggler
{
	int _stress;
	int _documents;
	int _hideDrug;
	int _perduasion;
	int _escpae;
	int _luck;
	int _hideout;

public:
	enum hideout
	{
		zaglowek,
		przySobie,
		nadkole,
		bagaznik,
		podFotelem, //',' zeby w gicie byla jedna zmiana
	};
	Smuggler();
	//~Smuggler();

	int getStress();
	int getDocuments();
	
};