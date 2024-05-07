#include <stdio.h>
#include <stdlib.h>

struct Client
{
    int broj_racuna;
    char ime[20];
    char prezime[20];
    double stanje;
};

typedef struct Client Client;

int main()
{
    FILE* fajl = fopen("baza_podatakaa.dat","rb+");

    if(fajl == NULL)
        fajl = fopen("baza_podatakaa.dat","wb");

    opcije(fajl);

    // menu(fajl)

    fclose(fajl);
    return 0;
}

