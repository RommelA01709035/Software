#ifndef PROVEDOR_HPP
#define PROVEDOR_HPP
#include "Contenido.hpp"
#include "Serie.hpp"
#include "Pelicula.hpp"
#include <vector>
#include <iostream>
/*
 * Autor: Rommel Pacheco Hernández          ultima Actualización: 11/06/2022
 *  Se define la clase Provedor.
 */
using namespace std;

class Provedor
{
private:
    float costo;
    vector <Contenido*> unContenido;
public:
    Provedor(vector <Contenido*>,double);
    vector <Contenido*> getContenido();
    

};

#endif // PROVEDOR_HPP
