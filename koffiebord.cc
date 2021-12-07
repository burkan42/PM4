// file koffiebord.cc
#include <iostream>
#include "koffiebord.h"
using namespace std;
int bovengrens = 500;
int leesgetal (int bovengrens) 
{
	char kar = cin.get();
	int getal = 0;
	while (kar == '\n')
	{ 
		kar = cin.get();
	}
	while (kar != '\n')
	{
		if (kar >= '0' && kar <= '9')
		{
			getal = getal * 10 + (kar - '0');
		}
		kar = cin.get();
	}
	cin.clear();
	fflush(stdin);
	if (getal > bovengrens)
	{
		return bovengrens;
	}
	else 
		return getal;
  // TODO, zie Opgave 3
}//leesgetal

bordvakje::bordvakje ( ) {
  // TODO
}//bordvakje::bordvakje

koffiebord::koffiebord ( ) {
  // TODO
}//koffiebord::koffiebord

koffiebord::~koffiebord ( ) {
  // TODO
}//koffiebord::~koffiebord

void koffiebord::drukaf ( ) {
  cout << "Een koffiebord ziet er mooi uit." << endl;
  // TODO
}//koffiebord::drukaf

// TODO
