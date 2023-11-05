#include <iostream>
#include "Nodo.h"

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

