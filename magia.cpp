#include <iostream>
#include <string>
using namespace std;

struct feitico {
    string nome;
    int dificuldade;
    int dano_base;
    float custo_mana_final;
};

int main() {

    feitico f;
    f.nome = "Relâmpago em Cadeia";
    f.dificuldade = 4;
    f.dano_base = 75;


    float multiplicador;

    if (f.dificuldade == 1 || f.dificuldade == 2) {
        multiplicador = 1.0;
    }
    else if (f.dificuldade == 3 || f.dificuldade == 4) {
        multiplicador = 1.5;
    }
    else if (f.dificuldade == 5) {
        multiplicador = 2.0;
    }
    else {
       
        multiplicador = 1.0;
    }

    f.custo_mana_final = f.dano_base * multiplicador;
