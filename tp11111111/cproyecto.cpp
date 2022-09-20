#include "cproyecto.h"
#include <sstream>
cproyecto::cproyecto(string nombre, string id)
	:Nombre(nombre), IdDelProyecto(id)
{
	this->IdDelProyecto = " ";
	this->EstadoDeProyecto = EstadoDelProyecto::ESPERA;
	this->EtapaDeProyecto = EtapaDelProyecto::ETAPA_CERO;
	Jefe = nullptr;
	ListaDeEntregasRealizadas = new centrega * [CantidadDeEntregas];
	for (int i = 0; i < CantidadDeEntregas; i++)
	{
		ListaDeEntregasRealizadas[CantidadDeEntregas] = nullptr;
	}
}
cproyecto::~cproyecto()
{
}

string cproyecto::getNombre()
{
	return this->Nombre;
}

string cproyecto::getIdeDelProyecto()
{
	return this->IdDelProyecto;
}

int cproyecto::getEstadoDeProyecto()
{
	return this->EstadoDeProyecto;
}

int cproyecto::getEtapaDeProyecto()
{
	return this->EtapaDeProyecto;
}

cJefe* cproyecto::getJefe()
{
	return this->Jefe;
}

int cproyecto::getCantidadDeEntregas()
{
	return this->CantidadDeEntregas;
}

void cproyecto::setNombre(string nombre)
{
	this->Nombre = nombre;
}

void cproyecto::setIdeDelProyecto(string id)
{
	this->IdDelProyecto = id;
}

void cproyecto::setEstadoDeProyecto(EstadoDelProyecto estado)
{
	this->EstadoDeProyecto = estado;
}

void cproyecto::setEtapaDeProyecto(EtapaDelProyecto etapa)
{
	this->EtapaDeProyecto = etapa;
}

void cproyecto::setJefe(cJefe* jefe)
{
	this->Jefe = jefe;
}

void cproyecto::ImprimirListaDeEntregasRealizadas()
{
	if (ListaDeEntregasRealizadas[CantidadDeEntregas] == nullptr)
	{
		cout << "todabia no tiene ninguna entrega" << endl;
	}
	else
	{
		for (int i = 0; i < CantidadDeEntregas; i++)
		{
			cout << ListaDeEntregasRealizadas[i] << endl;
		}
	}
}

void cproyecto::imprimirEstadoDelProyecto()
{
	switch (EstadoDeProyecto)
	{
	case ESPERA:
		cout << "el proyecto se encuentra en estado de espera. " << endl;
		break;
	case DESARROLLO:
		cout << "el proyecto se encuentra en etado de desarrollo. " << endl;
		break;
	case FINALIZADO:
		cout << "el proyecto se encuentra finalizada. " << endl;
		break;
	default:
		break;
	}
}

void cproyecto::imprimirEtapaDelProyecto()
{
	switch (EtapaDeProyecto)
	{
	case ETAPA_CERO:
		cout << "el proyecto se encuentra en etapa cero. " << endl;
		break;
	case PRIMERA_ETAPA:
		cout << "el proyecto se encuentra en primera etapa. " << endl;
		break;
	case SEGUNDA_ETAPA:
		cout << "el proyecto se encuentra en segunda etapa. " << endl;
		break;
	default:
		break;
	}
}

void cproyecto::EstablecerFechaDeInicioDeProyecto(int dia, int mes, int anio)
{
	FechaDeInicioDelProyecto.tm_mday = dia;
	FechaDeInicioDelProyecto.tm_mon = mes;
	FechaDeInicioDelProyecto.tm_year = anio;
}

void cproyecto::EstablecerFechaDeFinDeProyecto(int dia, int mes, int anio)
{
	FechaPropuestaDeFinalDelProyecto.tm_mday = dia;
	FechaPropuestaDeFinalDelProyecto.tm_mon = mes;
	FechaPropuestaDeFinalDelProyecto.tm_year = anio;
}

void cproyecto::EstablecerNombreDelProyecto(string nombre)
{
	this->Nombre = nombre;
}

void cproyecto::ImprimirFechaDeInicioDeProyecto()
{
	cout << "fecha de inicio del proyecto: "
		<< FechaDeInicioDelProyecto.tm_mday << " - "
		<< FechaDeInicioDelProyecto.tm_mon << " - "
		<< FechaDeInicioDelProyecto.tm_year << endl;
}

void cproyecto::ImprimirerFechaDeFinDeProyecto()
{
	cout << "fecha final del proyecto: "
		<< FechaPropuestaDeFinalDelProyecto.tm_mday << " - "
		<< FechaPropuestaDeFinalDelProyecto.tm_mon << " - "
		<< FechaPropuestaDeFinalDelProyecto.tm_year << endl;
}

void cproyecto::ImprimirNombreDelProyecto()
{
	cout << "el nombre del proyecto es: " << Nombre << endl;
}


void cproyecto::ReasignarProyecto(cJefe*j)
{
	this->setJefe(j);
}

void cproyecto::RecibirEntrega(centrega* entrega)
{
	ListaDeEntregasRealizadas[CantidadDeEntregas] = entrega;
}

string cproyecto::to_string() {
	stringstream ss;
	ss << "nombre: " << this->Nombre << endl;
	//ss << "FechaDeInicioDelProyecto: " << this->FechaDeInicioDelProyecto << endl;
	//ss << "FechaPropuestaDeFinalDelProyecto:" << this->FechaPropuestaDeFinalDelProyecto << endl;
	ss << "IdDelProyecto:: " << this->IdDelProyecto << endl;
	ss << "EstadoDeProyecto:: " << this->EstadoDeProyecto << endl;
	ss << "EtapaDeProyecto: " << this->EtapaDeProyecto << endl;
	ss << "jefe: " << this->Jefe->getapellido() << endl;
	ss << "ListaDeEntregasRealizadas:: " << this->ListaDeEntregasRealizadas << endl;
	ss << "CantidadDeEntregas: " << this->CantidadDeEntregas << endl;
	return ss.str();
	return "error";
}
void cJefe::imprimir() {
	cout << to_string() << endl;
}
