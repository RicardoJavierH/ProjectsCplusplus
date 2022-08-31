//  Created by Laboratorio de Computación Científica UNSA on 23/04/22.

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    //Example of opening/creating a file using the open() function*/
    std::fstream new_file;
    new_file.open("new_file_write.txt", std::ios::out);
    if(!new_file){
        std::cout << "File creation failed";
    } else{
        std::cout << "New file created" << std::endl;
        new_file << "Learning file handling"; //writing to file
        new_file.close();
    }
    
    /* Reading from a File */
    //std::fstream new_file;
    new_file.open("new_file_write.txt", std::ios::in);
    if(!new_file){
        std::cout << "No such file";
    } else {
        char ch;
        while (!new_file.eof()){
            if(new_file >> ch)
                std::cout << ch;
        }
        std::cout << std::endl;
    }
    
    new_file.close();
    
   /* Another way */
    std::string fileName("MyFile.txt");
    std::ofstream *fileStream;
    fileStream = new std::ofstream(NULL);
    fileStream->open(fileName);
    *fileStream << "Hello" << std::endl << "_____";
    fileStream->close();
    
    return 0;
}
