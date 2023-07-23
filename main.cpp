#include <iostream>
#include <string>
#include <vector>
#include "Contenido.hpp"
#include "Temporada.hpp"
#include "Pelicula.hpp"
#include "Serie.hpp"
#include "Capitulo.hpp"

using namespace std;
int main(int argc, char **argv)
{
    bool salir = false;
    int opcion;
    int idSerie;
    int idCapitulo;

    
        vector <Pelicula*> Peliculas;
        Peliculas.push_back(new Pelicula(2.0,200,"Star Wars: Episodio 1","Pelicula","Ficcion",3.7));
        Peliculas.push_back(new Pelicula(2.3,201,"Star Wars: Episodio 2","Pelicula","Ficcion",3.2));
        Peliculas.push_back(new Pelicula(2.3,202,"Star Wars: Episodio 3","Pelicula","Ficcion",4.2));
        Peliculas.push_back(new Pelicula(1.3,203,"Toy Story 1","Pelicula","Ficcion",3.8));
        
        vector <Capitulo*> Capitulos;
        Capitulos.push_back(new Capitulo(1,100,"Emboscada",3.0, "Clone Wars"));
        Capitulos.push_back(new Capitulo(2,100,"Inicio del Malevolencia",2.0,"Clone Wars"));
        Capitulos.push_back(new Capitulo(1,101,"El Resultado",4.7, "Bad Batch"));
        Capitulos.push_back(new Capitulo(2,101,"La huida",4.0, "Bad Batch"));
        
        
        vector <Temporada*> temporadas;
        temporadas.push_back(new Temporada(1,Capitulos));
        temporadas.push_back(new Temporada(2,Capitulos));
        vector <Serie*> Series;
        Series.push_back(new Serie(temporadas,100,"Clone Wars","Serie","Accion",4.0));
        Series.push_back(new Serie(temporadas,101,"Bad Batch","Serie","Accion",3.4));
                                                                                                                                        
        vector <Contenido*> Contenidos;
        Contenidos.push_back(new Serie(temporadas,100,"Clone Wars","Serie","Accion",4.0));
        Contenidos.push_back(new Serie(temporadas,101,"Bad Batch","Serie","Accion",3.4));
        Contenidos.push_back(new Pelicula(2.0,200,"Star Wars: Episodio 1","Pelicula","Ficcion",3.7));
        Contenidos.push_back(new Pelicula(2.3,201,"Star Wars: Episodio 2","Pelicula","Ficcion",3.2));
        Contenidos.push_back(new Pelicula(2.3,202,"Star Wars: Episodio 3","Pelicula","Ficcion",4.2));
        Contenidos.push_back(new Pelicula(1.3,203,"Toy Story 1","Pelicula","Ficcion",3.8));
        

    
    
    do{
        cout << "Escoja una opcion: "<<"\n"<<endl;
        cout << "1.- Coleccion"<<endl;
        cout << "2.- Peliculas"<<endl;
        cout << "3.- Serie"<<endl;
        cout << "4.- Numero de capitulos" <<endl;
        cout << "5.- Salir de la App" <<endl;
        cin>> opcion;
        
        if(opcion ==1)
            {
                    system("cls");
                    cout <<"Peliculas: "<<endl;
                    vector <Pelicula*>::const_iterator i;
                    for(i = Peliculas.begin(); i != Peliculas.end(); ++i)
                        {
                            cout  << (*i) ->MostrarVideo()<<endl;
                        }
                    cout<<"Series: "<<endl;
                    vector <Serie*>::const_iterator h;
                    for(h = Series.begin(); h != Series.end(); ++h)
                        {
                            cout  << (*h) ->getTitulo()<<endl;
                        }
            } //fin opcion 1
        if(opcion ==2)
            {       
                    system("cls");
                    vector <Pelicula*>::const_iterator i;
                    for(i = Peliculas.begin(); i != Peliculas.end(); ++i)
                        {
                            cout  << (*i) ->MostrarVideo()<<endl;
                        }
            }
        if(opcion ==3){
            system("cls");
            int id;
            cout <<"¿Que serie quieres?"<<endl;
            cout << "100.- Clone Wars"<<endl;
            cout << "101.- Bad Batch"<<endl;
            cout << "Escriba el ID" <<endl;
            cin >> id;
          
            
            vector <Serie*>::const_iterator h;
            idCapitulo = id;
            for(h = Series.begin(); h != Series.end();++h)
                    {
                        idSerie = (*h) ->getID();
                       if(id == idSerie)
                       {
                           
                           cout  << (*h) ->getTitulo()<<endl;
                           vector <Capitulo*>::const_iterator k;
                           for(k = Capitulos.begin(); k != Capitulos.end(); ++k)
                                {
                                    idCapitulo = (*k)->getIdCapitulo();
                                    if(id==idCapitulo)
                                    {
                                        cout <<(*k)-> MostrarCapitulo()<<endl;
                                    }
                                    
                                }
                         
                       }
                        
                    }
        }
        if(opcion == 4)
        {
        cout <<"Los capitulos totales son: "<< endl;
        Capitulo c1(1,100,"Emboscada",3.0, "Clone Wars");
        Capitulo c2(1,100,"Inicio del Malevolencia",2.0,"Clone Wars");
        Capitulo c3(1,101,"El Resultado",4.7, "Bad Batch");
        Capitulo c4(1,101,"La huida",4.0, "Bad Batch");
        Capitulo c5;
        c5 = c1 + c2 + c3 +c4;
        cout<<c5.getNumeroCapitulo()<<endl;
        }
        
        if(opcion ==5){
            salir = true;
            cout << "Se salio"<<endl;
        }
        
    }while(salir == false);
    


    
    return 0;
}