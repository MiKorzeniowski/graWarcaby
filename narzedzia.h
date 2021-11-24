#ifndef NARZEDZIA

#define NARZEDZIA

#include "definicje.h"
#include "stdio.h"



void wypiszStanGry(warcabnica warcabnica) {
    printf("+");
    for(int i = 0; i < ROZMIAR_POLA; printf("-"), i++);
    printf("+\n");

    for(int i = 0; i < ROZMIAR_POLA; i++) {
        printf("|");

        for(int j = 0; j < ROZMIAR_POLA; j++) {
            switch()
        }
    }
}

void ustalStanPoczatkowy(warcabnica *poletko) {
    for(int i = 0; i < ROZMIAR_POLA; i++) {
        for(int j = 0; j < ROZMIAR_POLA; j++) {
            poletko->pole[i][j];
        }
    }
}

#endif