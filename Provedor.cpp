#include "Provedor.hpp"
#include "Contenido.hpp"
#include <iostream>
#include <string>
#include <vector>
/*
 * Se crean los metodos correspondientes al Diagrama UML que sirven para mostrar los atributos.
 * 
*/
using namespace std;



Provedor::Provedor(vector <Contenido*> unContenido, double costo)
    {
        this-> unContenido = unContenido;
        this -> costo = costo;
    }

vector <Contenido*> Provedor::getContenido()
    {
        return unContenido;
    }

