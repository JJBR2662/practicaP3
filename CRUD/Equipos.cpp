#include "Equipos.h"
Equipos::Equipos() {};
Equipos::Equipos(string name, string pais, int anio, int titulos) {
	Ename = name;
	Epais = pais;
	Eanio = anio;
	Etitulos = titulos;
};
string Equipos::Getname() {
	return Ename;
};
void Equipos::Setname(string name) {
	this->Ename = name;
};
string Equipos::Getpais() {
	return Epais;
};
void Equipos::Setpais(string pais) {
	this->Epais = pais;
};
int Equipos::Getanio() {
	return Eanio;
};
void Equipos::Setanio(int anio) {
	this->Eanio = anio;
};
int Equipos::Gettitulos() {
	return Etitulos;
};
void Equipos::Settitulos(int titulos) {
	this->Etitulos = titulos;
};