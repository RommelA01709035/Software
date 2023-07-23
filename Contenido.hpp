#ifndef CONTENIDO_HPP
#define CONTENIDO_HPP
#include <iostream>
#include <string>
/*
 * Autor: Rommel Pacheco Hernández          ultima Actualización: 11/06/2022
 *  Se define la clase Padre Contenido.
 */

using namespace std;


class Contenido
{
protected:
    int id;
    string titulo;
    string tipo;
    string genero;
    double valoracion;
public:
    Contenido(int,string, string,string,double);
    string getTitulo();
    virtual string MostrarVideo()=0;
    virtual string MostrarTipo();
    

};

#endif // CONTENIDO_HPP
