#pragma once

#include <iostream>
using namespace std;

struct hoja
{
	int Codigo;

	hoja* papa;
	hoja* hijizq;
	hoja* hijoder;
	int height;

	hoja() {};

	hoja(int leerCod)
	{
		Codigo = leerCod;
		papa = NULL;
		hijizq = NULL;
		hijoder = NULL;
		height = height;
	}
};

class Arbol
{
private:
	void printNodos(hoja* nodoActual);
	hoja* root = NULL;
public:
	Arbol();
	~Arbol();
	void insertarNodo(int Codigo);
	void printNodos();
	hoja* insertarNodo_AVL(hoja* hoja,int codigo);
	void insertar(int codigo);
	hoja* buscar(hoja* r, int valor);


};