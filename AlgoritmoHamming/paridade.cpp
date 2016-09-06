#include "paridade.h"

Paridade* Paridade::s_Instancia = 0;

Paridade::Paridade()
{
}

void Paridade::conta_Numero_Paridade()
{
    bit_Paridade_Correto.clear();

    acumulador_Bits = 0;
    for (int i = 0; i < bit_Dados.size(); i++){
        if(bit_Dados.at(i) == 1)
            acumulador_Bits++;
    }

    if (acumulador_Bits % 2 == 0 && bit_Paridade.at(0) == '0')
    {
        bit_Paridade_Correto.append('0');
        correto = true;
    }
    else if (acumulador_Bits % 2 != 0 && bit_Paridade.at(0) == '1')
    {
        bit_Paridade_Correto.append('1');
        correto = true;
    }
    else{
        correto = false;
    }

}
