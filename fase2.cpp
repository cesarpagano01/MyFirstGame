#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale>
#include <thread>
#include <chrono>
#include <vector>
#include <fstream>
#include "inventario.h"
#include <thread>

using namespace std;

int LimpaTela() {
    system ("CLS");
}


void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausa(int segundos) {
    std::this_thread::sleep_for(std::chrono::seconds(segundos));
}

void adicionarItem(std::vector<Item>& inventario, std::string nome, int quantidade) {
    for (Item& item : inventario) {
        if (item.nome == nome) {
            item.quantidade = std::min(1, item.quantidade + quantidade);
            return;
        }
    }
    inventario.push_back(Item(nome, std::min(1, quantidade)));
}

void escolhaPorta(std::vector<Item>& inventario) {
    limparTela();
    std::cout << "Voc� foi at� a porta.\n";
    std::cout << "Voc� quer abrir a porta?\n";

    if (!inventario.empty()) {
        for (const Item& item : inventario) {
            if (item.nome == "PeDeCabra") {
                std::cout << "Voc� consegue abrir a porta.\n";
                pausa(4);
                return;
            }
        }
    }

    std::cout << "Voc� n�o tem o P� de Cabra para abrir a porta.\n";
    pausa(4);
}

void escolhaPeDeCabra(std::vector<Item>& inventario) {
    limparTela();
    std::cout << "Voc� pegou o p� de cabra.\n";
    adicionarItem(inventario, "PeDeCabra", 1);
    pausa(4);
}

void escolhaCorda(std::vector<Item>& inventario) {
    limparTela();
    std::cout << "Voc� pegou a corda.\n";
    adicionarItem(inventario, "Corda", 1);
    pausa(4);
}

void escolhaRadio() {
    limparTela();
    std::cout << "O r�dio n�o est� funcionando.\n";
    pausa(4);
    // Adicione aqui a l�gica relacionada � escolha do r�dio
}

void fase2() {

    std::vector<Item> inventario;

    int escolha;

    cout << "Voce olha ao redor e ve:\n";
    cout << "Na sua frente, uma porta\n";
    cout << "Na sua direita, um pe de cabra no chao\n";
    cout << "Atras de voce, uma corda\n";
    cout << "Na sua esquerda, um radio comunicador\n";
    std::this_thread::sleep_for(std::chrono::seconds(7));

    do {
        limparTela();
        std::cout << "Escolha:\n";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                escolhaPorta(inventario);
                break;
            case 2:
                escolhaPeDeCabra(inventario);
                break;
            case 3:
                escolhaCorda(inventario);
                break;
            case 4:
                escolhaRadio();
                break;
            default:
                std::cout << "Fa�a algo, o submarino est� afundando!\n";
                pausa(4);
        }
    } while (escolha != 0);

}

int continua() {

    fase2();


return 0;
}

