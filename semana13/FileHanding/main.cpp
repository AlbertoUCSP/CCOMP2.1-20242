#include <fstream>
#include <iostream>

int main() {
    std::ifstream source("source-file.txt");
    std::ofstream destination("dest-file.txt");
    
    int x;
    source >> x;

    destination << "Escribiendo...";

    source.close();
    destination << x;

}