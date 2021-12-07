// file koffiebord.cc
#include <iostream>
#include "koffiebord.h"
#include <ctime>
#include <cstdlib>
using namespace std;

int leesgetal (int bovengrens) {
  // TODO, zie Opgave 3
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
  while (ingang  != nullptr){
    cout<< ingang->aantal;
    ingang->buren[6];
  }
}//koffiebord::drukaf

// TODO

void koffiebord::voegvoor (int getal){
    bordvakje* p = new bordvakje;
    p->buren[6] = nullptr; //vorige
    p->aantal = getal;
    p->buren[2] = ingang; //volgende

    if (ingang != nullptr){
        ingang->buren[6] = p;
    } else uitgang = p;
    ingang = p;
}

void koffiebord::bouwbord(){
    voervoor oproepen

}
