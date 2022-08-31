//Acceso a miembros de clase mediante puntero
//Para acceder a los miembros de clase de un objeto a través de un puntero se utiliza el operador flecha -> en lugar del
//operador punto ., obviamente el acceso con operador flecha sigue respetando los niveles de acceso establecidos en la definición de la clase.
#include<iostream>
using namespace std;

class MiClase
{
    int x;
    public:
    MiClase(int n):x(n){}
    void printX(){cout<<"El valor de x es: "<<x<<endl;}
    void setX(int a){x = a;}
};

int main()
{
    MiClase obj(15);  //Un objeto cualquiera
    MiClase *ptr_obj = &obj;  //Apuntando un puntero al objeto obj
    
    obj.printX(); //Acceso a un miembro a través del objeto
    ptr_obj->printX();  //Accesso a un miembro a través del puntero
    ptr_obj->setX(66); //Accesso a un miembro a través del puntero
    obj.printX(); //Acceso a un miembro a través del objeto
    return 0;
}
