#include "Aduana.h"



Aduana::Aduana(string codigo, string tipo_envio, string numero_seguimiento,
	string fecha_recepcion_aduana, int precio_base, int numero_celular,
	float peso_paquete, string dimensiones, string contenido_fragil, string direccion)
{
	this->codigo = codigo;
	this->tipo_envio = tipo_envio;
	this->numero_seguimiento = numero_seguimiento;
	this->fecha_recepcion_aduana = fecha_recepcion_aduana;
	this->precio_base = precio_base;
	this->numero_celular = numero_celular;
	this->peso_paquete = peso_paquete;
	this->dimensiones = dimensiones;
	this->contenido_fragil = contenido_fragil;
	this->direccion = direccion;
}

Aduana::~Aduana()
{
}
