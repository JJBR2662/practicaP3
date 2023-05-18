#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

void almacenar(int* puntero, int num) {
	for (int i = 0; i < num; i++) {
		cout << "Ingrese el numero en la posicion [" << i << "]: ";
		cin >> *(puntero + i);
	}
}

void buscarnum(int *puntero, int numele) {
	int numbus, * dir;
	cout << "Ingrese el numero a buscar: ";
	cin >> numbus;
	dir = puntero;
	bool esta = false;
	for (int i = 0; i < numele; i++) {
		if (numbus == *(puntero + i)) {
			esta = true;
			dir = (puntero + i);
		}
	}
	if (esta) {
		cout << "El numero ha sido encontrado en la direccion: " << dir;
	}
	else {
		cout << "El numero no ha sido encontrado";
	}
}

void meter(int* direccionx, int* direcciony, int* direccionz) {
	*direcciony = *direccionx;
	*direccionz = *direccionx;
}

int main() {
	char** matriz;
	int filas = 5, columnas = 5;
	matriz = new char* [filas];
	for (int i = 0; i < filas; i++){
		matriz[i] = new char[columnas];
	}
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if (i == j || j==columnas - i-1 )
			{
				matriz[i][j] = 'X';
			}
			else {
				matriz[i][j] = ' ';
			}
			cout << " " << matriz[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < filas; i++)
	{
		delete[] matriz[i];
	}
	delete[] matriz;


	/*char arreglo[3][80];
	for (int i = 0; i < 3; i++)
	{
		char cadena[80];
		cout << "Cadena " << i + 1 << ": ";
		cin.getline(arreglo[i], 80);
	}
	do
	{
		char cadena2[80];
		cout << "Cadena: ";
		cin >> cadena2;
		for (int j = 0; j < 3; j++) {
			if (strstr(arreglo[j], cadena2)) {
				cout << "Encontrado en cadena #" << j + 1 << "\n";
			}
		}
	} while (true);

	char cadena1[20];
	char cadena2[20];
	cout << "Ingrese la cadena a copiar: ";
	cin.getline(cadena1, 20, '\n');
	cout << "Cadena 1: " << cadena1 << "\nCadena 2: " << cadena2 << endl;
	strcpy_s(cadena2, cadena1);
	cout << "Cadena 1: " << cadena1 << "\nCadena 2: " << cadena2;


	int x=0, y=0, z=0;
	cout << "ingrese el numero a almacenar en las tres variables: ";
	cin >> x;
	cout << "ANTES(" << "x: " << x << " y: " << y << " z: " << z << ')' << endl;
	meter(&x, &y, &z);
	cout << "DESPUES(" << "x: " << x << " y: " << y << " z: " << z << ')' << endl;


	int num, * puntero;
	cout << "Ingrese la cantidad de numeros a aniadir: ";
	cin >> num;
	puntero = new int[num];
	almacenar(puntero, num);
	buscarnum(puntero, num);


	delete[] puntero;
	int num, * puntero;
	cout << "Ingrese un numero: ";
	cin >> num;
	puntero = &num;
	int cont=0;
	for (int i = 1; i <= num; i++)
		if (*puntero % i == 0)
			cont++;
	if (cont == 2)
		cout << "El numero " << *puntero << " SI es primo" << endl;
	else
		cout << "El numero " << *puntero << " NO es primo" << endl;
	cout << "Direccion en memoria: " << puntero << endl;*/
}