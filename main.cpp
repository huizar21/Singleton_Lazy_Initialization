//Se incluye la biblioteca por defecto iostream.
#include <iostream>
//Se incluye la clase lazy_singleton
#include "lazy_singleton.h"
//Se pone el using namespace std.
using namespace std;
//Se declara el main de nuestro trabajo
int main()
{
    //Se declara el unico objeto con referencia de puntero con nombre.
    //Se puede declarar con diferente nombre, pero siempre sera el mismo objeto.
    Lazy_Singleton* as;
    //Se imprime uno de sus metodos, que en ese objeto ya esta dado por defecto y regresa un numero.
    cout <<as->imprime() <<endl;

    //En la siguiente se declara el metodo imprime, sin puntero, marca error en compilacion
    //pues no se declara un puntero haciendo referencia a ese unico objeto.

    //Lazy_Singleton pt;
    //cout <<pt.imprime() <<endl;

    //Abajo se muestra la llamada al metodo que recibia un parametro y regresaba un entero
    //lo cual no es posible puesto que el constructor no puede recibir nada por ser un
    //unico objeto y ser privado.

    //int num;
    //cout <<"Agrega numero: "<<endl;
    //cin>>num;
    //cout <<as->imprimenum(num) <<endl;
}
