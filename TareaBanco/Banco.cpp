//
// Created by ADRIANA on 31/03/2025.
//

#include "Banco.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


//Empezamos este .cpp definiendo el constructor de banco

Banco::Banco() {}


/* Ahora por medio de iteradores, recorreremos las cuentas para que
muestre el titular, el numero de cuenta, el telefono y el saldo
de cada una de las cuentas en el banco */
vector<Cuenta*> Banco::listarCuentas() {
    vector<int>::iterator i;
    cout << "Titular      |      Numero de cuenta      |      telefono      |      Saldo" << endl;
    for (auto i = cuentas.begin(); i != cuentas.end(); ++i) {
        cout << (*i)->getTitular() << "      "
        << (*i)->getNumeroCuenta() << "      "
        << (*i)->getTelefono() << "      "
        << (*i)->getSaldo() << endl;
    }
}



/* Ahora, utilizando las librerias cstdlib (para usar las funciones strand y rand) y la libreria
time() para definir el tiempo actual, generaremos un numero aleatorio de 5 cifras (entre 10000
y 99999). Todo esto se verá reflejado en el main */

//Declarmos la función Agregar cuenta que recibe los parametros Titular, Telefono, NumeroCuenta y Saldo
Cuenta* Banco::agregarCuenta(string Titular, string Telefono, string NumeroCuenta, float Saldo) {

    //Creamos el un Nuevo Objeto llamado NuevoCuenta
    Cuenta* NuevaCuenta = new Cuenta;
    //Ponemos el valor del Titular con la función setTitular
    NuevaCuenta->setTitular(Titular);
    //Ponemos el valor del Telefono en la función setTelefono
    NuevaCuenta->setTelefono(Telefono);

    //Creamos un bucle for para recorrer el vector cuentas
    for (auto i = cuentas.begin(); i != cuentas.end(); i++) {
        //Verificamos que el numero de cuenta ingresado no sea igual a cualquier otro numero de cuenta de algun objeto
        if (NumeroCuenta == (*i)->getNumeroCuenta()) {

            //La idea es que cuando este if se cumpla ustedes desde el main puedan enviar
            //Otro numero de cuenta para que sea evaluado
            //O incluir la función la funcion de generar numero de cuenta en este metodo
            return 0;
        }
    }
    //Se establece el valor del NumeroCuenta con la función setNumeroCuenta
    NuevaCuenta->setNumeroCuenta(NumeroCuenta);
    //Ponemos el valor del Saldo con la función setSaldo
    NuevaCuenta->setSaldo(Saldo);


    //Añadimos al vector cuentas el objeto NuevoCuenta
    cuentas.push_back(NuevaCuenta);

    //Mostrar mensaje de que la cuenta se a creado exitosamente
    std::cout << "Se ha creado la cuenta exitosamente" << std::endl;

    //Retornamos el valor de la NuevaCuenta
    return NuevaCuenta;
}

//Declaramos el metodo buscarPorNombre y le entregamos el parametro nombre
Cuenta* Banco::buscarPorNombre(std::string nombre) {
    //Creamos un ciclo for para recorrer el vector de cuentas
    for (auto i = cuentas.begin(); i != cuentas.end(); i++) {
        // Verificamos que el parametro nombre sea igual a el nombre de alguna de las clases
        if (nombre == (*i)->getTitular()) {
            //Mostramos la información de la cuenta
            std::cout<<"Titular: "<<(*i)->getTitular()<<std::endl;
            std::cout<<"Numero_Cuenta: "<<(*i)->getNumeroCuenta()<<std::endl;
            std::cout<<"Telefono: "<<(*i)->getTelefono()<<std::endl;
            std::cout<<"Saldo: "<<(*i)->getSaldo()<<std::endl;

            //La idea es colocar en esta parte la función modificar cuenta para
            //Realizar las diferentes acciones en esta cuenta(Depositar o Retirar saldo)

            // modificaInfoCuenta();

        }
    }
}

