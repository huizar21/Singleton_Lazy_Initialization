#ifndef LAZY_SINGLETON_H
#define LAZY_SINGLETON_H

//Declaracion de la clase
   class Lazy_Singleton
{
//Control de acceso tanto privado como publico.
   private:
       //El constructor y destructor son privados, para que unicamente se pueda crear o restringir la creacion de un solo objeto.
       ~Lazy_Singleton();
       Lazy_Singleton();

   public:
    //El metodo instance, sirve para hacer la unica instancia que tendra nuestro objeto en la clase Lazy_Singleton.
    static Lazy_Singleton& instance();
    //Este metodo es la demostracion de que crea el numero 10 unicamente en el objeto creado desde la clase misma.
    static int imprime();
    //El siguiente metodo sirve para demostrar, que no se ejecutara el metodo, debido a que al ser llamado desde otra clase
    //y al querer setearse, marcara error, por que el constructor no permitira recibir ningun argumento, pues solo esta
    //instanciado una vez.

    //static int imprimenum();
};


#endif // LAZY_SINGLETON_H
