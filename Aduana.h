#pragma once
using namespace std;
#include<iostream>
class Aduana
{
private:
	string codigo;
	bool tipo_envio;
	string numero_seguimiento;
	string fecha_recepcion_aduana;
	int precio_base;
	float precio_paquete;
	float dimensiones;
	bool contenido_fragil;
	int valor_base;
	int numero_celular;
	public:

		Aduana(string codigo, bool tipo_envio, string numero_seguimiento,
		string fecha_recepcion_aduana,int precio_base,
		float precio_paquete,float dimensiones,bool contenido_fragil
		,int valor_base,int numero_celular);

};

