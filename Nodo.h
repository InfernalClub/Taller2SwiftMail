#pragma once

#include <iostream>
using namespace std;

struct hoja
{
	int Codigo;

	hoja* papa;
	hoja* hijizq;
	hoja* hijoder;

	hoja() {};

	hoja(int leerCod)
	{
		Codigo = leerCod;
		papa = NULL;
		hijizq = NULL;
		hijoder = NULL;
	}
};

class Arbol
{
public:
	Arbol();
	~Arbol();
	void insertarNodo(int Codigo);
	void printNodos();
	void insertarNodo_AVL(int codigo);


private:
	void printNodos(hoja* nodoActual);
	hoja* root = NULL;
};