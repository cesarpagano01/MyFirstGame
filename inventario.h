// inventario.h
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include <string>

struct Item {
    std::string nome;
    int quantidade;

    Item(std::string nome, int quantidade) : nome(nome), quantidade(quantidade) {}
};

void adicionarItem(std::vector<Item>& inventario, std::string nome, int quantidade);

#endif // INVENTARIO_H
