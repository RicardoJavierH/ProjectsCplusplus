//
//  class_examples.h
//  projectC++
//
//  Created by Laboratorio de Computación Científica UNSA  on 1/09/22.
//

#ifndef class_examples_h
#define class_examples_h

#include <iostream>

class A {
public:
    int a;
    virtual void print(){//What if it wasn't virtual, try it
        std::cout << "I'm A\n";
    }
};

class B : virtual public A {// Virtual inheritance to avoid diamond problem
public:
    int b;
    void print(){
        std::cout << "I'm B\n";
    }
};

class C : virtual public A {// Virtual inheritance to avoid diamond problem
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

#endif /* class_examples_h */
