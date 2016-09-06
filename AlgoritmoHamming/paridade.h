#ifndef PARIDADE_H
#define PARIDADE_H

#include <vector>
#include <QString>

class Paridade
{
private:
    Paridade();
    static Paridade* s_Instancia;

public:

    static Paridade *instancia()
    {
        if (s_Instancia == 0)
        {
            s_Instancia = new Paridade();
            return s_Instancia;
        }
        return s_Instancia;
    }
    std::vector<int> bit_Dados;
    void conta_Numero_Paridade();

    int acumulador_Bits;
    bool correto;

    QString bit_Paridade;
    QString bit_Paridade_Correto;



};

#endif // PARIDADE_H
