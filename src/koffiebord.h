// file koffiebord.h

int leesgetal (int bovengrens);

class bordvakje {
  public:
    bool geopend;
    bool marked;
    int aantal;           //     7 0 1
    bordvakje* buren[8];  //     6   2
    bordvakje ( );        //     5 4 3

    // TODO
};//bordvakje

class koffiebord {
  private:
    bordvakje* ingang;
    bordvakje* uitgang;
    bordvakje* ganaar (int i, int j);
    int hoogte, breedte;
    int aantalkoffie;
    int zetten;
    void voegvoor (int getal);
    bordvakje* maakrij ( );
    void bouwbord ( );

    // TODO
  public:
    koffiebord ( );
    ~koffiebord ( );
    bool klaar;
    void drukaf ( );
    void menszet( );
    void compzet ( );
    void strooikoffie ( );


    // TODO
};//koffiebord
