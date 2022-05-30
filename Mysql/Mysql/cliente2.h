#pragma once
#include <iostream>
using namespace std;
class Persona {
	// atributos
protected: string nombres, apellidos,nit, telefono,genero,correo_electronico,fechaingreso;
		 
		 // costructor
protected:
	Persona() {
	}
	Persona(string nom, string ape, string gen, string tel, string cor_e, string fi, string n) {
		nombres = nom;
		apellidos = ape;
		genero = gen;
		telefono = tel;
		correo_electronico = cor_e;
		fechaingreso = fi;
		nit = n;
	}

	// metodos
	void mostrar();

};