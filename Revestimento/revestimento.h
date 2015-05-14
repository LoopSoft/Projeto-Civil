#ifndef REVESTIMENTO_H
#define REVESTIMENTO_H
#include <iostream>

using namespace std;

class REVESTIMENTO
{
    float CimentoPortlandCPII, AreiaMedia, Pedreiro, Servente, CalHidratada;
    float Cimento, Areia, Cal, SacoDeCimento, SacoDeCal, TempoDeServicoDoPedreiro, TempoDeServicoDoServente;

    ///Funções Para Setar Valores Para o Programa.
    void set_Chapisco(float Area);
    void set_Reboco(float Area);
    void set_Emboco(float Area);

public:
    REVESTIMENTO();
    ~REVESTIMENTO();

    ///Funções de Retorno da Classe Para o Programa.
    float get_Cimento()    {return this->Cimento;}
    float get_Areia()    {return this->Areia;}
    float get_Cal()    {return this->Cal;}
    float get_SacoDeCimento()    {return this->SacoDeCimento;}
    float get_SacoDeCal()     {return this->SacoDeCal;}
    float get_TempoDeServicoDoPedreiro()     {return this->TempoDeServicoDoPedreiro;}
    float get_TempoDeServicoDoServente()     {return this->TempoDeServicoDoServente;}

    ///Funções Print Testes Para o QT Creator.
    void Print_Chapisco(float Area);
    void Print_Reboco(float Area);
    void Print_Emboco(float Area);
};

#endif // REVESTIMENTO_H
