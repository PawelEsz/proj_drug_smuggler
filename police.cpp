#include "police.h"
#include <iostream>
#include <time.h>
#include <string>

using namespace std;

Police::Police()
{
	_stressAnalysis = random(10);
	_resistanceBribe = random(25);
	_catching = random(25);
	_searchDrug = random(15);
	_posture = random(10);
}

int Police::getResistanceBribe() {return _resistanceBribe;}
int Police::getPosture() {return _posture;}
int Police::getCatching() {return _catching;}

bool Police::check(Smuggler* smuggler)
{
	int s = smuggler->getStress();
	int d = smuggler->getDocuments();

	if (((s+d) - (_stressAnalysis)) > 20)
	{
		_searchDrug += random(10) + 1;
		cout << "Wezwanie psa! Umiejetnosc znalezienia narkotykow policjanta wynosi teraz: " + to_string(_searchDrug) << endl;
	}

	return (_stressAnalysis < (s + d));
}

bool Police::searchHideout(Smuggler* smuggler)
{
	int h = smuggler->getHideout();
	int r = 1; //random(4);

	return (h == r);
}

bool Police::searchDrug(Smuggler* smuggler)
{
	int h = smuggler->getHideDrug();

	return (_searchDrug > h);
}

string Police::description()
{
	return "STATYSTYKI POLICJANTA:\n"
			"Analiza stresu: " + to_string(_stressAnalysis) + "\n" +
			"Odpornosc na lapowke: " + to_string(_resistanceBribe) + "\n" +
			"Umiejetnosc poscigu: " + to_string(_catching) + "\n" +
			"Umiejetnosc szukania narkotykow: " + to_string(_searchDrug) + "\n" +
			"Postura: " + to_string(_posture) + "\n\n";
}

