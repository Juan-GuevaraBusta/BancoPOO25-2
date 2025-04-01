

#include "banco.h"
#include "cuenta.h"
#include <iostream>
#include <string>

void mostrarMenu1() {
    std::cout << "\n========== MENU PRINCIPAL ==========\n"
              << "1. Gestion de Cuentas\n"
              << "2. Salir\n"
              << "Opcion: ";
}

void mostrarMenu2() {
    std::cout << "\n========== GESTION DE CUENTAS ==========\n"
              << "1. Agregar nueva cuenta\n"
              << "2. Listar cuentas existentes\n"
              << "3. Buscar cuenta\n"
              << "4. Salir\n"
              << "Opcion: ";
}

void limpiarBuffer() {
    std::cin.clear();
    std::cin.ignore(10000, '\n');
}

int main() {
    //Banco banco;
    int opcion1;
    int opcion2;

    mostrarMenu1();
    std::cin >> opcion1;

    switch (opcion1) {
    case 1:
        do {
            mostrarMenu2();
            std::cin >> opcion2;
            limpiarBuffer();

            switch (opcion2) {
            case 1:
                // Opcion 1: Agregar cuenta
                    break;
            case 2:
                // Opcion 2: Listar cuentas existentes
                    break;
            case 3:
                // Opcion 3: Buscar cuenta
                    break;
            case 4:
                std::cout << "Gracias por usar el sistema bancario.\n";
                break;
            default:
                std::cout << "Opcion no valida.\n";
                break;
            }
        } while (opcion2 != 4);

    case 2:
        std::cout << "Saliendo...";
        break;

    default:
        std::cout << "Opcion no valida.\n";
    }


}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
