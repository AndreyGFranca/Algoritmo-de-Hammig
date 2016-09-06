#ifndef PARIDADESIMPLES_H
#define PARIDADESIMPLES_H

#include <vector>
#include <QString>

class ParidadeSimples
{
private:
    ParidadeSimples();
    static ParidadeSimples* s_Instancia;

public:

    static ParidadeSimples *instancia()
    {
        if (s_Instancia == 0)
        {
            s_Instancia = new ParidadeSimples();
            return s_Instancia;
        }
        return s_Instancia;
    }
    std::vector<int> bit_Dados;

    QString bit;

    int acumulador_Bits;

    void soma_Numeros();
};

#endif // PARIDADESIMPLES_H
