#include "centrega.h"
#include <sstream>
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

void centrega::setNumeroDeEtapa(EtapaDelProyecto _NumeroDeEtapa)
{
	NumeroDeEtapa = _NumeroDeEtapa;
}



void centrega::setIDdelProyecto(string _IDdelProyecto)
{
	IDdelProyecto = _IDdelProyecto;
}

void centrega::setFechaDeEntrega(tm _FechaDeEntrega)
{
	FechaDeEntrega = _FechaDeEntrega;
}

void centrega::setAceptado(bool _Aceptado)
{
	Aceptado = _Aceptado;
}

void centrega::setCantidadDeEntregas(int _CantidadDeEntregas)
{
	CantidadDeEntregas = _CantidadDeEntregas;
}

EtapaDelProyecto centrega::getNumeroDeEtapa()
{
	return NumeroDeEtapa;
}

string centrega::getIDdelProyecto()
{
	return IDdelProyecto;
}

tm centrega::getFechaDeEntrega()
{
	return FechaDeEntrega;
}

bool centrega::getAceptado()
{
	return Aceptado;
}

int centrega::getCantidadDeEntregas()
{
	return CantidadDeEntregas;
}

void centrega::imprimir()
{
}

string centrega::to_string() {
	stringstream ss;
	ss << "NumeroDeEtapa: " << this->NumeroDeEtapa << endl;
	ss << "IDdelProyecto: " << this->IDdelProyecto << endl;
	//ss << "FechaDeEntrega:" << this->FechaDeEntrega << endl;
	ss << "Aceptado:: " << this->Aceptado << endl;
	ss << "CantidadDeEntregas:: " << this->CantidadDeEntregas << endl;
	return ss.str();
	return "error";
}
void centrega::setestado(EstadoDelProyecto _estado)
{
	estado = _estado;
}
EstadoDelProyecto centrega::getestado()
{
	return estado;
}
void cJefe::imprimir() {
	cout << to_string() << endl;
}