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

    /**
     * @name instancia
     * @brief Padrão singleton.
     * @return uma instancia da classe.
     */
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

    int soma;

    /* Métodos: */
    void printa_Mensagem();
    bool potencia_De_Dois(int num);
    void insere_Bit_Paridade();
    void calcula_Bit_Errado();

    /*Getters*/
    int get_Bit_Dados() const;
    int get_Bit_Paridade() const;

    /*Setters*/
    void set_Bit_Dados(int bit_Dados) const;
    void set_Bit_Paridade(int bit_Paridade) const;

};

//typedef Hamming OHamming;

#endif // HAMMING_H
