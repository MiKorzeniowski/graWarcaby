#ifndef negamax

#include "definicje.h"
#include "narzedzia.h"
#include "ocena.h"

//ukradli linijki

int negamax(warcabnica* p, int glebokosc, int alfa, int beta)
{
    if(!glebokosc)
        return ocen_pozycje(p);
    ruch_na_liscie *ruchy = legalne_ruchy(p), *ptr = ruchy;
    if(!ruchy)
        return ocen_pozycje(p);
    int ocena_wezla = { PORAZKA, 0}, ocena_tymczasowa;
    int czy_nowy_zwyciezca;
    do
    {
        warcabnica potomne = porusz_pionek(p, ruchy->ruch);
        ocena_tymczasowa = negamax(&potomne, glebokosc - 1, zaneguj(&beta), zaneguj(&alfa));
        ocena_tymczasowa = zaneguj(&ocena_tymczasowa);
        czy_nowy_zwyciezca = porownaj_oceny(&ocena_tymczasowa, &ocena_wezla);
        if(czy_nowy_zwyciezca > 0)
        {
            ocena_wezla = ocena_tymczasowa;
            if(porownaj_oceny(&ocena_wezla, &alfa) > 0)
                alfa = ocena_wezla;
        }
        if (porownaj_oceny(&alfa, &beta) >= 0)
        {
            ocena_wezla = beta;
            break;
        }
        ruchy = ruchy->nastepny;
    } while (ruchy);
    zabij_ruchy_na_liscie(ptr);
    return ocena_wezla;
}

int negamax(warcabnica* p, int glebokosc)
{
    return __negamax(p, glebokosc, (int) {PORAZKA, 0}, (int) {ZWYCIESTWO, 0});
}


#endif