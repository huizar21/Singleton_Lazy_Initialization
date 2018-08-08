#include "lazy_singleton.h"

Lazy_Singleton::Lazy_Singleton(){
    //Metodo constructor declarado como privado
}
Lazy_Singleton::~Lazy_Singleton(){
    //Metodo destructor declarado como privado
}
//Metodo de creacion unica del objeto en si mismo, regresa la referencia de si mismo en un espacio de memoria.
Lazy_Singleton& Lazy_Singleton::instance(){
    static Lazy_Singleton instance;
    return instance;
}
//Metodo imprime, sirve para regresar el unico objeto que existe, se manda a llamar por puntero
//para obtener ese unico objeto existente.
int Lazy_Singleton::imprime(){
    return 10;
}


// Metodo imprimenum(), sirve para demostrar que no se ejecutara en compilacion pues
//al dejar el constructor privado, no puede recibir nada de otra clase.

//int Lazy_Singleton::imprimenum(int a){
  //  return a;
//}

