#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <thread>
#include <chrono>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "inventario.h"
#include "fase2.cpp"

using namespace std;
int opcao = 0;

int Inicio(){



    vector<Item> inventario;
    ifstream input("fase2.cpp");

    // O jogo se inicia

    cout << "\nCapitao: Ola, navegante! Seja bem-vindo ao grande RubWorn, o maior submarino de viagens dos ultimos tempos! \n Qual seu nome?";
    string SeuNome;
    getline(cin, SeuNome);

    cout << "Que belo nome!" << SeuNome << "! Voce esta prestes a fazer uma viagem ao fundo do mar.\n";

    // Pergunta ao jogador para progredir
    cout << "Deseja entrar no submarino? ";
    string EntrarSubmarino;
    getline(cin, EntrarSubmarino);

    // Verifica se a resposta esta correta
    if (EntrarSubmarino == "sim") {
        cout << "Capitao: Entao vamos la! Aperte os cintos, vamos descer.\n";
        } else {
        cout << "Capitao: Que pena! Nos vemos em uma proxima viagem.\n";
        return (0);
    }

    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\033[2J\033[1;1H";

    cout << "As portas se fecham e voca sente que o submarino esta descendo \n";

    std::this_thread::sleep_for(std::chrono::seconds(3));

    cout << "Voce escuta alguns barulhos estranhos vindos de fora, \n o som da gigante maquina no fundo do mar ecoa \n";

    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\n O local apertado te deixa um tanto desconfortavel, \n ao olhar na janela a escurid�o profunda te passa uma sensa��o estranha \n";

    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";

    cout << "Capitao: Uma viagem de submarino sempre a divertida, voce ja viajou de submarino antes?";

    string ViagemSubmarino;
    getline(cin, ViagemSubmarino);
    if (ViagemSubmarino == "sim") {
        cout << "Capitao: Olha so! Temos um veterano entre nos! Haha.\n";
        } else {
        cout << "Capitao: Otimo! A primeira viagem e sempre a mais emocionante!.\n";
    }
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\033[2J\033[1;1H";

    cout << "Voce escuta um barulho forte\n";
    cout << "Capitao: Parece que o mar esta agitado nao e mesmo?\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));

    cout << "Voce escuta o barulho forte mais uma vez e sente o submarino balancar\n";
    cout << "Capitao: Tudo bem, tudo bem... Vamos manter a calma, deve ser so algum animal maritimo dando oi\n";
    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";
    std::this_thread::sleep_for(std::chrono::seconds(5));

    cout << "Voce escuta um grande estouro e a agua comeca a entrar no submarino\n";
    cout << "Capitao: Meu Deus, MEU DEUS! ESTA ENTRANDO AGUA, ISSO NUNCA ACONTECEU\n";
    cout << "CapitAo: Estamos em perigo, o que vamos fazer?\n";
    std::this_thread::sleep_for(std::chrono::seconds(7));

    fase2();

    return 0;
}




  int menuInicial (){

while (opcao < 1 || opcao > 3 )
{   LimpaTela ();
    cout << "Subarino - O jogo";
    cout << "\n1 - Jogar";
    cout << "\n2 - Sobre";
    cout << "\n3 - Sair";
    cout << "\nEscolha uma da opcoes e tecle ENTER";

    //ler a opcao do usuario
    cin >> opcao;


    switch (opcao){
        case 1 :
            Inicio();
            break;
        case 2 :
            cout << "Informações do Jogo";
            break;
        case 3 :
            cout << "Ate mais!";
            break;
    }
}

return 0;
}

int main() {
      std::setlocale(LC_ALL, "");

     menuInicial();
}

