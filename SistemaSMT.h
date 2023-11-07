#pragma once
class SistemaSMT
{
public:
	/// <summary>
	/// constructor de la clase
	/// </summary>
	SistemaSMT();
	/// <summary>
	/// metodo que lee un archivo
	/// </summary>
	void leer_archivo();
	/// <summary>
	/// metodo que lee el archivo sucursal
	/// </summary>
	void leer_archivo_sucursal();
	/// <summary>
	/// menu principal del sistema
	/// </summary>
	void menuInicial();
	/// <summary>
	/// menu de la aduana
	/// </summary>
	void menuAduana();
	/// <summary>
	/// menu de la sucursal
	/// </summary>
	void menuSucursal();
};

