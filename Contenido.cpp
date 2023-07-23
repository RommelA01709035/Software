#include "Contenido.hpp"
/*
 * Se crean los metodos correspondientes al Diagrama UML que sirven para mostrar los atributos y concatenarlos
 * para cumplir los objetivos del programa. No en todos se concatena algunos son solo para mostrar los atributos.
 * 
*/

Contenido::Contenido(int id, string titulo, string tipo, string genero, double valoracion)
{
    this -> id = id;
    this -> valoracion = valoracion;
    this -> titulo = titulo;
    this -> tipo = tipo;
    this -> genero = genero;
}

string Contenido::getTitulo()
{
        return this -> titulo;
}

string Contenido::MostrarTipo(){
    string msg1;
    msg1 = to_string(valoracion);
    return titulo + "es una " + tipo + "con valoracion" + msg1;
}