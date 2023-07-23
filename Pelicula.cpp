#include "Pelicula.hpp"
#include "Contenido.hpp"
#include <iostream>
#include <string>
/*
 * Se crean los metodos correspondientes al Diagrama UML que sirven para mostrar los atributos y concatenarlos
 * para cumplir los objetivos del programa. No en todos se concatena algunos son solo para mostrar los atributos.
 * 
*/
using namespace std;

Pelicula::Pelicula(double duracion, int id, string titulo, string tipo, string genero, double valoracion) : Contenido(id, titulo, tipo, genero, valoracion)
{
    this -> duracion = duracion;
}

string Pelicula::MostrarTitulo(){
    return titulo;
}

double Pelicula::MostrarValoracion(){
    return valoracion ;
}

string Pelicula:: MostrarVideo(){
    string msg = to_string(valoracion);
    string msg2 = to_string(duracion);
    return "Pelicula:    " +  titulo + ";        " + "Valoracion:   " + msg + "dura: " + msg2; 
}

string Pelicula::MostrarTipo(){
    string msg1,msg2;
    msg1 = to_string(valoracion);
    msg2 = to_string(id);
    return  msg2 + titulo + "es una " + tipo + "con valoracion" + msg1;    
}
