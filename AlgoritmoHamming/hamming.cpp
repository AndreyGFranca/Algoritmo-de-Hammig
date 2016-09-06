#include "hamming.h"
#include <QDebug>

Hamming* Hamming::s_Instancia = 0;

Hamming::Hamming()
{
    this->soma = 0;
}

bool Hamming::potencia_De_Dois(int n)
{
    if (n == 1) return true;

    if(n % 2 != 0)
        return false;
    while(n != 2)
    {
        n = n / 2;
        if(n % 2 != 0)
            return false;
    }
    return true;
}

/**
 * @name insere_Bit_Paridade
 * @brief
 */
void Hamming::insere_Bit_Paridade()
{
    m_Bit_Dados = lista_Bits_Dados.size();

    for (int i = 1; i <=  lista_Bits_Dados.size(); i++)
    {
        if(potencia_De_Dois(i))
        {
            int a = fila_Bits_Paridade[fila_Bits_Paridade.size() - 1];
            lista_Bits_Dados.insert(lista_Bits_Dados.begin() + i - 1, a);
            fila_Bits_Paridade.erase(fila_Bits_Paridade.end() - 1);
            if(fila_Bits_Paridade.empty())
                break;
        }
    }

    for (auto n : lista_Bits_Dados){
        qDebug() << n;
    }

    calcula_Bit_Errado();

}

void Hamming::calcula_Bit_Errado()
{
    this->soma = 0;
    std::vector <int> bits_Errados;
    int acumulador_Bits = 0;

    /* Percorre a lista, se achou um bit com indice potencia de dois
     * faz um novo laço que anda j casas e pula j casas, e soma os
     * bits com valor 1.
     */
    int tam = lista_Bits_Dados.size();

    bool flag, flag2;
    for (int i = 1; i < tam; i++)
    {
        if(potencia_De_Dois(i))
        {
            flag = true;
            flag2 = false;

            acumulador_Bits = 0;
            for (int j = i-1; j < tam; j+=i )
            {
                //qDebug() << "a";
                if (flag)
                {
                    int i1 = i;
                    /*tratamento para nao passar do tamanho maximo da lista*/
                    if(j + i > lista_Bits_Dados.size()) i1 = lista_Bits_Dados.size() - j;
                    qDebug() << "\n";
                    for (int k = 0; k < i1; k++)
                    {
                        if(flag2)
                        {
                            if (lista_Bits_Dados.at(j+k) == 1)
                                acumulador_Bits++;

                            qDebug() << lista_Bits_Dados.at(j+k);
                        }
                        else
                            flag2 = !flag2;
                    }

                }
                flag = !flag;
            }
            qDebug() << "Acumulador = " << acumulador_Bits;
            if (lista_Bits_Dados.at(i-1) == 1 && acumulador_Bits % 2 == 0)
                bits_Errados.push_back(i);

            else if (lista_Bits_Dados.at(i-1) == 0 && acumulador_Bits % 2 == 1)
                bits_Errados.push_back(i);
        }

    }

    qDebug() << "\n\n";
    for (auto n: bits_Errados)
        qDebug() << n;

    /*Soma os bits errados*/
    for (int i = 0; i < bits_Errados.size(); i++){
        this->soma += bits_Errados[i];
    }

    qDebug() << soma;
}

