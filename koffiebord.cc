// file koffiebord.cc
#include <iostream>
#include "koffiebord.h"
#include <ctime>
#include <cstdlib>
using namespace std;

int leesgetal (int bovengrens) {
  // TODO, zie Opgave 3
  return 1;
}//leesgetal

bordvakje::bordvakje ( ) {
    marked = false;
    geopend = false;

  // TODO
}//bordvakje::bordvakje

koffiebord::koffiebord ( ) {
  // TODO
}//koffiebord::koffiebord

koffiebord::~koffiebord ( ) {
  // TODO
}//koffiebord::~koffiebord

void koffiebord::drukaf () {
  cout << "Een koffiebord ziet er mooi uit." << endl;
  // TODO
  while (ingang!= nullptr){
    cout << ingang->aantal;
    cout << ingang->buren[6];
  }
}//koffiebord::drukaf

// TODO

void koffiebord::voegvoor (bordvakje * & rijingang){
    bordvakje* p = new bordvakje;
    p->buren[2] = rijingang; //volgende
    if (rijingang != nullptr){
        rijingang->buren[6] = p;
    }
    rijingang = p;
}

bordvakje * koffiebord::maakrij(){
    bordvakje* rijingang = nullptr;
    for (int i = 0; i < breedte; i++){
        voegvoor(rijingang);
    }
    return rijingang;
}
void koffiebord::bouwbord(int breedte){
    ingang = maakrij();
    for (int i = 1; i < hoogte; i++) {
        bordvakje* rij = maakrij();
        ritsen(onderste, rij);
    }


}

void koffiebord::ritsen(bordvakje* boven, bordvakje* beneden){

    while(ingang != nullptr){
        boven->buren[4] = beneden;
        boven->buren[3] = beneden->buren[7];
        boven->buren[5] = beneden->buren[1];
        beneden->buren[7] = boven->buren[3];
        beneden->buren[1] = boven->buren[5];
        beneden->buren[0] = boven;
    }
}

int koffiebord::content(){
    char leeg = ' ';
    char koffie = 'k';

    srand(time(NULL));

    int r = rand()%2;

    if(r==0)
        return leeg;
    else
        return koffie;

        cout << "test" <<endl;
}
