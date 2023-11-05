#include <iostream>
#include "Taller2.h"
#include "SistemaSMT.h"
#undef main

int main()
{
	Sistema* sys = new Sistema();
	sys->menuInicial();
	delete sys;
	return NULL;
}