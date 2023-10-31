#include <iostream>
#include "SistemaSMT.h"

int main()
{
    

    SistemaSMT* sistema = new SistemaSMT;

    sistema->leer_archivo();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


/*

//esto es un ejemplo de ingresarArchivo
void manejoArchivos() {
    //Manejo de Archivos
    ifstream archivo;

    //Finalizamos el programa si el archivo presenta errores
    archivo.open("notas.txt");
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    //Probamos la lectura correcta del archivo
    //string linea;
    //while (!archivo.eof()) {
        //getline(archivo,linea);
        //cout << linea << endl;
    //}

    float mejor = -1;
    float peor = 999999;
    string nombreMejor, nombrePeor;
    string rutMejor, rutPeor;


    string linea;
    while (!archivo.eof()) {
        //Obtenemos la linea
        getline(archivo, linea);

        //Creamos las variables
        string nombre, rut, nota1Str, nota2Str, nota3Str;
        float nota1, nota2, nota3;

        // Funcion que obtiene la linea y se encarga de su lectura
        stringstream lector_linea(linea);

        // Operaciones que permiten la manipulacion del lector
        // Leen la linea y asignan un dato a una variable hasta
        // cierto limite designado por un caracter (,)
        getline(lector_linea, nombre, ',');
        getline(lector_linea, rut, ',');
        getline(lector_linea, nota1Str, ',');
        getline(lector_linea, nota2Str, ',');
        getline(lector_linea, nota3Str, ',');


        //Convertimos de string a float
        nota1 = stof(nota1Str);
        nota2 = stof(nota2Str);
        nota3 = stof(nota3Str);


        // Calculo de un promedio
        float promedio = (nota1 + nota2 + nota3) / 3;

        // Busqueda de un mejor y peor
        if (promedio < peor)
        {
            peor = promedio;
            nombrePeor = nombre;
            rutPeor = rut;
        }

        if (promedio > mejor)
        {
            mejor = promedio;
            nombreMejor = nombre;
            rutMejor = rut;
        }

    }

    //Desplegamos por pantalla el mejor y el peor
    cout << "El alumno con mejor nota es " << nombreMejor << " con RUT " << rutMejor << " y con promedio " << mejor << endl;;
    cout << "El alumno con peor nota es " << nombrePeor << " con RUT " << rutPeor << " y con promedio " << peor << endl;;

    //Cerramos el archivo
    archivo.close();

    //Creamos un nuevo archivo
    ofstream archivoSalida;
    //Le asignamos su nombre y su extension
    archivoSalida.open("mejor.txt");

    //Finalizamos el programa si el archivo presenta errores
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo de salida" << endl;
        exit(1);
    }

    //Le asignamos los datos que queremos guardar
    archivoSalida << nombreMejor << "," << rutMejor << "," << mejor;
    //Cerramos el archivo
    archivoSalida.close();
    
}
**/