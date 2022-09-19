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
public:
	centrega();
	~centrega();
	void actualizar(cJefe* jefe);
	void establecerFechaDeEntrega(int dia, int mes, int anio);




};
