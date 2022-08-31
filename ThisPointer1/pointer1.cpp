//  pointer1.cpp
//  ThisPointer1
//  Created by Laboratorio de Computación Científica UNSA  on 15/12/21.
#include "pointer1.h"
#include <iostream>
#include <string>
using namespace std;
persona::persona():nombre("nn"),edad(0){
    
}
persona::persona(string nombre, int edad){
    this->edad = edad;
    this->nombre = nombre;
}
void persona::setName(std::string nombre){
    this->nombre=nombre;
}
void persona::setAge(int edad){
    this->edad=edad;
}
std::string persona::getName(){
    return nombre;
}
int persona::getAge(){
    return this->edad;
}
