
#include <iostream>
#include "player.h"

int main(){
    //Crear Objeto
    Player objeto1("Carlitos", 3, 2.5);

    //Output
    std::cout << "Personaje: " << objeto1.getNombre() << '\n';
    std::cout << "Velocidad: " << objeto1.getVelocidad() << '\n';
    std::cout << "Vida: " << objeto1.getVida() << '\n';

    return 0;
}