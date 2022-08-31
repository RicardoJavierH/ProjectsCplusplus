#include <iostream>

class fecha{
protected:
    int dia, mes, anio;

public:
    fecha():dia(0),mes(0),anio(0){}

    fecha(int d,int m,int a){

        dia=d;
        mes=m;
        anio=a;

    }

    // esta es una funcion
    virtual void imprimirfecha(){
        std::cout << dia << "/" << mes << "/" << anio << " ";
    }

    void cambiardia(int nd){
        dia=nd;
    }
};



class fechahora:public fecha{
private:
    int hora;
public:

    fechahora():fecha(),hora(0){}
    fechahora(int d,int m,int a,int h):fecha(d,m,a){
        hora=h;
    }

    void mostrar(){
        this->imprimirfecha();
        std::cout << ":" << hora << std::endl;

    }

};

class fechaminuto:public fecha{
private:
    int hora;
    int minuto;

public:
    fechaminuto():fecha(),hora(0),minuto(0){}
    fechaminuto(int d,int m,int a,int h, int min):fecha(d,m,a){
        hora=h;
        minuto=min;

    }

    void mostrar(){
        this->imprimirfecha();
        std::cout << ":" << hora << ":" << minuto <<std::endl;
    }

    void misterio(){
        std::cout << "caja misterio" << std::endl;
    }

};


int main(int argc, const char * argv[]) {

    fecha hoy;
    /*hoy.imprimirfecha();
    hoy.cambiardia(9);
    hoy.imprimirfecha();
    fecha nuevohoy(8,1,2022);
    nuevohoy.imprimirfecha();
    fecha *hoy1=new fecha(5,1,2022);
    hoy1->imprimirfecha();
    hoy1->cambiardia(9);
    hoy1->imprimirfecha();*/
    fechahora hoyfecha(8,1,2022,12);
    hoyfecha.mostrar();
    fechahora *ptrhoyfecha=&hoyfecha;
    ptrhoyfecha->mostrar();
    ptrhoyfecha->imprimirfecha();
    fechaminuto *ptrfechaminuto=(fechaminuto *)ptrhoyfecha;
    ptrfechaminuto->misterio();
    ptrfechaminuto->imprimirfecha();
    ptrfechaminuto->mostrar();
    
return 0;

}
