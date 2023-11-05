#pragma once
using namespace std;
#include<iostream>
class Aduana
{
private:
	string codigo;
	string tipo_envio;
	string numero_seguimiento;
	string fecha_recepcion_aduana;
	int precio_base;
	float peso_paquete;
	int numero_celular;
	string dimensiones;
	string contenido_fragil;
	string direccion;

public:

	Aduana(string codigo, string tipo_envio, string numero_seguimiento, string fecha_recepcion_aduana,
		int precio_base, int numero_celular, float peso_paquete, string dimensiones, string contenido_fragil
	,string direccion);

	~Aduana();
	//get's
	string get_codigo() const {  return this->codigo; }
	string get_tipo_envio() const {  return this->tipo_envio; }
	string get_numero_seguimiento() const {  return this->numero_seguimiento; }
	string get_fecha_recepcion_aduana() const {  return this->fecha_recepcion_aduana; }
	int get_precio_base() const {	return this->precio_base;}
	float get_peso_paquete() const { return this->peso_paquete;}
	int get_numero_celular() const { return this->numero_celular; }
	string get_dimensiones()const { return this->dimensiones; }
	string get_contenido_fragil() const { return this->contenido_fragil; }
	string get_direccion() const { return this->direccion; }
	
};

