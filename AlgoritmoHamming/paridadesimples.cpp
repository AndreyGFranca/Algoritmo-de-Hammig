#include "paridadesimples.h"

ParidadeSimples* ParidadeSimples::s_Instancia = 0;

ParidadeSimples::ParidadeSimples()
{

}

void ParidadeSimples::soma_Numeros()
{
    acumulador_Bits = 0;
    bit.clear();

    for (int i = 0; i < bit_Dados.size(); i++){
        if (bit_Dados[i] == 1)
            acumulador_Bits++;
    }

    if (acumulador_Bits % 2 == 0)
        bit.append("<font color='blue'>0</font>");
    else
        bit.append("<font color='blue'>1</font>");

}
