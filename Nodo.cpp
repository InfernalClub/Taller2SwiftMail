#include <iostream>
#include "Nodo.h"
#include "Aduana.h"

using namespace std;
Arbol::Arbol()
{
	
}
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

hoja* Arbol::insertarNodo_AVL(hoja* nueva_hoja,int codigo)
{
	if (nueva_hoja == NULL) {

		nueva_hoja = new hoja(codigo);

		nueva_hoja->Codigo= codigo;
		nueva_hoja->height = 0;
		nueva_hoja->hijizq = nueva_hoja->hijoder = NULL;
	}
	else if (codigo < nueva_hoja->Codigo)
	{
		nueva_hoja->hijizq = insertarNodo_AVL(nueva_hoja->hijizq, codigo);

		if (height(nueva_hoja->hijizq) - height(nueva_hoja->hijoder) == 2)
		{
			//rotacion R
			if (codigo < nueva_hoja->hijizq->Codigo)
				nueva_hoja = rotacion_derecha(nueva_hoja);
			else
			//rotacion RR
				nueva_hoja = rotacion_derecha_doble(nueva_hoja);
		}
	}
	else if (codigo > nueva_hoja->Codigo)
	{
		nueva_hoja->hijoder = insertarNodo_AVL(nueva_hoja->hijoder, codigo);
		if (height(nueva_hoja->hijoder) - height(nueva_hoja->hijizq) == 2)
		{
			if (codigo > nueva_hoja->hijoder->Codigo)
				nueva_hoja = rotacion_izquierda(nueva_hoja);
			else
				nueva_hoja = rotacion_izquierda_doble(nueva_hoja);
		}
	}

	nueva_hoja->height = max(height(nueva_hoja->hijizq), height(nueva_hoja->hijoder)) + 1;
	return nueva_hoja;
	
}
/// <summary>
/// funcion que rota hacia la derecha una vez
/// max compara la altura entre dos subarboles
/// </summary>
/// <param name="nodo">nodo proporcionado</param>
/// <returns>puntero nodo aux</returns>
hoja* rotacion_derecha(hoja*& nodo)
{
	hoja* aux = nodo->hijizq;
	nodo->hijizq = aux->hijoder;
	aux->hijoder = nodo;
	nodo->height = max(height(nodo->hijizq), height(nodo->hijoder)) + 1;
	aux->height = max(height(aux->hijizq), nodo->height) + 1;
	return aux;
}

/// <summary>
/// funcion que muestra la altura
/// </summary>
/// <param name="hoja">puntero hoja</param>
/// <returns>la altura del arbol y -1 si el nodo es nulo</returns>
int height(hoja* hoja)
{
	return (hoja == NULL ? -1 : hoja->height);
}
/// <summary>
/// funcion que rota hacia la izquierda una vez
/// max compara la altura entre dos subarboles
/// </summary>
/// <param name="nodo">nodo proporcionado</param>
/// <returns>puntero nodo aux</returns>
hoja* rotacion_izquierda(hoja*& nodo)
{
	hoja* aux = nodo->hijoder;
	nodo->hijoder = aux->hijizq;
	aux->hijizq = nodo;
	nodo->height = max(height(nodo->hijizq), height(nodo->hijoder)) + 1;
	aux->height = max(height(nodo->hijoder), nodo->height) + 1;
	return aux;
}
/// <summary>
/// funcion que rota dos veces hacia la derecha
/// </summary>
/// <param name="nodo">nodo proporcionado</param>
/// <returns>funcion que rota a la derecha</returns>
hoja* rotacion_derecha_doble(hoja*& nodo)
{
	nodo->hijizq = rotacion_izquierda(nodo->hijizq);
	return rotacion_derecha(nodo);
}
/// <summary>
/// funcion que rota dos veces hacia la izquierda
/// </summary>
/// <param name="nodo">nodo proporcionado</param>
/// <returns>funcion que rota a la izquierda</returns>
hoja* rotacion_izquierda_doble(hoja*& nodo)
{
	nodo->hijoder = rotacion_derecha(nodo->hijoder);
	return rotacion_izquierda(nodo);
}
void Arbol::insertar(int codigo) {
	hoja* iterador = root;
	hoja* padre = NULL;
	root = insertarNodo_AVL(root, codigo);

}