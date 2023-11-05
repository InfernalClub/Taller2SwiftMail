#include "Nodo.h"
#include "Aduana.h"

Nodo::Nodo(Aduana* aduana) {
	this->hijo_der = nullptr;
	this->hijo_iqz = nullptr;
	this->aduana = aduana;
}

Nodo::~Nodo()
{
	this->hijo_der = nullptr;
	this->hijo_iqz = nullptr;
	this->aduana -> ~Aduana();
}

Aduana* Nodo::get_aduana()
{
	return this->aduana;
}

Nodo* Nodo::get_hijo_izq()
{
	return this->hijo_iqz;
}

Nodo* Nodo::get_hijo_der()
{
	return this->hijo_der;
}

void Nodo::set_aduana(Aduana* aduana)
{
	this->aduana = aduana;
}

void Nodo::set_hijo_izq(Nodo* hijo_izq)
{
	this->hijo_iqz = hijo_izq;
}

void Nodo::set_hijo_der(Nodo* hijo_der)
{
	this->hijo_der = hijo_der;
}


