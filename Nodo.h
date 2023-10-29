#pragma once
using namespace std;

template <class N>
class Nodo
{
private:
	Nodo<N>* hijo_iqz;
	Nodo<N>* hijo_der;
    N dato;
public:
	Nodo(N dato);

	N getdato();

	Nodo<N>* getHijo_izq();

	Nodo<N>* getHijo_der();

	void setDato(N dato);

	void setHijo_izq(Nodo<N>* hijo_izq);

	void setHijo_der(Nodo<N>* hijo_der);

};
