#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
      std::setlocale(LC_ALL, "");

    // Solicita ao usu�rio que insira seu nome
    cout << "Bem-vindo ao jogo! Por favor, insira seu nome: ";

    string nome;
    getline(cin, nome); // L� a linha inteira, incluindo espa�os

    cout << "Ol�, " << nome << "! Voc� esta prestes a fazer uma viagem ao fundo do mar.\n";

    // Pergunta ao jogador para progredir
    cout << "Deseja entrar no submarino? ";
    string EntrarSubmarino;
    getline(cin, EntrarSubmarino);

    // Verifica se a resposta est� correta
    if (EntrarSubmarino == "Sim") {
        cout << "Ent�o vamos la! Aperte os cintos, vamos descer.\n";
        }

    } else {
        cout << "Que pena! Nos vemos em uma proxima viagem.\n";
    }

    return 0;
}
