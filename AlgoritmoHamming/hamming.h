#ifndef HAMMING_H
#define HAMMING_H

#include <vector>
#include <QString>

class Hamming
{
private:

    /* Padrão singleton, construtor privado e uma instancia da classe. */
    Hamming();
    static Hamming* s_Instancia;

    /*Atributos */
    int m_Bit_Dados;
    int m_Bit_Paridade;

public:

    static Hamming *instancia()
    {
        if (s_Instancia == 0)
        {
            s_Instancia = new Hamming();
            return s_Instancia;
        }
        return s_Instancia;
    }


    std::vector<int>    lista_Bits_Dados;
    std::vector<int>    fila_Bits_Paridade;
    QString             copia_Lista;
    QString             bits_Originais;
    QString             paridade_Originais;

    int soma;

    /* Métodos: */
    void printa_Mensagem();
    bool potencia_De_Dois(int num);
    void insere_Bit_Paridade();
    void calcula_Bit_Errado();
};

//typedef Hamming OHamming;

#endif // HAMMING_H
