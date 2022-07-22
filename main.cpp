//Autor: Kalil Saldanha Kaliffe

#include <iostream>
#include "pilhaArr.h"

using namespace std;

int main(void){
    cout << "Exemplo: ";
    string E = "Este EXERCICIO E MUITO FACIL";
    invOrder((E));
    
    string A;
    cout << "Digite uma frase para inverter preservando a ordem das palavras: ";
    getline(cin, A);
    invOrder((A));
    
    

}
