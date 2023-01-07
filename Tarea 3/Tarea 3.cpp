
#include "Asociacion.h"


void registrarSocios()
{
    Asociacion asociacion(10,10,10);
    asociacion.getModSocios()->registrar(1, "juan");
    asociacion.getModSocios()->registrar(2, "pedro");
    asociacion.getModSocios()->registrar(3, "pepito");
    asociacion.getModSocios()->registrar(4, "miguel");
    asociacion.getModSocios()->registrar(5, "manuel");
    asociacion.getModSocios()->registrar(6, "choco");
    asociacion.getModSocios()->registrar(7, "jose");
    asociacion.getModSocios()->ordenar();
    asociacion.getModSocios()->mostrar();
}

void test3()
{
    Asociacion asociacion(20,20,10);
    asociacion.getModSocios()->registrar(1, "juan");
    asociacion.getModSocios()->registrar(2, "pedro");
    asociacion.getModVehiculos()->registrar("ABCD123", "ferrari", 1);
    Socio* pilotoEquipo1 = asociacion.getModSocios()->buscar("juan");
    Socio* copilotoEquipo1 = asociacion.getModSocios()->buscar("pedro");
    Vehiculo* vehiculoEquipo1 = asociacion.getModVehiculos()->buscar(1);
    asociacion.getModEquipos()->registrar("rapidos", pilotoEquipo1, copilotoEquipo1, vehiculoEquipo1);
    asociacion.getModEquipos()->mostrar();
}

void creandoCompetencias()
{
    Asociacion asociacion(20, 20, 10);
    asociacion.getModCompetencias()->registrar("competencia 3");
    asociacion.getModCompetencias()->registrar("competencia 4");
    asociacion.getModCompetencias()->registrar("competencia 5");
    asociacion.getModCompetencias()->registrar("competencia 1");
    asociacion.getModCompetencias()->registrar("competencia 2");
    asociacion.getModCompetencias()->ordenar();
    asociacion.getModCompetencias()->mostrar();
}

void competencia1(int n)
{
    Asociacion asociacion(20, 20, 10);
    asociacion.getModSocios()->registrar(1, "juan");
    asociacion.getModSocios()->registrar(1, "pedro");
    asociacion.getModVehiculos()->registrar("AAA111", "ferrari", 1);
    asociacion.getModSocios()->registrar(2, "shrek");
    asociacion.getModSocios()->registrar(2, "fiona");
    asociacion.getModVehiculos()->registrar("BBB222", "lamborguini", 2);
    asociacion.getModSocios()->registrar(3, "lorenzo");
    asociacion.getModSocios()->registrar(3, "lorena");
    asociacion.getModVehiculos()->registrar("CCC333", "toyota", 3);
    asociacion.getModSocios()->registrar(4, "mateo");
    asociacion.getModSocios()->registrar(4, "matias");
    asociacion.getModVehiculos()->registrar("DDD444", "audi", 4);
    asociacion.getModSocios()->registrar(5, "nicolas");
    asociacion.getModSocios()->registrar(5, "brandon");
    asociacion.getModVehiculos()->registrar("EEE555", "mclaren", 5);
    asociacion.getModSocios()->registrar(6, "martin");
    asociacion.getModSocios()->registrar(6, "anita");
    asociacion.getModVehiculos()->registrar("FFF666", "mitsubishi", 6);
    Socio* pilotoEquipo1 = asociacion.getModSocios()->buscar("juan");
    Socio* copilotoEquipo1 = asociacion.getModSocios()->buscar("pedro");
    Vehiculo* vehiculoEquipo1 = asociacion.getModVehiculos()->buscar(4);
    Socio* pilotoEquipo2 = asociacion.getModSocios()->buscar("shrek");
    Socio* copilotoEquipo2 = asociacion.getModSocios()->buscar("fiona");
    Vehiculo* vehiculoEquipo2 = asociacion.getModVehiculos()->buscar(3);
    Socio* pilotoEquipo3 = asociacion.getModSocios()->buscar("lorenzo");
    Socio* copilotoEquipo3 = asociacion.getModSocios()->buscar("lorena");
    Vehiculo* vehiculoEquipo3 = asociacion.getModVehiculos()->buscar(1);
    Socio* pilotoEquipo4 = asociacion.getModSocios()->buscar("mateo");
    Socio* copilotoEquipo4 = asociacion.getModSocios()->buscar("matias");
    Vehiculo* vehiculoEquipo4 = asociacion.getModVehiculos()->buscar(2);
    Socio* pilotoEquipo5 = asociacion.getModSocios()->buscar("nicolas");
    Socio* copilotoEquipo5 = asociacion.getModSocios()->buscar("brandon");
    Vehiculo* vehiculoEquipo5 = asociacion.getModVehiculos()->buscar(6);
    Socio* pilotoEquipo6 = asociacion.getModSocios()->buscar("martin");
    Socio* copilotoEquipo6 = asociacion.getModSocios()->buscar("anita");
    Vehiculo* vehiculoEquipo6 = asociacion.getModVehiculos()->buscar(5);
    asociacion.getModCompetencias()->registrar("competencia 1");
    Competencia* c1 = asociacion.getModCompetencias()->buscar("competencia 1");
    c1->registrarEquipo("swamp gaming telecom", pilotoEquipo1, copilotoEquipo1, vehiculoEquipo1);
    c1->registrarEquipo("fnatic", pilotoEquipo2, copilotoEquipo2, vehiculoEquipo2);
    c1->registrarEquipo("areucodingson?", pilotoEquipo3, copilotoEquipo3, vehiculoEquipo3);
    c1->registrarEquipo("cato", pilotoEquipo4, copilotoEquipo4, vehiculoEquipo4);
    c1->registrarEquipo("team liquid", pilotoEquipo5, copilotoEquipo5, vehiculoEquipo5);
    c1->registrarEquipo("tsm", pilotoEquipo6, copilotoEquipo6, vehiculoEquipo6);
    c1->equiposGanadores("swamp gaming telecom","fnatic","areucodingson?","cato","team liquid");
    if (n == 1)
    {
        c1->ordenarPuntaje();
    }
    else
    {
        c1->ordenarVehiculoAsignado();
    }
    
    asociacion.getModCompetencias()->mostrar();
}


int main()
{
    int n;
    cout << "ver por partes (apretar 1) o completo(apretar 2)" << endl;
    cin >> n;
    if (n==1)
    {
        registrarSocios();
        creandoCompetencias();
    }
    else
    {
        cout << "ver por puntajes equipos (apretar 1) o vehiculo asignado(apretar 2)" << endl;
        cin >> n;
        competencia1(n);
    }
    return 0;
}

