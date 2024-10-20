
#include <iostream>
#include <string>
#include "functions.h"

using namespace std;


void mostrarMenu() {
    int opcion;

    do {
        cout << "             MENU" << endl;
        cout << "1- Nuevo juego para 1 jugador" << endl;
        cout << "2- Nuevo juego para 2 jugadores" << endl;
        cout << "3- Puntuacion mas alta" << endl;
        cout << "0- Salir del juego" << endl;
        cout << "------------------------------" <<endl;

        cout << "Elija una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                juegoUnJugador();
                break;
            case 2:
                juegoDosJugadores();
                break;
            case 3:
                mostrarPuntuacionMasAlta();
                break;
            case 0:
                cout << "Saliendo del juego..." << endl;
                break;
            default:
                cout << "Opcion no valida, por favor intenta de nuevo." << endl;
        }
    } while (opcion != 0);
}
