#pragma once
#include "pventas.h"
#include <iostream>
#include <mysql.h>
#include "ConexionBD.h"
#include <string>
using namespace std;

class venta : pventa {
	// atributos
private: int idventa;
	   // constructor
public:
	venta() {
	}


	venta(int nofac, string s, string fec_f, int idc, int idem, string  fi, int idv) : pventa(nofac, s, fec_f, idc, idem, fi) {
		idventa = idv;
	}

	//metodos
	//set (modificar)
	void setidventa(int idv) { idventa = idv; }
	void setnofactura(int nofac) { nofactura = nofac; }
	void setserie(string s) { serie = s; }
	void setfechafactura(string fec_f) { fechafactura = fec_f; }
	void setidcliente(int idc) { idcliente = idc; }
	void setidempleado(int idem) { idempleado = idem; }
	void setfechaingreso(string fi) { fechaingreso = fi; }

	//get (mostrar)
	int getidventa() { return idventa; }
	int getnofactura() { return nofactura; }
	string getserie() { return serie; }
	string getfechafactura() { return fechafactura; }
	int getidcliente() { return idcliente; }
	int getidempleado() { return idempleado; }
	string getfechaingreso() { return fechaingreso; }
/*
	void agregar() {
		cout << "---------------------------" << endl;
		cout << idventa << "," << nofactura << "," << serie << "," << fechafactura << "," << idcliente << "," << idempleado << "," << fechaingreso << endl;
	}*/

	void Crearv() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {

			string insert = "INSERT INTO ventas(nofactura,serie,fechafactura,idcliente,idempleado,fechaingreso)VALUES('" + nofactura + "','" + serie + "','" + fechafactura + "','" + idcliente + "','" + idempleado + "','" + fechaingreso + "'); ";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Ingreso Exitoso...." << endl;

			}

			else {
				cout << "Error en El ingreso ..." << endl;
			}
		}
		else {
			cout << "Error en la Conexion ..." << endl;
		}

	}

	void leer() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();

		if (cn.getConectar()) {
			string consulta = "select * from ventas";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "------------------Ventas---------------" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << "-" << fila[1] << "-" << fila[2] << "-" << fila[3] << "-" << fila[4] << "-" << fila[5] << endl;
				}

			}

			else {
				cout << "Error en El ingreso ..." << endl;
			}
		}
		else {
			cout << "Error en la Conexion ..." << endl;
		}
		cn.cerrar_conex();

	}
};
}