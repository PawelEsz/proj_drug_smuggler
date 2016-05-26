#include 'smuggler.h'
#include <string>
#include <iostream>
#include <time.h>

int random(int a)
{
	return rand %(a+1);
}

Smuggler::Smuggler()
{
	_stress = random(30);
	_documents = random(10);
	_hideDrug = random(25);
	_perduasion = random(10);
	_escape = random(10);
	_luck = random(10);
	_hideuot = random(5)
}

int Smuggler::getStress() {return _stress};
int Smuggler::getDocuments() {return _documents};
int Smuggler::getHideout() {return _hideuot};
