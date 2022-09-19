#include "Centrega.h"

Centrega::Centrega()
{

	this->NumeroDeEtapa = EtapaDelProyecto::ETAPA_CERO;
	this->IDdelProyecto = " ";
	this->Aceptado = false;
	this->CantidadDeEntregas = 0;
}

Centrega::~Centrega()
{
}

void Centrega::actualizar(Cjefe* jefe)
{
}

void Centrega::establecerFechaDeEntrega(int dia, int mes, int anio)
{
	FechaDeEntrega.tm_mday = dia;
	FechaDeEntrega.tm_mon = mes;
	FechaDeEntrega.tm_year = anio;
}
