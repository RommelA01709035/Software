#ifndef TEMPORADA_HPP
#define TEMPORADA_HPP
#include <iostream>
#include <vector>
#include "Capitulo.hpp"
/*
 * Autor: Rommel Pacheco Hernández          ultima Actualización: 11/06/2022
 *  Se define la clase Temporada
 */


using namespace std;

class Temporada
{
    
private:
    vector <Capitulo*> Capitulos;
    int numeroTemporada;
public:
    Temporada(int,vector <Capitulo*>);
    vector <Capitulo*> getCapitulos();
    void addCapitulo(Capitulo*);
    int getNumCapitulos();

    
};

#endif // TEMPORADA_HPP
