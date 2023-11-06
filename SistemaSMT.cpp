#include "SistemaSMT.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "Nodo.h"
using namespace std;

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

}