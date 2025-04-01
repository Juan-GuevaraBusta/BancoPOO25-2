//
// Created by ADRIANA on 31/03/2025.
//

#ifndef BANCO_H
#define BANCO_H
#include <string>
#include <vector>
using namespace std;
#include "cuenta.h"


class Banco {
private:
    string generarNumeroCuenta();
    bool validaNumeroCuenta(string numeroCuenta);
    vector <Cuenta*> cuentas;
    public:
    Banco();
    Cuenta* agregarCuenta(string Titular, string Telefono, string NumeroCuenta float Saldo);
    Cuenta* buscarPorNombre(string Titular);
    Cuenta* buscarPorCuenta(string NumeroCuenta);
    vector <Cuenta*> listarCuentas();
    Cuenta* modificarInfoCuenta();
    bool existeCuenta(string NumeroCuenta);
    string getNumeroCuenta();

};



#endif //BANCO_H
