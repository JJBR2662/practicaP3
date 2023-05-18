#pragma once
#include <iostream>
#include <string>
using namespace std;
class Equipos{
	string Ename;
	string Epais;
	int Eanio;
	int Etitulos;

	public:
		Equipos();
		Equipos(string name, string pais, int anio, int titulos);
		string Getname();
		void Setname(string name);
		string Getpais();
		void Setpais(string pais);
		int Getanio();
		void Setanio(int anio);
		int Gettitulos();
		void Settitulos(int titulos);
};

