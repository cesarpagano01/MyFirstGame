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
    if (EntrarSubmarino == "sim") {
        cout << "Então vamos la! Aperte os cintos, vamos descer.\n";
        } else {
        cout << "Que pena! Nos vemos em uma proxima viagem.\n";
        return (0);
    }

    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\033[2J\033[1;1H";

    cout << "As portas se fecham e você sente que o submarino está descendo \n";

    std::this_thread::sleep_for(std::chrono::seconds(3));

    cout << "Você escuta alguns barulhos estranhos vindos de fora, \n o som da gigante maquina no fundo do mar ecoa \n";

    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\n O local apertado te deixa um tanto desconfortavel, \n ao olhar na janela a escuridão profunda te passa uma sensação estranha \n";

    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";

    cout << "Uma viagem de submarino sempre é divertida, você ja viajou de submarino antes?";

    string ViagemSubmarino;
    getline(cin, ViagemSubmarino);
    if (ViagemSubmarino == "sim") {
        cout << "Olha só! Temos um veterano entre nós! Haha.\n";
        } else {
        cout << "Ótimo! A primeira viagem é sempre a mais emocionante!.\n";
    }
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\033[2J\033[1;1H";

    cout << "Você escuta um barulho forte\n";
    cout << "Parece que o mar esta agitado não é mesmo?\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));

    cout << "Você escuta o barulho forte mais uma vez e sente o submarino balançar\n";
    cout << "Tudo bem, tudo bem... Vamos manter a calma, deve ser só algum animal maritimo dando Oi\n";
    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";
    std::this_thread::sleep_for(std::chrono::seconds(5));

    cout << "Você escuta um grande estouro e a água começa a entrar no submarino\n";
    cout << "Meu Deus, MEU DEUS! ESTÁ ENTRANDO ÁGUA, ISSO NUNCA ACONTECEU\n";
    cout << "Estamos em perigo, o que vamos fazer?\n";
    std::this_thread::sleep_for(std::chrono::seconds(7));
    cout << "\033[2J\033[1;1H";

    cout << "Você olha ao redor e ve:\n";
    cout << "Na sua frente, uma porta\n";
    cout << "Na sua direita, um pé de cabra no chão\n";
    cout << "Atrás de você, uma corda\n";
    cout << "Na sua esquerda, um radio comunicador\n";

    int escolha;

    do {
        // Apresenta o menu de opções
        std::cout << "Escolha uma opção:\n";
        std::cout << "1. Porta\n";
        std::cout << "2. Pé de cabra\n";
        std::cout << "3. Corda\n";
        std::cout << "4. Rádio\n";

        // Solicita a escolha do jogador
        std::cout << "Digite o número da opção desejada: ";
        std::cin >> escolha ;

        // Processa a escolha do jogador
        switch (escolha) {
            case 1:
                std::cout << "Você foi até a porta.\n";
                // Adicione aqui a lógica relacionada à escolha da porta
                cout << "Você quer abrir a porta\n?";

                string AbrirPorta;
                getline(cin, AbrirPorta);

                 if (AbrirPorta == "sim") {
        cout << "A porta não abre, esta emperrada.\n";
        } else
            case 2:
                std::cout << "Você pegou o pé de cabra.\n";
                // Adicione aqui a lógica relacionada à escolha do pé de cabra
                break;
            case 3:
                std::cout << "Você pegou a corda.\n";
                // Adicione aqui a lógica relacionada à escolha da corda
                break;
            case 4:
                std::cout << "Você pegou rádio.\n";
                // Adicione aqui a lógica relacionada à escolha do rádio
                break;
            default:
                std::cout << "Faça algo, o submarino esta afundando!.\n";
        }

    } while (escolha != 0);





    return 0;
}
