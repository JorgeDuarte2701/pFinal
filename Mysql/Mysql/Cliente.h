#pragma once
#include "cliente2.h"
#include <iostream>
#include <mysql.h>
#include "ConexionBD.h"
#include <string>
using namespace std;

class Clientes : public Persona
{
private: string nit;
	   // constructor
public:
	Clientes() {
	}
	Clientes(string nom, string ape, string gen, string tel,string cor_e,string fi, string n) : Persona(nom, ape, gen, tel,cor_e,fi,n) {
		nit = n;
	}

	// METODOS
	//set (modificar)
	void setNit(string n) { nit = n; }
	void setNombres(string nom) { nombres = nom; }
	void setApellidos(string ape) { apellidos = ape; }
	void setGenero(string gen) { genero = gen; }
	void setTelefono(string tel) { telefono = tel; }
	void setCorreo_electronico(string cor_e) { correo_electronico = cor_e; }
	void setFechaingreso(string fi) { fechaingreso = fi; }
	//get (mostrar)
	string getNit() { return nit; }
	string getNombres() { return nombres; }
	string getApellidos() { return apellidos; }
	string getGenero() { return genero; }
	string getTelefono() { return telefono; }
	string getCorreo_electronico() { return correo_electronico; }
	string getFechaingreso() { return fechaingreso; }

	void Crearclien() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			
			string insert = "INSERT INTO clientes(nombres,apellidos,nit,genero,telefono,correo_electronico,fechaingreso)VALUES('" + nombres + "','" + apellidos + "','"+ nit + "','"+genero + "','"+ telefono + "','"+ correo_electronico +"','"  +fechaingreso + "'); ";
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
			string consulta = "select * from clientes";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "------------------CLientes----------------" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << "-" << fila[1] << "-" << fila[2] << "-" << fila[3] << "-" << fila[4] << "-" << fila[5] << "-" << fila[6] << endl;
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
		/*
	}void actualizar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
			string str_id, str_new, str_column;
				if (cn.getConectar()) {
			
			cout << "ACTUALIZAR";
			string iupdate = "Update clientes set" + str_column + " = '" + str_new + "' where idclientes= " + str_id;

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
		cn.cerrar_conex();
	}
	*/

	void eliminar() {
		int q_estado;
		string elidat, elid;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();

		if (cn.getConectar()) {

			string consulta = "delete from clientes where idclientes=" + elid;
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "Ingrese el ID para eliminar: ";
				cin >> elid;
				cout << "------------------clientes---------------" << endl;

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


