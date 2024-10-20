#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

// Definición de la función para un jugador
void juegoUnJugador() {
    string nombreJugador;
    cout << "Ingrese el nombre del jugador: ";
    cin >> nombreJugador;
    
    // Aquí implementarás la lógica del juego para un jugador
    cout << "Iniciando juego para " << nombreJugador << "..." << endl;
    // Lógica de rondas y puntuación aquí
}

// Definición de la función para dos jugadores
void juegoDosJugadores() {
    string jugador1, jugador2;
    cout << "Ingrese el nombre del primer jugador: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del segundo jugador: ";
    cin >> jugador2;
    
    // Aquí implementarás la lógica del juego para dos jugadores
    cout << "Iniciando juego para " << jugador1 << " y " << jugador2 << "..." << endl;
    // Lógica de rondas y puntuación aquí
}

// Definición de la función para mostrar la puntuación más alta
void mostrarPuntuacionMasAlta() {
    // Aquí implementarás la lógica para mostrar la puntuación más alta
    cout << "Mostrando la puntuacion más alta..." << endl;
}
