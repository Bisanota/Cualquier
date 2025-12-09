#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]){

    if (argc < 2) {
        std::cout << "Uso: " << argv[0] << " <comando> [args...]\n";
        return 1;
    }

    std::string cmd;
    for (int i = 1; i < argc; ++i){
        cmd +=argv[i];
        if (i < argc -1) cmd += " ";
    }

    std::cout << "Ejecutando: " << cmd << "\n";
    int result = std::system(cmd.c_str());

    if (result != 0) {
        std::cout << "Error al ejecutar el comando.\n";
        return 1;
    }


    return 0;
}