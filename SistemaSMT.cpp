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
		cout << "Error al abrir el archivo: " << strerror(errno) << std::endl;
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
		
		string codigo_aduana, numero_Seguimiento,
			fecha_recepcion, direccion,tipo_envio,dimensiones, fragil,
			valor_baseStr,peso_paqueteStr,telefonoStr;
		int valor_base,telefono;
		float  peso_paquete;

		stringstream lector_linea(linea);

		getline(lector_linea, codigo_aduana, ',');
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
		ArbolBB.insertarNodo(valor_base);
	
	}
	archivo.close();


}
