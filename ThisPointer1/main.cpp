//  Created by Laboratorio de Computación Científica UNSA  on 15/12/21.
//
#include "pointer1.h"
#include <iostream>

int main(int argc, const char * argv[]) {
    persona pp("Pablo",23);
    std::cout << "His name is: "<<pp.getName()<<" and his age is : "<<pp.getAge()<<std::endl;
    persona p1;
    p1.setAge(40);
    p1.setName("Pedro Pablo");
    std::cout << "His name is: "<<p1.getName()<<" and his age is : "<<p1.getAge()<<std::endl;
    
    return 0;
}
