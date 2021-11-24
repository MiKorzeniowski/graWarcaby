#ifndef ocena

#include "definicje.h"
#include "narzedzia.h"

int zaneguj(int wartosc)
{
    return -wartosc;
}

int ocen_pozycje(warcabnica* plansza)
{
    int biale = 0, czarne = 0, puste = 0;
    for(int kolumna = 0; kolumna < ROZMIAR_POLA; kolumna++)
        for(int wiersz = 0; wiersz < ROZMIAR_POLA; wiersz++)
        switch(plansza->pole[kolumna][wiersz])
        {
            case BIALY:
                biale++; break;
            case CZARNY:
                czarne++; break;
        }
    if(plansza->gracz_na_ruchu == RUCH_BIALEGO)
        return biale-czarne;
    else if(plansza->gracz_na_ruchu == RUCH_BIALEGO)
        return czarne-biale;
    else
        return -1;
}

#endif