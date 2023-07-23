#ifndef PELICULA_HPP
#define PELICULA_HPP
#include <iostream>
#include <string>
#include "Contenido.hpp"
/*
 * Autor: Rommel Pacheco Hernández          ultima Actualización: 11/06/2022
 *  Se define la clase hija Pelicula.
 */

using namespace std;

class Pelicula: public Contenido
{
private:
    double duracion;
public:
    
    Pelicula(double,int, string, string,string,double);
    string MostrarTitulo();
    double MostrarValoracion();
    string MostrarVideo() override;
    string MostrarTipo() override; // polym0otfismo

};

#endif // PELICULA_HPP
