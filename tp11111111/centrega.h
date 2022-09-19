#pragma once
#include<string>
#include <ctime>
#include<iostream>
#include"EnumEstadoDeProyecto.h"
#include"EnumEtapaDeProyecto.h"
#include"Cjefe.h"
using namespace std;
class Centrega
{
private:
	EtapaDelProyecto NumeroDeEtapa;
	string IDdelProyecto;
	tm FechaDeEntrega;
	bool Aceptado;
	int CantidadDeEntregas;
public:
	Centrega();
	~Centrega();
	void actualizar(Cjefe* jefe);
	void establecerFechaDeEntrega(int dia, int mes, int anio);




};
