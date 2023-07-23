#ifndef CAPITULO_HPP
#define CAPITULO_HPP
#include <iostream>
#include <string>
#include "Contenido.hpp"
#include <vector>
/*
 * Autor: Rommel Pacheco Hernández          ultima Actualización: 11/06/2022
 *  Se define la clase
 */
using namespace std;

class Capitulo
{
    
private:
    int numeroCapitulo;
    int idCapitulo;
    string nombre;
    double valoracion;
    string serie;
public:
    Capitulo();
    Capitulo(int,int,string,double,string);
    int getNumeroCapitulo();
    int getIdCapitulo();
    string getNombre();
    string getSerie();
    string getValoracion();
    string getValoracion(int);
    string MostrarCapitulo();
    Capitulo operator+(Capitulo val);
};

#endif // CAPITULO_HPP
