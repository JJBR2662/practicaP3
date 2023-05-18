#include <iostream>
#include <string>
#include "Equipos.h"
#include <vector>
using namespace std;
int menu() {
	int opcion;
	do {
		cout << "1. Agregar Equipo A La Liga\n2. Eliminar Equipo De La Liga\n3. Mostrar La Liga\n4. Salir\n\nIngrese la opcion a elegir: ";
		cin >> opcion;
		if (opcion > 4 || opcion < 1) {
			cout << "Opcion no valida, ingrese de nuevo";
		}
	} while (opcion > 4 || opcion < 1);
	return opcion;
}
Equipos agregar() {
	string nombre, pais;
	int anio, titulos;
	cout << "-----------------------------------------------------------------\n";
	cout << "Ingrese el nombre del equipo: ";
	cin >> nombre;
	cout << "Ingrese el nombre del pais donde se localiza el equipo: ";
	cin >> pais;
	cin.ignore();
	cout << "Ingrese el anio de creacion del equipo: ";
	cin >> anio;
	cout << "-----------------------------------------------------------------\n";
	cout << "Ingrese la cantidad de titulos del equipo: ";
	cin >> titulos;
	return Equipos(nombre, pais, anio, titulos);
}
int main() {
	vector<Equipos> equipos;
	int opcion;
	do
	{
		opcion = menu();
		switch (opcion) {
		case 1:
			equipos.push_back(agregar());
			cout << "Se creo el " << equipos.at(equipos.size()-1).Getname() << " correctamente\n\n";
			break;
		case 2:
			int elim;
			cout << "-----------------La SuperLiga-----------------\n";
			for (int i = 0; i < equipos.size(); i++) {
				cout << i << ". " << equipos.at(i).Getname() << '\n';
			}
			cout << "----------------------------------------------\n";
			do
			{
				cout << "Ingrese el numero del equipo que desea eliminar: ";
				cin >> elim;
				if (elim >= equipos.size() || elim < 0) {
					cout << "Se salio del rango, intente de nuevo\n";
				}
			} while (elim >= equipos.size() || elim < 0);
			equipos.erase(equipos.begin() + elim);
			break;
		case 3:
			if (equipos.empty()){
				cout << "La liga esta vacia\n";
			}
			else {
				cout << "-----------------La SuperLiga-----------------\n";
				for (int i = 0; i < equipos.size(); i++)
					cout << i << ". " << equipos.at(i).Getname() << '\n';
				cout << "----------------------------------------------\n";
			}
			break;
		default:

			break;
		}
	} while (opcion != 4);
}