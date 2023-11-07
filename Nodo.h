#pragma once

#include <iostream>
using namespace std;

/// <summary>
/// estructura que representa un nodo en un arbol binario
/// </summary>
struct hoja
{
	int Codigo; //dato del nodo
	hoja* papa; //puntero al nodo padre
	hoja* hijizq; //puntero al nodo hijo izquierdo
	hoja* hijoder; //puntero al nodo hijo derecho
	int height; //altura 

	/// <summary>
	/// constructor por defecto 
	/// </summary>
	hoja() {};

	/// <summary>
	/// constructor del nodo
	/// </summary>
	/// <param name="leerCod"> codigo que se le asignara al nodo</param>
	hoja(int leerCod)
	{
		Codigo = leerCod;
		papa = NULL;
		hijizq = NULL;
		hijoder = NULL;
		height = height;
	}
};

/// <summary>
/// clase instancia de arbol
/// </summary>
class Arbol
{
private:
	void printNodos(hoja* nodoActual);
	hoja* root = NULL; //puntero a la raiz 
public:
	/// <summary>
	/// constructor de la clase
	/// </summary>
	Arbol();
	/// <summary>
	/// destructor del arbol
	/// </summary>
	~Arbol();
	/// <summary>
	/// funcion que inserta un nodo
	/// </summary>
	/// <param name="Codigo">codigo a asignar al nodo</param>
	void insertarNodo(int Codigo);
	/// <summary>
	/// funcion que imprime nodos
	/// </summary>
	void printNodos();
	/// <summary>
	/// funcion que inserta nodos en un avl
	/// </summary>
	/// <param name="hoja">puntero a un nodo</param>
	/// <param name="codigo">codigo a asignar</param>
	/// <returns>nodo insertado</returns>
	hoja* insertarNodo_AVL(hoja* hoja,int codigo);
	/// <summary>
	/// funcion que inserta un nodo 
	/// </summary>
	/// <param name="codigo">codigo a asignar</param>
	void insertar(int codigo);
	/// <summary>
	/// metodo que busca un nodo
	/// </summary>
	/// <param name="nodo">nodo actual</param>
	/// <param name="valor">valor a buscar</param>
	/// <returns>el nodo o null en caso de no encontrarlo</returns>
	hoja* buscar(hoja* nodo, int valor);
	/// <summary>
	/// metodo que borra un arbol binario
	/// </summary>
	/// <param name="hoja">hoja actual</param>
	void borrarAB(hoja* hoja);

	void combinar(int codigo);

};