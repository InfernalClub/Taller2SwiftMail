#include <iostream>
#include "SistemaSMT.h"
#include "Taller2.h"

SistemaSMT sistema;

int opcion;
Sistema::Sistema()
{

}


void Sistema:: menuInicial()
{

    cout << "********************************* \n";
    cout << "Menú Sistema de Envíos \n";
    cout << "********************************* \n";
    cout << "1) Menú Aduana \n";
    cout << "2) Menú Sucursal \n";
    cout << "3) Cerrar Programa\n";
    cout << "Opcion: \n";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        menuAduana();
        break;

    case 2:
        menuSucursal();
        break;

    case 3:
        break;

    default:
        cout << "Elija una opcion valida \n";
        menuInicial();
        break;
    }
    
}

void Sistema::menuAduana()
{
    cout << "********************************* \n";
    cout << "Menú Sistema de Envíos - Aduana \n";
    cout << "********************************* \n";
    cout << "1) Ingresar Envíos \n";
    cout << "2) Despacho a Sucursal \n";
    cout << "3) Volver al menú principal\n";
    cout << "Opcion: \n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        sistema.leer_archivo();
        break;

    case 2:
       
        break;

    case 3:
        menuInicial();
        break;

    default:
        cout << "Elija una opcion valida \n";
        menuAduana();
        break;
    }


}

void Sistema::menuSucursal()
{
    cout << "********************************* \n";
    cout << "Menú Sistema de Envíos - Aduana \n";
    cout << "********************************* \n";
    cout << "1) Asignar repartidores \n";
    cout << "2) Realizar Entregas \n";
    cout << "3) Generar Reporte\n";
    cout << "4) Volver al menú principal \n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:

        break;

    case 2:

        break;

    case 3:

        break;

    case 4:
        menuInicial();
        break;

    default:
        cout << "Elija una opcion valida \n";
        menuAduana();
        break;
    }


}
