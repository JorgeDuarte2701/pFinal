#pragma once
#include <iostream>
#include <mysql.h>
#include "ConexionBD.h"
#include <string>
using namespace std;
class pventa {
	// atributos
protected: int idventa, nofactura, idcliente, idempleado;
		 string serie, fechaingreso, fechafactura;

		 // costructor
protected:
	pventa() {
	}
	pventa(int nofac, string s, string fec_f, int idc, int idem, string  fi) {
		// idventa= idv;
		nofactura = nofac;
		serie = s;
		fechafactura = fec_f;
		idcliente = idc;
		idempleado = idem;
		fechaingreso = fi;

	}

	// metodos
	void mostrar();

};