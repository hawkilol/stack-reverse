//Autor: Kalil Saldanha Kaliffe
#include <iostream>
#include <string>
using namespace std;
#define MAXTAM 1000
typedef int TipoApontador;
typedef char TipoChave;

//typedef int TipoApontador;

typedef struct {
   TipoChave Chave;
    /* outros componentes */

}TipoItem;

typedef struct {
    TipoItem Item[MAXTAM];
    TipoApontador Topo;
    TipoApontador Inicio = 0;
}TipoPilha;


TipoPilha* InicializaPilha();
void FPVazia (TipoPilha *Pilha);
int Vazia (TipoPilha *Pilha);
void Empilha (TipoItem x, TipoPilha* Pilha);
void Desempilha (TipoPilha *Pilha);
int Tamanho (TipoPilha *Pilha);
void Imprimir (TipoPilha* Pilha);
int invOrder (string entrada); //retorna int pra evitar um bug depois do loop
