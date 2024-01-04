#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale>
#include <thread>
#include <chrono>

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
    if (EntrarSubmarino == "sim") {
        cout << "Ent�o vamos la! Aperte os cintos, vamos descer.\n";
        } else {
        cout << "Que pena! Nos vemos em uma proxima viagem.\n";
        return (0);
    }

    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\033[2J\033[1;1H";

    cout << "As portas se fecham e voc� sente que o submarino est� descendo \n";

    std::this_thread::sleep_for(std::chrono::seconds(3));

    cout << "Voc� escuta alguns barulhos estranhos vindos de fora, \n o som da gigante maquina no fundo do mar ecoa \n";

    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\n O local apertado te deixa um tanto desconfortavel, \n ao olhar na janela a escurid�o profunda te passa uma sensa��o estranha \n";

    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";

    cout << "Uma viagem de submarino sempre � divertida, voc� ja viajou de submarino antes?";

    string ViagemSubmarino;
    getline(cin, ViagemSubmarino);
    if (ViagemSubmarino == "sim") {
        cout << "Olha s�! Temos um veterano entre n�s! Haha.\n";
        } else {
        cout << "�timo! A primeira viagem � sempre a mais emocionante!.\n";
    }
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\033[2J\033[1;1H";

    cout << "Voc� escuta um barulho forte\n";
    cout << "Parece que o mar esta agitado n�o � mesmo?\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));

    cout << "Voc� escuta o barulho forte mais uma vez e sente o submarino balan�ar\n";
    cout << "Tudo bem, tudo bem... Vamos manter a calma, deve ser s� algum animal maritimo dando Oi\n";
    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";
    std::this_thread::sleep_for(std::chrono::seconds(5));

    cout << "Voc� escuta um grande estouro e a �gua come�a a entrar no submarino\n";
    cout << "Meu Deus, MEU DEUS! EST� ENTRANDO �GUA, ISSO NUNCA ACONTECEU\n";
    cout << "Estamos em perigo, o que vamos fazer?\n";
    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";

    cout << "Voc� olha ao redor e ve:\n";
    cout << "Na sua frente, uma porta\n";
    cout << "Na sua direita, um p� de cabra no ch�o\n";
    cout << "Atr�s de voc�, uma corda\n";
    cout << "Na sua esquerda, um radio comunicador\n";

    int escolha;

    do {
        // Apresenta o menu de op��es
        std::cout << "Escolha uma op��o:\n";
        std::cout << "1. Porta\n";
        std::cout << "2. P� de cabra\n";
        std::cout << "3. Corda\n";
        std::cout << "4. R�dio\n";

        // Solicita a escolha do jogador
        std::cout << "Digite o n�mero da op��o desejada: ";
        std::cin >> escolha ;

        // Processa a escolha do jogador
        switch (escolha) {
            case 1:
                std::cout << "Voc� foi at� a porta.\n";
                // Adicione aqui a l�gica relacionada � escolha da porta
                cout << "Voc� quer abrir a porta\n?";

                string AbrirPorta;
                getline(cin, AbrirPorta);

                 if (AbrirPorta == "sim") {
        cout << "A porta n�o abre, esta emperrada.\n";
        } else
            case 2:
                std::cout << "Voc� pegou o p� de cabra.\n";
                // Adicione aqui a l�gica relacionada � escolha do p� de cabra
                break;
            case 3:
                std::cout << "Voc� pegou a corda.\n";
                // Adicione aqui a l�gica relacionada � escolha da corda
                break;
            case 4:
                std::cout << "Voc� pegou r�dio.\n";
                // Adicione aqui a l�gica relacionada � escolha do r�dio
                break;
            default:
                std::cout << "Fa�a algo, o submarino esta afundando!.\n";
        }

    } while (escolha != 0);





    return 0;
}