Cuenta* Banco::buscarPorCuenta(std::string NumeroCuenta) {
    for (auto i = cuentas.begin(); i != cuentas.end(); i++) {
        if (NumeroCuenta == (*i)->getNumeroCuenta()) {
            //Mostramos la información de la cuenta
            std::cout<<"Titular: "<<(*i)->getTitular()<<std::endl;
            std::cout<<"Numero_Cuenta: "<<(*i)->getNumeroCuenta()<<std::endl;
            std::cout<<"Telefono: "<<(*i)->getTelefono()<<std::endl;
            std::cout<<"Saldo: "<<(*i)->getSaldo()<<std::endl;

            //La idea es colocar en esta parte la función modificar cuenta para
            //Realizar las diferentes acciones en esta cuenta(Depositar o Retirar saldo)

            // modificaInfoCuenta();


        }
    }
}
//implementación de existe cuenta
bool Banco::existeCuenta(std::string NumeroCuenta) {
    //se itera por elemento dentro del contenedor
    for (Cuenta* account: cuentas) {
        //se condiciona la coincidencia del numero de la cuenta
        if (account->getNumeroCuenta() == NumeroCuenta) {
            //en caso positivo devuelve true
            return true;
        } else {
            //en caso negativo devuelve false
            return false;
        }
    }
}
//implementación de modificar la información de la cuenta
Cuenta *Banco::modificarInfoCuenta() {
    //Se generan las variables para usar dentro del switch y usar los setters y getters para
    int opc;
    string newHolder;
    string newPhone;
    string newAccount;
    string numeroCuenta;
    cout << "Selecciona opcion:" << endl;
    cout << "1. Cambiar titular" << endl;
    cout << "2. Cambiar numero de telefono" << endl;
    cout << "3. Cambiar numero de cuenta" << endl;
    cin >> opc;
    switch (opc) {
        case 1:
            cout << "Introduzca el numero de cuenta al cual quiere cambiar el titular ";
            cin >> numeroCuenta;
            //Se hace un for con un interador i para buscar el numero de cuenta y poder cambiarle el nombre al titular
            for (auto i = cuentas.begin(); i != cuentas.end(); i++) {
                if (numeroCuenta == (*i)->getNumeroCuenta()) {
                    cout << "Titular: "<<(*i)->getTitular()<<endl;
                    cout << "Introduzca el nombre del nuevo titular" << endl;
                    cin >> newHolder;
                    (*i)->setTitular(newHolder);
                    cout << "Nuevo nombre de Titular: "<<(*i)->getTitular()<<endl;
                }
            }
            
        case 2:
            cout << "Introduzca el numero de cuenta al cual quiere cambiar el telefono ";
            cin >> numeroCuenta;
            //Se hace un for con un interador i para buscar el numero de cuenta y poder cambiarle el nombre al titular
            for (auto i = cuentas.begin(); i != cuentas.end(); i++) {
                if (numeroCuenta == (*i)->getNumeroCuenta()) {
                    cout << "Titular: "<<(*i)->getTitular()<<endl;
                    cout << "Telefono: " <<(*i)->getTelefono()<<endl;
                    cout << "Introduzca el nuevo numero de telefono" << endl;
                    cin >> newPhone;
                    (*i)->setTelefono(newPhone);
                    cout << "Nuevo numero de telefono: "<<(*i)->getTelefono()<<endl;

                }
            }

        case 3:cout << "Introduzca el numero de cuenta al cual quiere cambiar el telefono ";
            cin >> numeroCuenta;
            for (auto i = cuentas.begin(); i != cuentas.end(); i++) {
                if (numeroCuenta == (*i)->getNumeroCuenta()) {
                    cout << "Titular: "<<(*i)->getTitular()<<endl;
                    cout << "Numero de cuenta: " <<(*i)->getNumeroCuenta()<<endl;
                    cout << "Ahora se procederá a generar un nuevo numero de cuenta" << endl;
                    newAccount = generarNumeroCuenta();
                    (*i)->setNumeroCuenta(newAccount);
                    cout << "Su nuevo numero de cuenta es: " << (*i) ->getNumeroCuenta()<<endl;
                }
            }


    }
}

