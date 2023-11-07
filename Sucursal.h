#pragma once
using namespace std;
#include<iostream>
/// <summary>
/// instancia de Sucursal
/// </summary>
class Sucursal
{
private:
	string codigo_paquete;
	string codigo_SMT;
	string repartidor;
	int tiempo_entrega;

public:
	/// <summary>
	/// constructor de la clase
	/// </summary>
	Sucursal(string codigo_paquete, string codigo_SMT, string repartidor, int tiempo_entrega);
	/// <summary>
	/// destructor de la clase
	/// </summary>
	~Sucursal();
//get's
	
	/// <summary>
	/// obtiene el codigo del paquete
	/// </summary>
	/// <returns>codigo del paquete</returns>
	string get_codigo_paquete();
	/// <summary>
	/// obtiene el codigo SMT
	/// </summary>
	/// <returns>codigo SMT</returns>
	string get_codigo_SMT();
	/// <summary>
	/// obtiene al repartidor
	/// </summary>
	/// <returns>repartidor</returns>
	string get_repartidor();
	/// <summary>
	/// obtiene el tiempo
	/// </summary>
	/// <returns>timepo</returns>
	int get_tiempo_entrega();

//set's
	
	/// <summary>
	/// permite cambiar al codigo del paquete 
	/// </summary>
	/// <param name="codigo_paquete">codigo de paquete por parametro</param>
	/// <returns>nuevo codigo de paquete</returns>
	string get_codigo_paquete(string codigo_paquete);
	/// <summary>
	/// permite cambiar el codigo SMT
	/// </summary>
	/// <param name="condigo_smt">codigo SMT por parametro</param>
	/// <returns>nuevo codigo SMT</returns>
	string get_codigo_SMT(string condigo_smt);
	/// <summary>
	/// permite cambiar repartidor
	/// </summary>
	/// <param name="repartidor">repartidor por parametro</param>
	/// <returns>nuevo repartidor</returns>
	string get_repartidor(string repartidor);
	/// <summary>
	/// permite cambiar el tiempo de entrega
	/// </summary>
	/// <param name="tiempo_entrega">tiempo de entrega por parametro</param>
	/// <returns>nuevo timepo de enrtega</returns>
	int get_tiempo_entrega(int tiempo_entrega);
};

