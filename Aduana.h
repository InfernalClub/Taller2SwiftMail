#pragma once
using namespace std;
#include<iostream>
/// <summary>
/// instancia de clase aduana
/// </summary>
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
	/// <summary>
	/// constructor de la clase
	/// </summary>
	/// <param name="codigo">codigo</param>
	/// <param name="tipo_envio">tipo de envío</param>
	/// <param name="numero_seguimiento">número de seguimiento</param>
	/// <param name="fecha_recepcion_aduana">fecha de recepcion en aduana</param>
	/// <param name="precio_base">precio base del paquete</param>
	/// <param name="numero_celular">numero celular</param>
	/// <param name="peso_paquete">peso del paquete</param>
	/// <param name="dimensiones">dimensiones del paquete</param>
	/// <param name="contenido_fragil">contenido fragil</param>
	/// <param name="direccion">direccion</param>
	Aduana(string codigo, string tipo_envio, string numero_seguimiento, string fecha_recepcion_aduana,
		int precio_base, int numero_celular, float peso_paquete, string dimensiones, string contenido_fragil
	,string direccion);

	/// <summary>
	/// destructor de la clase
	/// </summary>
	~Aduana();
	//get's

	/// <summary>
	/// obtiene el codigo
	/// </summary>
	/// <returns>retorna el codigo</returns>
	string get_codigo() const {  return this->codigo; }
	/// <summary>
	/// obtiene el tipo de envio
	/// </summary>
	/// <returns>tipo de encio</returns>
	string get_tipo_envio() const {  return this->tipo_envio; }
	/// <summary>
	/// obtiene el numero de seguimiento
	/// </summary>
	/// <returns>numero de seguimiento</returns>
	string get_numero_seguimiento() const {  return this->numero_seguimiento; }
	/// <summary>
	/// obtienela fecha de recepcion en aduana
	/// </summary>
	/// <returns>fecha de recepcion en aduana</returns>
	string get_fecha_recepcion_aduana() const {  return this->fecha_recepcion_aduana; }
	/// <summary>
	/// obtiene el precio base
	/// </summary>
	/// <returns>precio base</returns>
	int get_precio_base() const {	return this->precio_base;}
	/// <summary>
	/// obtiene el peso del paquete
	/// </summary>
	/// <returns>peso del paquete</returns>
	float get_peso_paquete() const { return this->peso_paquete;}
	/// <summary>
	/// obtiene el numero del celular
	/// </summary>
	/// <returns>numero del celular</returns>
	int get_numero_celular() const { return this->numero_celular; }
	/// <summary>
	/// obtiene las dimensiones del paquete
	/// </summary>
	/// <returns>dimensiones del paquete</returns>
	string get_dimensiones()const { return this->dimensiones; }
	/// <summary>
	/// obtiene si el contenido es fragil
	/// </summary>
	/// <returns>contenido fragil</returns>
	string get_contenido_fragil() const { return this->contenido_fragil; }
	/// <summary>
	/// obtiene la direccion
	/// </summary>
	/// <returns>direccion</returns>
	string get_direccion() const { return this->direccion; }
	
};

