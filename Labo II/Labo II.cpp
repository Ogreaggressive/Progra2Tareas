
#include "SistemaBancario.h"

#include "Empresa.h"
#include "Persona.h"

//para test2
#include "Cuenta.h"
#include "CajaAhorro.h"
#include "CuentaCorriente.h"
#include "CuentaDepositoPlazoFijo.h"


void test1()
{
    SistemaBancario banco(10);
    //primera manera de aumentar
    banco.getModClientes()->registrar("1A", "nicolas", 111, "cochabamba",4);
    //segunda manera de aumentar
    Empresa comteco("2B", "comteco", 222, "cochabamba",3,6963889,"SA"); //SA O SRL
    Cliente* empresa1 = &comteco;
    banco.getModClientes()->aumentar(empresa1);
    banco.getModClientes()->mostrar();
}

void test2()
{
    //trabajaremos con getmodtransacciones registrar si no queremos que las cuentas se repitan
    CajaAhorro cajaAhorro1(1,"caja ahorro",0,10,3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    cuenta1->getModTransacciones()->registrar("a","deposito",1000,260321); //string codigo, string tipo, int monto, int fecha
    cuenta1->mostrar();
    cuenta1->getModTransacciones()->mostrar();
    //Cuenta cuenta1();
}

void test3()
{
    CajaAhorro cajaAhorro1(1, "caja ahorro", 0, 10, 3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    Transaccion transaccion1("a", "deposito", 1000, 260321);
    Transaccion transaccion2("b", "deposito", 3000, 260321);
    cuenta1->getModTransacciones()->aumentar(&transaccion1);
    cuenta1->getModTransacciones()->aumentar(&transaccion2);
    cajaAhorro1.deposito(&transaccion1);
    cajaAhorro1.deposito(&transaccion2);
    cajaAhorro1.actualizacion();
    cuenta1->mostrar();
    cuenta1->getModTransacciones()->mostrar();  
}

void agregarCliente()
{
    SistemaBancario banco(10);
    Empresa comteco("2B", "comteco", 222, "cochabamba", 3, 6963889, "SA"); //SA O SRL
    Cliente* empresa1 = &comteco;
    Persona nicolasCari("1A", "nicolas", 111, "cochabamba", 4,6666123); //string codigo, string nombre, int fono, string direccion, int cantMaxCuentas, int CI
    Cliente* cliente1 = &nicolasCari;
    banco.getModClientes()->aumentar(empresa1);
    banco.getModClientes()->aumentar(cliente1);
    CajaAhorro cajaAhorro1(1, "caja ahorro", 0, 10, 3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    CuentaDepositoPlazoFijo plazoFijo1(2131,"cuenta corriente",0,10,32621,32921,1000); //int id, string tipo, int saldo, int cantMaxTransacciones, int fechaIni, int fechaFin, int interes
    Cuenta* cuenta2 = &plazoFijo1;
    empresa1->getModCuentas()->aumentar(cuenta1);
    cliente1->getModCuentas()->aumentar(cuenta2);
    banco.getModClientes()->ordenarClienteAsignado();
    banco.getModClientes()->mostrar();
    cout << "cuenta empresa comteco" << endl;
    empresa1->getModCuentas()->mostrar();
    cout << "cuenta cliente Nicolas Cari" << endl;
    cliente1->getModCuentas()->mostrar();
}

void eliminarCliente()
{
    SistemaBancario banco(10);
    Empresa comteco("2B", "comteco", 222, "cochabamba", 3, 6963889, "SA"); 
    Cliente* empresa1 = &comteco;
    Persona nicolasCari("1A", "nicolas", 111, "cochabamba", 4, 6666123); 
    Cliente* cliente1 = &nicolasCari;
    banco.getModClientes()->aumentar(empresa1);
    banco.getModClientes()->aumentar(cliente1);
    CajaAhorro cajaAhorro1(1, "caja ahorro", 0, 10, 3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    CuentaDepositoPlazoFijo plazoFijo1(2131, "cuenta corriente", 0, 10, 32621, 32921, 1000);
    Cuenta* cuenta2 = &plazoFijo1;
    empresa1->getModCuentas()->aumentar(cuenta1);
    cliente1->getModCuentas()->aumentar(cuenta2);
    banco.getModClientes()->eliminar(empresa1);
    banco.getModClientes()->mostrar();
    cliente1->getModCuentas()->mostrar();
}

void adicionarCuentas()
{
    SistemaBancario banco(10);
    Empresa comteco("2B", "comteco", 222, "cochabamba", 3, 6963889, "SA");
    Cliente* empresa1 = &comteco;
    banco.getModClientes()->aumentar(empresa1);
    CajaAhorro cajaAhorro1(1, "caja ahorro", 0, 10, 3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    CuentaDepositoPlazoFijo plazoFijo1(2131, "cuenta corriente", 0, 10, 32621, 32921, 1000);
    Cuenta* cuenta2 = &plazoFijo1;
    empresa1->getModCuentas()->aumentar(cuenta1);
    empresa1->getModCuentas()->aumentar(cuenta2);
    banco.getModClientes()->mostrar();
    empresa1->getModCuentas()->mostrar();
}

void eliminarCuenta()
{
    SistemaBancario banco(10);
    Empresa comteco("2B", "comteco", 222, "cochabamba", 3, 6963889, "SA");
    Cliente* empresa1 = &comteco;
    banco.getModClientes()->aumentar(empresa1);
    CajaAhorro cajaAhorro1(1, "caja ahorro", 0, 10, 3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    CuentaDepositoPlazoFijo plazoFijo1(2131, "cuenta corriente", 0, 10, 32621, 32921, 1000);
    Cuenta* cuenta2 = &plazoFijo1;
    empresa1->getModCuentas()->aumentar(cuenta1);
    empresa1->getModCuentas()->aumentar(cuenta2);
    empresa1->getModCuentas()->eliminar(cuenta1);
    banco.getModClientes()->mostrar();
    empresa1->getModCuentas()->mostrar();
}

void modificarSaldo()
{
    //esto podria ser creado cada vez que el usuario
    //quiera una nueva transaccion
    //se crearia dentro de la cuenta y dentro del mod de transacciones
    CajaAhorro cajaAhorro1(1, "caja ahorro", 0, 10, 3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    Transaccion transaccion1("a", "deposito", 1000, 260321);
    Transaccion transaccion2("b", "deposito", 12000, 260321);
    Transaccion transaccion3("c", "retiro", 4000, 260321);
    cuenta1->getModTransacciones()->aumentar(&transaccion1);
    cuenta1->getModTransacciones()->aumentar(&transaccion2);
    cuenta1->getModTransacciones()->aumentar(&transaccion3);
    Transaccion mantenimiento("d", "mantenimiento", 3000, 260321);
    cuenta1->getModTransacciones()->aumentar(&mantenimiento);
    cajaAhorro1.deposito(&transaccion1);
    cajaAhorro1.deposito(&transaccion2);
    cajaAhorro1.retiro(&transaccion3);
    cajaAhorro1.actualizacion();
    cuenta1->mostrar();
    cuenta1->getModTransacciones()->mostrar();
}

void reporteClienteEhistorialTransacciones()
{
    //funciona igual que adicionar cuenta
    SistemaBancario banco(10);
    Empresa comteco("2B", "comteco", 222, "cochabamba", 3, 6963889, "SA");
    Cliente* empresa1 = &comteco;
    banco.getModClientes()->aumentar(empresa1);
    CajaAhorro cajaAhorro1(1, "caja ahorro", 0, 10, 3000);
    Cuenta* cuenta1 = &cajaAhorro1;
    CuentaDepositoPlazoFijo plazoFijo1(2131, "cuenta corriente", 0, 10, 32621, 32921, 1000);
    Cuenta* cuenta2 = &plazoFijo1;
    Transaccion transaccion1("a", "deposito", 1000, 260321);
    Transaccion transaccion2("b", "deposito", 12000, 260321);
    Transaccion transaccion3("c", "retiro", 4000, 260321);
    cuenta1->getModTransacciones()->aumentar(&transaccion1);
    cuenta1->getModTransacciones()->aumentar(&transaccion2);
    cuenta1->getModTransacciones()->aumentar(&transaccion3);
    Transaccion mantenimiento("d", "mantenimiento", 3000, 260321);
    cuenta1->getModTransacciones()->aumentar(&mantenimiento);
    cajaAhorro1.deposito(&transaccion1);
    cajaAhorro1.deposito(&transaccion2);
    cajaAhorro1.retiro(&transaccion3);
    cajaAhorro1.actualizacion();
    empresa1->getModCuentas()->aumentar(cuenta1);
    empresa1->getModCuentas()->aumentar(cuenta2);
    banco.getModClientes()->mostrar();
    empresa1->getModCuentas()->mostrar();
    cuenta1->getModTransacciones()->mostrar();
}


int main()
{
    //test3();
    //ejemplos de como funcionaria cada ejercicio
    //agregarCliente();
    //eliminarCliente();
    //adicionarCuentas();
    // eliminarCuenta();
    //modificarSaldo();
    //reporteClienteEhistorialTransacciones();
    
    return 0;
}
