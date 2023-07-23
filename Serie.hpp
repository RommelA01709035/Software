#ifndef SERIE_HPP
#define SERIE_HPP
#include <iostream>
#include <string>
#include "Capitulo.hpp"
#include "Temporada.hpp"
/*
 * Autor: Rommel Pacheco Hernández          ultima Actualización: 11/06/2022
 *  Se define la clase hija Serie.
 */

using namespace std;

class Serie: public Contenido
{
private:
     vector <Temporada*> Temporadas;
public:
    Serie(vector <Temporada*>,int, string, string,string, double);
    string getTitulo();
    int getID();
    string MostrarVideo() override;
    vector <Temporada*> getTemporadas();
    void addTemporada(Temporada*);
    string MostrarTipo() override; // polym0otfismo
    
};

#endif // SERIE_HPP
