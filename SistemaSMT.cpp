#include "SistemaSMT.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "Nodo.h"
using namespace std;
int opcion;

SistemaSMT sistema;

void SistemaSMT::leer_archivo()
{
	ifstream archivo;
	Arbol ArbolBB;

	//si el archivo no existe
	if (!archivo) {
		cout << "Error al abrir el archivo: " << strerror(errno) << endl;
		return ;
	}
	archivo.open("Aduana1.txt");

	//si el archivo falla
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo" << endl;
		exit(1);
	}
	
	string linea;

	while (getline(archivo, linea)) {
		
		string codigo_aduanaStr, numero_Seguimiento,
			fecha_recepcion, direccion,tipo_envio,dimensiones, fragil,
			valor_baseStr,peso_paqueteStr,telefonoStr;
		int codigo_aduana,valor_base,telefono;
		float  peso_paquete;

		stringstream lector_linea(linea);

		getline(lector_linea, codigo_aduanaStr, ',');
		getline(lector_linea, tipo_envio, ',');
		getline(lector_linea, numero_Seguimiento, ',');
		getline(lector_linea, fecha_recepcion, ',');
		getline(lector_linea, valor_baseStr, ',');
		getline(lector_linea, telefonoStr, ',');
		getline(lector_linea, peso_paqueteStr, ',');
		getline(lector_linea, dimensiones, ',');
		getline(lector_linea, fragil, ',');
		getline(lector_linea, direccion, ',');

		//convertir valores

		try {
			codigo_aduana = stoi(codigo_aduanaStr);
			valor_base = stoi(valor_baseStr);
			telefono = stoi(telefonoStr);
			peso_paquete = stof(peso_paqueteStr);

			cout<< "Codigo de aduana: " << codigo_aduana << ", Tipo de envio: " << tipo_envio
				<< ", Numero de seguimiento: " << numero_Seguimiento << ", Fecha de recepcion: " << fecha_recepcion
				<< ", Valor base: " << valor_base << ", Telefono: " << telefono
				<< ", Peso del paquete: " << peso_paquete << ", Dimensiones: " << dimensiones
				<< ", Fragilidad: " << fragil << ", Direccion: " << direccion << endl;
		}
		catch (const exception& e) {
			cout << "error en la conversion de valores" << e.what() << endl;
		}
		ArbolBB.insertarNodo(codigo_aduana);
	
	}
	archivo.close();

}

void SistemaSMT::leer_archivo_sucursal()
{
	ifstream archivo;
	Arbol ArbolAVL;

	//si el archivo no existe
	if (!archivo) {
		cout << "Error al abrir el archivo: " << strerror(errno) << endl;
		return;
	}
	archivo.open("Sucursal1.txt");

	//si el archivo falla
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo " << endl;
		exit(1);
	}

	string linea;

	while (getline(archivo, linea)) {

		string codigo_paqueteStr, codigoSMT, repartidor, tiempo_entregaSTR;
		int tiempo_entrega,codigo_paquete;
		

		stringstream lector_linea(linea);

		getline(lector_linea, codigo_paqueteStr, ',');
		getline(lector_linea, codigoSMT, ',');
		getline(lector_linea, repartidor, ',');
		getline(lector_linea, tiempo_entregaSTR, ',');
		
		//convertir valores

		try {
			tiempo_entrega = stoi(tiempo_entregaSTR);
			codigo_paquete = stoi(codigo_paqueteStr);
			
			
			cout << "Codigo de paquete: " << codigo_paquete << ", codigo SMT: " << codigoSMT
				<< ", Nombre repartidor: " << repartidor <<", Tiempo entrega"<< tiempo_entrega <<  endl;
		}
		catch (const exception& e) {
			cout << "error en la conversion de valores" << e.what() << endl;
		}
		
		ArbolAVL.insertar(codigo_paquete);

	}
	archivo.close();
}

void SistemaSMT::menuInicial()
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

void SistemaSMT::menuAduana()
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

void SistemaSMT::menuSucursal()
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

