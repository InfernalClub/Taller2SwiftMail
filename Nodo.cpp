#include <iostream>
#include "Nodo.h"
#include "Aduana.h"
/*Nodo::Nodo(Aduana* aduana) {
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
*/
using namespace std;
void Arbol::insertarNodo(int Codigo)
{
	hoja* nuevaHoja = new hoja(Codigo);
	hoja* iterador = root;
	hoja* iPadre = NULL;
	if (root == NULL)
	{
		root = nuevaHoja;
	}
	else
	{
		while (iterador != NULL)
		{
			iPadre = iterador;
			if (iterador->Codigo >= nuevaHoja->Codigo)
			{
				iterador = iterador->hijizq;
			}
			else
			{
				iterador = iterador->hijoder;
			}

		}
		if (iPadre->Codigo >= nuevaHoja->Codigo)
		{
			iPadre->hijizq = nuevaHoja;
			nuevaHoja->papa = iPadre;
		}
		else
		{
			iPadre->hijoder = nuevaHoja;
			nuevaHoja->papa = iPadre;
		}

	}
}


void Arbol::printNodos()
{
	if (root == NULL)
	{
		cout << "No hay nodos" << endl;
		return;
	}

	printNodos(root);

}

void Arbol::insertarNodo_AVL(int codigo)
{

}

void Arbol::printNodos(hoja* nodoActual)
{
	if (nodoActual->hijizq != NULL)
	{
		printNodos(nodoActual->hijizq);
	}
	cout << "Hoja: " << nodoActual->Codigo << endl;
	if (nodoActual->hijoder != NULL)
	{
		printNodos(nodoActual->hijoder);
	}
}

