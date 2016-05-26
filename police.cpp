#include 'police.h'
#include <string>
#include <iostream>
#include <time.h>

int random(int a)
{
	return rand %(a+1);
}

Police::Police()
{
	_stressAnalysis = random(10);
	_resistanceBribe = random(25);
	_catching = random(25);
	_searchDrug = random(15);
	_posture = random(10);
}

bool Police::check(Smuggler* smuggler)
{
	int s = smuggler->getStress();
	int d = smuggler->getDocuments();

	if (((s+d) - (_stressAnalysis)) > 20)
	{
		_searchDrug += random(10) + 1;
		cout << "Wezwanie psa!";
	}

	return (_stressAnalysis < (s + d));
}

bool searchDrug(Smuggler* smuggler)
{
	int h = smuggler->getHideout();
	int r = random(5);

	return (h == r);
}