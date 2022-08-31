//https://www.youtube.com/watch?v=yfomh3ERIPc
//https://informatictechvzl.wordpress.com/2016/10/21/c-herencia-polimorfismo-dynamic_cast-acceso-a-clases-hijas-a-travez-de-apuntadores-a-clases-padres/

#include <iostream>

class A {
public:
    int a;
    virtual void print(){ //qué sucede si no fuera virtual, pruebe.
        std::cout << "I'm A\n";
    }
};

class B : public A {
public:
    int b;
    void print(){
        std::cout << "I'm B\n";
    }
};

class C : public A {
public:
    int c;
    void print(){
        std::cout << "I'm C\n";
    }
};

class D : public C, public B {
public:
    int d;
    void print(){
        std::cout << "I'm D\n";
    }
};

int main(int argc, const char * argv[]) {
    A *abc[3]; //vector de punteros a A
    abc[0] = new A; //estas lineas son posibles por que A,B,C son todas A
    abc[1] = new B;
    abc[2] = new C;
    
    abc[0]->print();
    abc[1]->print();
    abc[2]->print();
    
    //Como abc es vector de punteros a A, no será posible accesar directamente a los atributos b y c
//    abc[0]->a = 5;
//    abc[1]->b = 10;
//    abc[2]->c = 15;
    
    //Por tanto será necesario efectuar casteo
    B* B_aux = dynamic_cast<B*>(abc[1]);
    C* C_aux = dynamic_cast<C*>(abc[2]);
    
    abc[0]->a = 5;
    B_aux->b = 10;
    C_aux->c = 15;
    
    std::cout << "a:\t" << abc[0]->a << "\n";
    std::cout << "b:\t" << B_aux->b << "\n";
    std::cout << "c:\t" << C_aux->c << "\n";

    return 0;
}
