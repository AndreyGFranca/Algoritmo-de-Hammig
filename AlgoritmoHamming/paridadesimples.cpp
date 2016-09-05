#include "paridadesimples.h"

ParidadeSimples* ParidadeSimples::s_Instancia = 0;

ParidadeSimples::ParidadeSimples()
{

}

void ParidadeSimples::soma_Numeros()
{
    acumulador_Bits = 0;

    for (int i = 0; i < bit_Dados.size(); i++){
        if (bit_Dados[i] == 1)
            acumulador_Bits++;
    }

}
