#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

struct Client
{
    int broj_racuna;
    char ime[20];
    char prezime[20];
    double stanje;
};

typedef struct Client Klijent;

void prikaz_klijenta(Klijent s);

void prikaz_svih_klijenata(FILE*f);

void dodati_klijenta(Klijent s, FILE* f);

Klijent kreirati_nalog();

int broj_naloga(FILE*f);

void obrisati_klijenta(int id,FILE*f);

void opcije(FILE* f);

void azurirati_nalog(FILE*f);

//void menu(FILE*f);
//
//void print_client_to_stdout(Client s);
//
//void print_all_clients_to_stdout(FILE*f);
//
//void add_client_to_database(Client s, FILE*f);
//
//int number_of_clients(FILE*f);
//
//void delete_client(int id, FILE*f);
//
//Client get_Client();

#endif // FILE_H_INCLUDED
