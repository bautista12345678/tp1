#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include <ctime>
#include<iostream>
#include"EnumEstadoDeProyecto.h"
#include"EnumEtapaDeProyecto.h"
#include"cJefe.h"
#include"centrega.h"
using namespace std;

class cproyecto
{
private:

	string Nombre;
	tm FechaDeInicioDelProyecto;
	tm FechaPropuestaDeFinalDelProyecto;
	string IdDelProyecto;// distingue los proyectos
	EstadoDelProyecto EstadoDeProyecto; // espera=0, desarrollo=1,finalizado=2
	EtapaDelProyecto EtapaDeProyecto; //
	cJefe *Jefe;
	centrega** ListaDeEntregasRealizadas;
	int CantidadDeEntregas;
public:
	cproyecto(string _nombre, string id);
	~cproyecto();
	string getNombre();
	string getIdeDelProyecto();
	int getEstadoDeProyecto();
	int getEtapaDeProyecto();
	cJefe* getJefe();
	int getCantidadDeEntregas();
	//------------------------------
	void setNombre(string nombre);
	void setIdeDelProyecto(string id);
	void setEstadoDeProyecto(EstadoDelProyecto estado);
	void setEtapaDeProyecto(EtapaDelProyecto etapa);
	void setJefe(cJefe* jefe);
	//------------------------------
	void ImprimirListaDeEntregasRealizadas();
	void imprimirEstadoDelProyecto();
	void imprimirEtapaDelProyecto();
	//-------------------------------
	void EstablecerFechaDeInicioDeProyecto(int dia, int mes, int anio);
	void EstablecerFechaDeFinDeProyecto(int dia, int mes, int anio);
	void EstablecerNombreDelProyecto(string nombre);
	//-------------------------------
	void ImprimirFechaDeInicioDeProyecto();
	void ImprimirerFechaDeFinDeProyecto();
	void ImprimirNombreDelProyecto();
	string to_string();
	//-------------------------------
	void ReasignarProyecto(cJefe* j);// (falta implementar)    // Reapunta el puntero Líder al nuevo jefe del proyecto que recibe por parámetro
	void RecibirEntrega(centrega* entrega);//agrega la entrega a la lista

};
