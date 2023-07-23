#include "Serie.hpp"
#include "Contenido.hpp"
#include <iostream>
#include <string>
#include "Temporada.hpp"
#include "Capitulo.hpp"
#include <vector>
using namespace std;

Serie::Serie( vector <Temporada*> Temporadas,int id, string titulo,string tipo, string genero, double valoracion):  Contenido(id,titulo,tipo,genero,valoracion)
{
    this->Temporadas = Temporadas;
  
}
string Serie::getTitulo(){
    return this -> titulo;
}

int Serie::getID()
{
        return this -> id;
}

vector <Temporada*> Serie::getTemporadas()
{
    return Temporadas;
}

void Serie::addTemporada(Temporada* temporada)
{
    Temporadas.push_back(temporada);
}


string Serie:: MostrarVideo(){
    string msg = to_string(valoracion);
    return "Serie:    " +  titulo + ";        " + "Valoracion:   " + msg ; 
}



string Serie::MostrarTipo(){
    string msg1,msg2;
    msg1 = to_string(valoracion);
    msg2 = to_string(id);
    return  msg2 + titulo + "es una " + tipo + "con valoracion" + msg1;
    
}



