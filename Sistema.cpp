#include <iostream>
#include "Taller2.h"
#undef main

int main()
{
	Sistema* sys = new Sistema();
	sys->menuInicial();
	delete sys;
	return NULL;
}