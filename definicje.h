#ifndef DEFINICJE //jezeli nie zdefiniowano "DEFINICJE" wykonaj poniższy kod

#define DEFINICJE

#define ROZMIAR_POLA 10

typedef enum {PUSTE, BIALY, CZARNY} typPola;
typedef enum {RUCH_BIALEGO, RUCH_CZARNEGO} kolejnosc;
typedef enum {DAMKA, PION} rodzaj;

typedef struct {
    typPola pole[ROZMIAR_POLA][ROZMIAR_POLA];
    kolejnosc graczNaRuchu;
    rodzaj rodzajBierki;

} warcabnica;

#endif