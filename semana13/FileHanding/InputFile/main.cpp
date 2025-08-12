#include <iostream>
#include <fstream>

void lectura();

int main() {
    lectura();
}

void lectura() {
    std::ifstream file("Problema4.txt", std::ios::in);
    std::string texto;

    if(file.fail()) {
        std::cout << "El archivo no se pudo abrir" << std::endl; 
    }

    while(!file.eof()) {
        getline(file, texto);
        std::cout << texto;
    }

    file.close();

}