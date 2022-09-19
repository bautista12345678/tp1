#include "centrega.h"

centrega::centrega()
{

	this->NumeroDeEtapa = EtapaDelProyecto::ETAPA_CERO;
	this->IDdelProyecto = " ";
	this->Aceptado = false;
	this->CantidadDeEntregas = 0;
}

centrega::~centrega()
{
}

void centrega::actualizar(cJefe* jefe)
{
}

void centrega::establecerFechaDeEntrega(int dia, int mes, int anio)
{
	FechaDeEntrega.tm_mday = dia;
	FechaDeEntrega.tm_mon = mes;
	FechaDeEntrega.tm_year = anio;
}
