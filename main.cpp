#include <stdlib.h>
#include <iostream>
#include <string>
#include "smuggler.h"
#include "police.h"
#include <unistd.h>

using namespace std;

int main(int argc, const char *argv[])
{
	srand(argc == 2 ? atoi(argv[1])
		: time(NULL));
	int n = 5;

	Smuggler smuggler;
	Police police;
	cout << police.description() << endl;
	cout << smuggler.description() << endl;

	if (police.check(&smuggler))
	{
		sleep(5);
		cout << "Dojezdzasz swoja fura do granicy. Przed soba widzisz juz straznika, ktory szczerzy do Ciebie zeby, po czym mowi:\n"
		"- Ulala, koleżko... Cos mi tu smierdzi! - rzekl policjant mruzac oczy "
		"i spogladajac na ciebie badawczo." << endl;
		if (police.searchHideout(&smuggler))
		{
			sleep(n);
			cout << "- No! czuje ze to nie bedzie dla Ciebie najlepszy dzien! - rzekl policjant szukajac w miejscu "
			"gdzie schowales narkotyki." << endl;
			if(police.searchDrug(&smuggler))
			{
				sleep(n);
				cout << "A co tu? Co to kurna jest?! - krzyknal ze zdumieniem policjant "
				"bujajac w oblokach z myslami jak jego premia za spacyfikowanie mafii "
				"narkotykowej przelewa sie na jego chudziutkie konto bankowe.\n Probujesz "
				"wiec przekonac sluzbiste do wziecia lapowki w celu puszczenia twej osoby "
				"i twego towaru wolno." << endl;
				if (smuggler.persuasion(&police))
				{
					sleep(n);
					cout << "- Ulala, kierowniku, naczelniku, dyrektorze. - policjant mruga okiem, "
					"rozglada sie badawczo wokol siebie i rzuca szybko tajny znak, w postaci kiwniecia "
					"glowa, ktory oznacza jego aprobate.\nGratulacje, udalo Ci sie przekupic policjanta "
					"za wagon ukrainskich fajek! Odpalasz samochod i przekraczasz granice z nieco chudszym "
					"portfelem lecz z ulga na sercu." << endl;
				}
				else
				{
					sleep(n);
					cout << "Takich sluzbistow ze swieca szukac. Niestety policjanta nie przekonala lapowka "
					"w postaci wagonu ukrainskich papierosow. Uciekac, czy nie uciekac... oto jest pytanie." << endl;
					if(police.getPosture() < 8)
					{
						sleep(n);
						cout << "Policjant nie wyglada postawnie. Zagryzasz wargi i bierzesz tylek w troki "
						"wskakujac do samochodu, niszczac szlaban. Raz sie zyje - mowisz pod nosem i wbijasz kolejny bieg." << endl;
						if(smuggler.escape(&police))
						{
							sleep(n);
							cout << "Po kilku kilometrach gonitwy spostrzegasz w lusterku, iz radiowoz lapie "
							"gume i robi karambol blokujac droge za twoimi plecami. Udalo ci sie uciec, wiec "
							"uspokajasz noge na gazie i... i gratulacje! Przewiozles narkotyki przez granice!" << endl;
						}
						else
						{
							sleep(n);
							cout << "Niestety, policjantowi bardzo zalezalo na premii. Skubaniec nawet wezwal helikopter "
							"do poscigu. Spektakularnie zostales zlapany i aresztowany. Za kare piszesz symulator ucieczki z wiezienia!" << endl;
						}
					}	
					else
					{
						sleep(n);
						cout << "Cykasz sie miesni policjanta, jego postury. Uwazasz ze jestes zbyt slaby na takie " 
						"zabawy jak uciekanie policji. Nie ryzykujac dodatkowych lat w pace, wznosisz dlonie i czujesz "
						"chlod kajdanek, oplatajacych twoje nadgarstki. Zostales aresztowany. Za kare piszesz symulator ucieczki z wiezienia!" << endl;
					}
				}
			}
			else
			{
				sleep(n);
				cout << "- Hm... no nic tu ciekawego nie ma panie kierowco. Prosze jechac.\nGratulace, "
				"policjant nie znalazl narkotykow mimo, ze szukal we wlasciwym miejscu." << endl;
			}

		}
		else
		{
			sleep(n);
			cout << "Widzisz, ze policjant szuka tam gdzie narkotykow nie ma. Masz ochote pobawic sie z nim w 'cieplo/zimno'. "
			"Policjant nie znalazl kryjowki! Gratulacje! Przejezdzasz przez granice." << endl;
		}
	}
	else
	{
		sleep(n);
		cout << "Dojezdzasz swoja bryka do bramek granicznych. Twoja twarz wyglada na opanowana, uprzejmna - taka jak policjant lubi. Dodatkowo twoja kartoteka jest czysta. "
		"Obeszlo sie sie bez kontroli. Szlaban unosi sie do gory i spokojnie ruszasz, pokonujac granice. Gratulacje, udalo sie przemycic narkotyki." << endl;
	}
}