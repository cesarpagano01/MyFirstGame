#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
      std::setlocale(LC_ALL, "");

    // Solicita ao usuário que insira seu nome
    cout << "Bem-vindo ao jogo! Por favor, insira seu nome: ";

    string nome;
    getline(cin, nome); // Lê a linha inteira, incluindo espaços

    cout << "Olá, " << nome << "! Você esta prestes a fazer uma viagem ao fundo do mar.\n";

    // Pergunta ao jogador para progredir
    cout << "Deseja entrar no submarino? ";
    string EntrarSubmarino;
    getline(cin, EntrarSubmarino);

    // Verifica se a resposta está correta
    if (EntrarSubmarino == "Sim") {
        cout << "Então vamos la! Aperte os cintos, vamos descer.\n";
        }

    } else {
        cout << "Que pena! Nos vemos em uma proxima viagem.\n";
    }

    return 0;
}
