//
// Created by ADRIANA on 31/03/2025.
//

#include "Cuenta.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

float Cuenta::getSaldo() {

    return saldo;
}

void Cuenta::setSaldo(float saldo) {
    this->saldo = saldo;
}

string Cuenta::getTelefono() {
    return telefono;
}

void Cuenta::setTelefono(std::string telefono) {
    this->telefono = telefono;
}

std::string Cuenta::getTitular() {
    return titular;
}

void Cuenta::setTitular(std::string titular) {
    this->titular = titular;
}

std::string Cuenta::getNumeroCuenta() {
    return numeroCuenta;
}

void Cuenta::setNumeroCuenta(string numeroCuenta) {
    this->numeroCuenta = numeroCuenta;
}
string generarNumeroCuenta() {
    srand(time(0));
    int num = 10000 + rand() % 100000;
    string numeroCuenta = to_string(num);
    return numeroCuenta;
}