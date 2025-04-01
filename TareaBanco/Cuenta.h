//
// Created by ADRIANA on 31/03/2025.
//

#ifndef CUENTA_H
#define CUENTA_H
#include <vector>
#include <string>
using namespace std;


class Cuenta {
private:
    string titular;
    string telefono;
    string numeroCuenta;
    float saldo;
public:
    string getTitular();
    string getTelefono();
    string getNumeroCuenta();
    float getSaldo();
    string setTitular();
    string setTelefono();
    string setNumeroCuenta();
    float setSaldo();
    Cuenta();
    ~Cuenta();




};



#endif //CUENTA_H
