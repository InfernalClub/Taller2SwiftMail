#pragma once
#include "Aduana.h"
using namespace std;

class Nodo
{
private:
	Nodo* hijo_iqz;
	Nodo* hijo_der;
	Aduana* aduana;
public:
	Nodo(Aduana* aduana);

	~Nodo();

	Aduana* get_aduana();

	Nodo* get_hijo_izq();

	Nodo* get_hijo_der();

	void set_aduana(Aduana* aduana);

	void set_hijo_izq(Nodo* hijo_izq);

	void set_hijo_der(Nodo* hijo_der);

};
