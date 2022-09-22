//https://www.youtube.com/watch?v=7SqySe4Lkow

#include <iostream>
#include <ostream>
#include <vector>
#include <string>
#include <sstream>


template <class T>
T addAll(std::vector<T> list){
    T count = 0;
    for (auto& el : list){
        count += el;
    }
    return count;
}

template<>
std::string addAll(std::vector<std::string> list){
    int count = 0;
    for (std::string& el : list){
        for (char& chr : el){
            count += chr;
        }
    }
    
    std::ostringstream ostr;
    ostr << count;
    std::string strCount = ostr.str();
    return strCount;
}

int main(){
    std::vector<int> vecInt{1,2,3,4,5,1};
    std::vector<double> vecDoub{1.,2.,3.,4.,5.,1.};
    std::vector<std::string> vecString{"abc","efg","hjk"};
    
    std::cout << addAll(vecInt) << std::endl;
    std::cout << addAll(vecDoub) << std::endl;
    std::cout << addAll(vecString) << std::endl;

}
