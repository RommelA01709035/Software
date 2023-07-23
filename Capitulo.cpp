#include "Capitulo.hpp"
#include <iostream>
#include <string>

/*
 * Se crean los metodos correspondientes al Diagrama UML que sirven para mostrar los atributos y concatenarlos
 * para cumplir los objetivos del programa. No en todos se concatena algunos son solo para mostrar los atributos.
 * 
*/

using namespace std;
Capitulo::Capitulo()
{
    numeroCapitulo =0;
    idCapitulo =0;
    nombre = "Llena campo";
    valoracion = 0.0;
    serie = "Llena campo";
}

Capitulo::Capitulo( int numeroCapitulo,int idCapitulo, string nombre, double valoracion, string serie)
{
    this->numeroCapitulo= numeroCapitulo;
    this->nombre= nombre;
    this -> valoracion=valoracion;
    this -> serie = serie;
    this -> idCapitulo = idCapitulo;
  
}

int Capitulo::getNumeroCapitulo(){
return this->numeroCapitulo;
}

int Capitulo::getIdCapitulo(){
    return this ->idCapitulo;
}

string Capitulo::getSerie(){

    return this->serie;
}

string Capitulo::getNombre(){
    return this->nombre;
}


string Capitulo::getValoracion(int numeroCapitulo){
    string msg1 = to_string(valoracion);
    string msg2 = to_string(numeroCapitulo);
    return "Numero de capitulo  " + msg2 + "con valoracion de: "+ msg1;
}

string Capitulo::getValoracion(){
    string msg1 = to_string(valoracion);
    return msg1;
}

string Capitulo::MostrarCapitulo(){
    string msg1,msg2;
    msg1 = to_string(numeroCapitulo);
    msg2 = to_string(valoracion);
    return "Capitulo  " +msg1 + ";"+ nombre +"         Valoracion" + msg2+";" ;
}

Capitulo Capitulo::operator+(Capitulo val)
{
        Capitulo cap;
        cap.numeroCapitulo=this->numeroCapitulo+val.numeroCapitulo;
        return cap;
}

