#pragma once
using namespace std;
#include<iostream>
class Sucursal
{
private:
	string codigo_paquete;
	string codigo_SMT;
	string repartidor;
	int tiempo_entrega;

public:
//get's
	Sucursal();
	~Sucursal();
	string get_codigo_paquete();
	string get_codigo_SMT();
	string get_repartidor();
	int get_tiempo_entrega();

//set's
	string get_codigo_paquete(string codigo_paquete);
	string get_codigo_SMT(string condigo_smt);
	string get_repartidor(string repartidor);
	int get_tiempo_entrega(int tiempo_entrega);
};

