#inlcude <stdlib.h>
#inlcude 'smuggler.h'
#inlcude 'police.h'

using namespace std;

int main(int argc, const char *argv[])
{
	srand(argc == 2 ? atoi(argv[1])
		: time(NULL));

Smuggler smuggler;
Police police;

if (police.check(&smuggler))
{
	cout << "Ulala, koleżko... Cos mi tu smierdzi! - rzekl policjant krecac nosem." << endl;
	if (police.searchDrug(&smuggler))
	{

	}
	else
	{

	}
}
else
{
	cout << "Widze, ze nie ma tu czego szukac. Prosze jechac ostroznie" << endl;

}


}