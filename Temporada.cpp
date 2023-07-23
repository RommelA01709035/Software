#include "Temporada.hpp"
#include "Capitulo.hpp"
#include <vector>
#include <iostream>
using namespace std;
/*
 * Se crean los metodos correspondientes al Diagrama UML que sirven para mostrar los atributos.
 * 
*/


Temporada::Temporada(int numeroTemporada,vector <Capitulo*> Capitulos)
{
    this->Capitulos = Capitulos;
    this->numeroTemporada = numeroTemporada;
}

vector <Capitulo*> Temporada::getCapitulos()
{
    return Capitulos;
}

void Temporada::addCapitulo(Capitulo* capitulo)
{
    Capitulos.push_back(capitulo);
}

int Temporada::getNumCapitulos()
{
    return Capitulos.size();
}

