#pragma once
#include<string>
#include <ctime>
#include<iostream>
#include"EnumEstadoDeProyecto.h"
#include"EnumEtapaDeProyecto.h"
#include"Cjefe.h"
using namespace std;
class centrega
{
private:
	EtapaDelProyecto NumeroDeEtapa;
	string IDdelProyecto;
	tm FechaDeEntrega;
	bool Aceptado;
	int CantidadDeEntregas;
	EstadoDelProyecto estado;
public:
	centrega();
	~centrega();
	void actualizar(cJefe* jefe, int dia, int mes, int anio, int c);
	void establecerFechaDeEntrega(int dia, int mes, int anio);
	void setNumeroDeEtapa(EtapaDelProyecto _NumeroDeEtapa);
	void setIDdelProyecto(string _IDdelProyecto);
	void setFechaDeEntrega(tm _FechaDeEntrega);
	void setAceptado(bool _Aceptado);
	void setCantidadDeEntregas(int _CantidadDeEntregas);
	EtapaDelProyecto getNumeroDeEtapa();
	string getIDdelProyecto();
	tm getFechaDeEntrega();
	bool getAceptado();
	int getCantidadDeEntregas();
	void imprimir();
	string to_string();
	void setestado(EstadoDelProyecto _estado);
	EstadoDelProyecto getestado();


};
