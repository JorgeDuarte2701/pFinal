#pragma once
#include "pventas.h"
#include "Cliente.h"
#include "cliente2.h"
#include <iostream>
#include <mysql.h>
#include "ConexionBD.h"
#include <string>
//#include "proveedores.h"

using namespace std;
/*code by Jorge Duarte
carnet 3590-20-11844*/


int main() {

	int inicio, Menu;
	//variables menu1 
	string nombre, apellido, genero, correoelectronico, fechaingreso, nit, telefono;
	int idclientes;
	//variables menu2
	int idventa, nofactura, idcliente, idempleado;
	string serie, fecha_ingreso, fechafactura;
	//variables menu3 
	//variables menu4 
	string id_proveedor, proveedor, direccion;

	//variables menu5
	string producto, idmarca, descripcion, imagen, precio_costo, precio_venta;
	int idproducto, existencia;
	//variables menu6 
	string dpi, fechanacimiento, fecha_iniciolabores, idempleados, idpuesto;

	//variables menu7
	string compra_detalle, precio_costo_unitario, idcompra, id_producto;
	int cantidad;

	//variables menu8
	string precio_unitario;
	int id_venta;
	//variables menu9   
	string id_marca, marca;

	char ress, mini;
	system("cls");
	do {

		printf("Bienvenido\n");


		printf("Desea ingresar el programa?..(s/n): \n");
		scanf_s("%d", &inicio);
		cout << "¿Desea Salir?..(s/n):";
		cin >> mini;
	} while (mini == 'n');


	do {

		//declaracion de menu interactivo
		//utilizamos printf es mas versatil y facil de manipular que el cout
		char mini;


		system("cls");
		printf("*BIENVENIDO AL PROGRAMA* \n");
		printf("¿Que opcion desea gestionar\n");
		printf("1 - clientes \n");
		printf("2 - ventas\n");
		printf("3 - compras\n");
		printf("4 - proveedores\n");
		printf("5 - productos\n");
		printf("6 - empleados\n");
		printf("7 - detalle compra\n");
		printf("8 - Detalle venta\n");
		printf("9 - marcas\n");
		printf("Seleccione una opcion: ");
		scanf_s("%d", &Menu);

		//scanf para guardar la info del menu
		//condicional para menu

		switch (Menu)
		{
		case 1: //operaciones matematicas
			system("cls");
			char res1; ress;
			do {
			if (Menu == 1) {
			
					cout << " MENU CLIENTES" << endl;
					printf("1 - INGRESAR NUEVO CLIENTE \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &ress);
				

					if (ress == 1) {
						system("cls");
						cout << "Ingrese idclientes: ";
						cin >> idclientes;
						cout << "ingrese el nombre: ";
						cin >> nombre;
						cout << "Ingrese el apellido: ";
						cin >> apellido;
						cout << "Ingrese el genero: ";
						cin >> genero;
						cout << "Ingrese el correo electronico: ";
						cin >> correoelectronico;
						cout << "Ingrese el nit: ";
						cin >> nit;
						cout << "Ingrese el telefono: ";
						cin >> telefono;
						cout << "Ingrese en la fecha que ingreso: ";
						cin >> fechaingreso;
						//terminamos el la condicion 1 del menu
						Clientes c = Clientes (nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.Crearclien();
						
						//
						//c.actualizar();*/
					}
					else if (ress == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.actualizar();
						cout << "----------------------------" << endl;
						
					}
					else if (ress == 3) {
						//MENU DE ACTUALIZAR
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;
						c.eliminar();
					}
					else if (ress == 4) {
						//MENU DE ELIMINAR
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;
						c.eliminar();
					}
				}
			} while (ress != 0);


			break;
		case 2: //operaciones matematicas

			char res2; ress;
			system("cls");
			do {
				if (Menu == 2) {

					cout << " MENU VENTAS" << endl;
					printf("1 - INGRESAR NUEVA VENTAS \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &ress);


					if (ress == 1) {
			
						system("cls");
						cout << "Ingrese IdVenta: ";
						cin >> idventa;
						cout << "Ingrese el numero de factura: ";
						cin >> nofactura;
						cout << "Ingrese serie: ";
						cin >> serie;
						cout << "Ingrese la fecha de la factura: ";
						cin >> fechafactura;
						cout << "Ingrese el id cliente: ";
						cin >> idcliente;
						cout << "Ingrese el id del empleado: ";
						cin >> idempleado;
						cout << "Ingrese en la que se realizo la venta: ";
						cin >> fecha_ingreso;

					
						//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.Crearclien();

						//c.eliminar();
						//c.actualizar();*/
					}
					else if (ress == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;

					}
					else if (ress == 3) {
						//MENU DE ACTUALIZAR
					}
					else if (ress == 4) {
						//MENU DE ELIMINAR
					}
				}
			} while (ress != 0);

				
			break;

		case 3: //operaciones matematicas
			system("cls");
			char res3,ress;
				do {
					if (Menu == 3) {

						cout << " MENU COMPRAS" << endl;
						printf("1 - INGRESAR NUEVA COMPRAS \n");
						printf("2 - VER CLIENTES\n");
						printf("3 - MODIFICAR\n");
						printf("4 - ELIMINAR\n");
						printf("0. SALIR\n");
						scanf_s("%d", &ress);


						if (ress == 1) {


							//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
							//c.Crearclien();

							//c.eliminar();
							//c.actualizar();*/
						}
						else if (ress == 2) {
							system("cls");
							Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
							c.leer();
							cout << "----------------------------" << endl;

						}
						else if (ress == 3) {
							//MENU DE ACTUALIZAR
						}
						else if (ress == 4) {
							//MENU DE ELIMINAR
						}
					}
				} while (ress != 0);

				
			break;

		case 4:
			system("cls");
			char res4; ress;
			do {
				if (Menu == 4) {

					cout << " MENU PROVEEDORES" << endl;
					printf("1 - INGRESAR NUEVA PROVEEDORES \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &ress);


					if (ress == 1) {
						system("cls");
						cout << "Ingrese el Id del proveedor: ";
						cin >> id_proveedor;
						cout << "Ingrese el numero nit: ";
						cin >> nit;
						cout << "Ingrese el nombre del proveedor: ";
						cin >> proveedor;
						cout << "Ingrese El numero de nit: ";
						cin >> nit;
						cout << "Ingrese la direccion del proveedor: ";
						cin >> direccion;
						cout << "Ingrese numero del telefono: ";
						cin >> telefono;

						//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.Crearclien();

						//c.eliminar();
						//c.actualizar();*/
					}
					else if (ress == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;

					}
					else if (ress == 3) {
						//MENU DE ACTUALIZAR
					}
					else if (ress == 4) {
						//MENU DE ELIMINAR
					}
				}
			} while (ress != 0);

				
			
			break;
		case 5:
			system("cls");
			char res5;
			do {
				if (Menu == 5) {

					cout << " MENU PROVEEDORES" << endl;
					printf("1 - INGRESAR NUEVA PROVEEDORES \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &res5);

					if (res5 == 1) {
						cout << "Ingrese idproducto: ";
						cin >> id_producto;
						cout << "ingrese el producto: ";
						cin >> producto;
						cout << "Ingrese idmarca: ";
						cin >> idmarca;
						cout << "ingrese la descripcion: ";
						cin >> descripcion;
						cout << "Ingrese la imagen: ";
						cin >> imagen;
						cout << "Ingrese el precio_costo: ";
						cin >> precio_costo;
						cout << "Ingrese el precio_venta: ";
						cin >> precio_venta;
						cout << "Ingrese la existencia: ";
						cin >> existencia;
						cout << "Ingrese la fecha_ingreso: ";
						cin >> fecha_ingreso;

						//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.Crearclien();

						//c.eliminar();
						//c.actualizar();*/
					}
					else if (res5 == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;

					}
					else if (res5 == 3) {
						//MENU DE ACTUALIZAR
					}
					else if (res5 == 4) {
						//MENU DE ELIMINAR
					}
				}
			} while (res5 != 0);

						break;

		case 6: //operaciones matematicas
			system("cls");
			char res6;
			do {
				if (Menu == 6) {

					cout << " MENU PROVEEDORES" << endl;
					printf("1 - INGRESAR NUEVA PROVEEDORES \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &res6);

					if (res6 == 1) {

						cout << "Ingrese idempleados: ";
						cin >> idempleados;
						cout << "ingrese el nombre: ";
						cin >> nombre;
						cout << "Ingrese el apellido: ";
						cin >> apellido;
						cout << "ingrese la direccion: ";
						cin >> direccion;
						cout << "Ingrese el genero: ";
						cin >> genero;
						cout << "Ingrese idpuesto: ";
						cin >> idpuesto;
						cout << "Ingrese el dpi: ";
						cin >> dpi;
						cout << "Ingrese el nit: ";
						cin >> nit;
						cout << "Ingrese el telefono: ";
						cin >> telefono;

						//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.Crearclien();

						//c.eliminar();
						//c.actualizar();*/
					}
					else if (res6 == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;

					}
					else if (res6 == 3) {
						//MENU DE ACTUALIZAR
					}
					else if (res6 == 4) {
						//MENU DE ELIMINAR
					}
				}
			} while (res6 != 0);
			
			break;

		case 7: //operaciones matematicas
			system("cls");
			char res7;
			do {
				if (Menu == 7) {

					cout << " MENU PROVEEDORES" << endl;
					printf("1 - INGRESAR NUEVA PROVEEDORES \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &res7);

					if (res6 == 1) {

						cout << "ingrese compra_detalle: ";
						cin >> compra_detalle;
						cout << "ingrese idcompra: ";
						cin >> idcompra;
						cout << "Ingrese idproducto: ";
						cin >> id_producto;
						cout << "ingrese la cantidad: ";
						cin >> cantidad;
						cout << "Ingrese el precio_costo_unitario: ";
						cin >> precio_costo_unitario;
						cout << "¿Desea Ingresar otro valor al menu ?..(s/n):";
						cin >> res7;

						//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.Crearclien();

						//c.eliminar();
						//c.actualizar();*/
					}
					else if (res7 == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;

					}
					else if (res7 == 3) {
						//MENU DE ACTUALIZAR
					}
					else if (res7 == 4) {
						//MENU DE ELIMINAR
					}
				}
			} while (res7 != 0);

			break;

		case 8: //operaciones matematicas
			system("cls");
			char res8;
			do {
				if (Menu == 8) {

					cout << " MENU MARCAS" << endl;
					printf("1 - INGRESAR NUEVA MARCA \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &res8);

					if (res8 == 1) {

						cout << "ingrese idventa: ";
						cin >> idventa;
						cout << "Ingrese idproducto: ";
						cin >> idproducto;
						cout << "ingrese la cantidad: ";
						cin >> cantidad;
						cout << "Ingrese el precio_unitario: ";
						cin >> precio_unitario;
						//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.Crearclien();

						//c.eliminar();
						//c.actualizar();*/
					}
					else if (res8 == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;

					}
					else if (res8 == 3) {
						//MENU DE ACTUALIZAR
					}
					else if (res8 == 4) {
						//MENU DE ELIMINAR
					}
				}
			} while (res8 != 0);
				
			break;
		case 9: //operaciones matematicas
			system("cls");
			char res9;
			do {
				if (Menu == 9) {

					cout << " MENU PROVEEDORES" << endl;
					printf("1 - INGRESAR NUEVA PROVEEDORES \n");
					printf("2 - VER CLIENTES\n");
					printf("3 - MODIFICAR\n");
					printf("4 - ELIMINAR\n");
					printf("0. SALIR\n");
					scanf_s("%d", &res7);

					if (res6 == 1) {

						cout << "ingrese idmarca: ";
						cin >> idmarca;
						cout << "ingrese marca: ";
						cin >> marca;
						cout << "¿Desea Ingresar otro valor al menu ?..(s/n):";
						cin >> res9;

						//Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						//c.Crearclien();

						//c.eliminar();
						//c.actualizar();*/
					}
					else if (res9 == 2) {
						system("cls");
						Clientes c = Clientes(nombre, apellido, genero, correoelectronico, nit, telefono, fechaingreso);
						c.leer();
						cout << "----------------------------" << endl;

					}
					else if (res9 == 3) {
						//MENU DE ACTUALIZAR
					}
					else if (res9 == 4) {
						//MENU DE ELIMINAR
					}
				}
			} while (res9 != 0);
				
	
			break;

		}
			cout << "Desea Ingresar regresar al menu principal?.. (s/n):";
			cin >> ress;
			} while (ress == 's');
	
	

	system("pause");

	return main();

}



