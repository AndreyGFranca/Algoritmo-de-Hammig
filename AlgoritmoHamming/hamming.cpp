#include "hamming.h"
#include <QDebug>

Hamming* Hamming::s_Instancia = 0;

Hamming::Hamming()
{

}


/**
 * @brief potencia_De_Dois
 * @param num
 * @return true - se o num for potencia de dois, false caso não seja.
 */
bool Hamming::potencia_De_Dois(int n)
{
    if(n % 2 != 0)
        return false;
    while(n !=2)
    {
        n = n / 2;
        if(n % 2 == 0)
            continue;
        else return false;
    }
    return true;
}

/**
 * @brief insere_Bit_Paridade
 * @param bit
 */
void Hamming::insere_Bit_Paridade()
{

    for (int i = 0; i < lista_Bits_Dados.size(); i++)
    {
        if(Hamming::instancia()->potencia_De_Dois(i))
        {
            int a = fila_Bits_Paridade.front();
            lista_Bits_Dados.insert(lista_Bits_Dados.begin() + i, a);
            fila_Bits_Paridade.pop();
        }
    }

    for (auto n : lista_Bits_Dados)
        qDebug() << n;

}

/**
 * @brief calcula_Bit_Errado
 * @param bit
 */
void Hamming::calcula_Bit_Errado(int bit)
{

}

/*Getters*/
int Hamming::get_Bit_Dados() const
{
    return m_Bit_Dados;

}

int Hamming::get_Bit_Paridade() const
{
    return m_Bit_Paridade;
}

/*Setters*/
void Hamming::set_Bit_Dados(int bit_Dados) const
{
    Hamming::instancia()->m_Bit_Dados = bit_Dados;
}

void Hamming::set_Bit_Paridade(int bit_Paridade) const
{
    Hamming::instancia()->m_Bit_Paridade = bit_Paridade;
}

