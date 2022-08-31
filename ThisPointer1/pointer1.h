//
//  pointer1.h
//  ThisPointer1
//  Created by Laboratorio de Computación Científica UNSA  on 15/12/21.
#ifndef pointer1_h
#define pointer1_h
#include <string>
class persona{
private:
    std::string nombre;
    int edad;
public:
    persona();
    persona(std::string,int);
    void setName(std::string);
    void setAge(int);
    //std::string getName(std::string);
    std::string getName();
    int getAge();
};


#endif /* pointer1_h */
