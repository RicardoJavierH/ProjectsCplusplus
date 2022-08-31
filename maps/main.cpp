
#include <iostream>
#include <map>
#include <string>
#include <list>

int main(int argc, const char * argv[]) {
    std::map<std::string,std::string> myDictionary;
    myDictionary.insert(std::pair<std::string,std::string>("apple","manzana"));
    myDictionary.insert(std::pair<std::string,std::string>("banana","banana"));
    myDictionary.insert(std::pair<std::string,std::string>("orange","naranja"));
    myDictionary.insert(std::pair<std::string,std::string>("strawberry","fresa"));

    myDictionary["banana"]="platano";
    std::cout << myDictionary.size() << std::endl;
    
    for (auto pair : myDictionary)
        std::cout << pair.first << " -- " << pair.second << std::endl;
 
    //------- Pikachu attack options
    
    std::map<std::string,std::list<std::string>> pokedex;
    std::list<std::string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    std::list<std::string> charmanderAttacks {"flame thrower", "scary face"};
    std::list<std::string> chikoritaAttacks {"razor leaf","poison powder"};
    
    std::pair<std::string,std::list<std::string>> par("Chikorita",chikoritaAttacks);
    
    pokedex.insert(std::pair<std::string,std::list<std::string>>("Pikachu", pikachuAttacks));
    pokedex.insert(std::pair<std::string,std::list<std::string>>("Charmander",charmanderAttacks));
    //pokedex.insert(std::pair<std::string, std::list<std::string>>("Chikorita", chikoritaAttacks));
    pokedex.insert(par);
    
    for (auto par:pokedex){
        std::cout << par.first << " -- ";
        for (auto attack : par.second)
            std::cout << attack << ", ";
        std::cout<< std::endl;
    }
    
    return 0;
}
