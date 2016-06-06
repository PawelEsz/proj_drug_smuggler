#include "smuggler.h"
#include <iostream>
#include <time.h>

using namespace std;

int random(int a)
{
	return rand() % (a+1);
}

Smuggler::Smuggler()
{
	_stress = random(30);
	_documents = random(10);
	_hideDrug = random(10);
	_persuasion = random(10);
	_escape = random(10);
	_luck = random(10);
	_hideout = 1;//random(4);
}

int Smuggler::getStress() {return _stress;}
int Smuggler::getDocuments() {return _documents;}
int Smuggler::getHideout() {return _hideout;}
int Smuggler::getHideDrug() {return _hideDrug;}

bool Smuggler::persuasion(Police* police)
{
	int r = police->getResistanceBribe();

	return (_persuasion > r);
}

bool Smuggler::escape(Police* police)
{
	int c = police->getCatching();

	return ((_luck + _escape) > c);
}

string Smuggler::description()
{
	return "STATYSTYKI PRZEMYTNIKA:\n"
			"Poziom stresu: " + to_string(_stress) + "\n" +
			"Zgodnosc dokumentow: " + to_string(_documents) + "\n" +
			"Umiejetnosc ukrycia narkotykow: " + to_string(_hideDrug) + "\n" +
			"Sila perswazji: " + to_string(_persuasion) + "\n" +
			"Umiejetnosc ucieczki: " + to_string(_escape) + "\n" +
			"Szczescie: " + to_string(_luck) + "\n" +
			"Kryjowka: " + to_string(_hideout) + "\n\n";
}