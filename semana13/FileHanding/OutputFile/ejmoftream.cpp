#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("Ejemplo_output.txt"); // Se crea el archivo y se abre automaticamente

    // Verifica si el archivo se abrio, si es asi podre escribir con tranquilidad 
    if(file.is_open()) {
        file << "Estoy escribiendo en el archivo";                                    /*Nota: Si el archivo no se abrio
    }                                                                                  correctamente podrias o no escribir
    else {                                                                             en el archivo*/
        // Si no se abre correctamente, muesta un mensaje
        std::cout << "El archivo no se pudo abrir" << std::endl;
    }

    file.close();

}