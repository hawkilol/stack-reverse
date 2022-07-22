//Autor: Kalil Saldanha Kaliffe
#include <iostream>
#include "pilhaArr.h"
#include <string>
#include <utility>

using namespace std;
TipoPilha* InicializaPilha(){
    TipoPilha* pilha = (TipoPilha*)malloc(sizeof(TipoPilha));
    return pilha;
}
void FPVazia (TipoPilha *Pilha){
    Pilha -> Topo = 0;
}
int Vazia (TipoPilha *Pilha){
    return (Pilha -> Topo == 0);
}
void Empilha (TipoItem x, TipoPilha *Pilha){
    if (Pilha -> Topo == MAXTAM)
        cout << "Erro: pilha está cheia\n";

    else {
        Pilha -> Item[Pilha -> Topo] = x;
        Pilha -> Topo++;
    }
}

void Desempilha (TipoPilha *Pilha){
    if (Vazia (Pilha))
        printf("Erro: a pilha está vazia\n");


    else {
        cout <<Pilha -> Item[(Pilha->Topo) -1].Chave << endl;
        Pilha -> Topo --;
    }
}
int Tamanho (TipoPilha *Pilha){
    return Pilha -> Topo;
}
void Imprimir (TipoPilha* Pilha){
    for (int i = Pilha -> Inicio; i < Pilha -> Topo; i++){
        cout <<i<<":"<< Pilha -> Item[i].Chave<<endl;

    }
}

int invOrder (string entrada){
    cout <<"Entrada: "<< entrada<<endl;
    entrada += " ";
    int palavra = 0;
    char aux;
    char spc = ' ';
    TipoPilha* pilha;
    pilha = InicializaPilha();
    TipoItem item;
//loop para botar a string na pilha
    for (int i = 0; i<entrada.length(); i++){
        aux = entrada[i];
        if (aux>=65 && aux<=90){
            aux += 32;
        }
        item.Chave = aux;
        Empilha(item, pilha);
        palavra += 1;
        if (aux == spc){
            for (int k = 0; k<palavra; k++){
                
                if (Vazia (pilha)){
                    break;
                }
                Desempilha(pilha);
            }
        }
    }
    return 0;
    
}