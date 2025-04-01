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
    vector <Cuenta> cuentas;
    public:
    Banco();
    Cuenta agregarCuenta(string titular, string telefono, string numeroCuenta, float saldo);
    Cuenta buscarPorNombre(string nombre);
    Cuenta buscarPorCuenta(string numeroCuenta);
    vector <Cuenta> listarCuentas();
    Cuenta modificarInfoCuenta();
    string getNumeroCuenta();
    string getTitularCuenta();
    string getTelefonoCuenta();
    float getSaldoCuenta();
    string setNumeroCuenta(string numeroCuenta);
    string setTitularCuenta(string titular);
    string setTelefonoCuenta(string numeroCuenta);
    float setSaldoCuenta(float saldo);
    bool existeCuenta(string numeroCuenta);


};



#endif //BANCO_H
