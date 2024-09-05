#include <iostream>
using namespace std;

// Definición de la estructura
struct Persona
{
    int id;
    char nombre[50]; // Arreglo de caracteres para el nombre
};

int main()
{
    // Arreglo de estructuras
    Persona personas[] = {
        {10, "Cebollas"},
        {1, "Papa"},
        {9, "Tomate"},
        {7, "YaNoSeQuePoner"},
        {6, "Chipilin"},
        {5, "Si"},
        {3, "Remolacha"},
        {1, "XD"}};

    // Variables para recorrer
    int i, j, min = 0;
    Persona aux;
    int size = sizeof(personas) / sizeof(personas[0]);

    // Mostrar el arreglo original
    cout << "Arreglo original: \n";
    for (i = 0; i < size; i++)
    {
        cout << "ID: " << personas[i].id << ", Nombre: " << personas[i].nombre << endl;
    }
    cout << endl;

    // Recorrer el arreglo para ordenar por ID
    for (i = 0; i < size; i++)
    {
        min = i; // convertir el primero en el mínimo
        for (j = i + 1; j < size; j++)
        {
            if (personas[j].id < personas[min].id) // comparar IDs
            {
                min = j; // nuevo mínimo
            }
        }

        // Intercambiar valores
        aux = personas[i];           // aux guarda la estructura actual
        personas[i] = personas[min]; // la estructura actual toma el valor de la mínima
        personas[min] = aux;         // la mínima toma el valor de aux
    }

    // Arreglo ordenado
    cout << "Arreglo ordenado por ID: \n";
    for (i = 0; i < size; i++)
    {
        cout << "ID: " << personas[i].id << ", Nombre: " << personas[i].nombre << endl;
    }

    return 0;
}