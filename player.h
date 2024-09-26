#include <iostream>

class Player{
    private:
        std::string Nombre;
        int Velocidad;
        double Vida;

    public:
        Player(std::string nombre, int velocidad, double vida){
            Nombre = nombre;
            Velocidad = velocidad;
            Vida = vida;
        }
        std::string getNombre(){
            return Nombre;
        }
        int getVelocidad(){
            return Velocidad;
        }
        double getVida(){
            return Vida;
        }
};