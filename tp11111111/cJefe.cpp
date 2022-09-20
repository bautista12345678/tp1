#include "cJefe.h"
#include <sstream>
cJefe::cJefe(string _nombre, string _apellido, string _DNI, string _telefono, bool _disponible, int _CantidadMaximaDeProyectos, int _CantidadActualDeProyectos)
{
	nombre = _nombre;
	apellido = _apellido;
	DNI = _DNI;
	telefono = _telefono;
	disponible = _disponible;
	cant_programadores = 0;
	for(int i=0;i<this->CantidadMaximaDeProyectos;i++)
	{
	this->listaDeProyectos[i]=nullptr;
	}

	for(int i=0;i<3;i++)
	{
	this->listaDeProgramadores[i]=nullptr;
	}
	
}

cJefe::~cJefe()
{
   for(int i=0;i<this->CantidadMaximaDeProyectos;i++)
	{
	this->listaDeProyectos[i]=nullptr;
	}
	delete listaDeProyectos;

	for(int i=0;i<3;i++)
	{
	this->listaDeProgramadores[i]=nullptr;
	}
	delete listaDeProgramadores;
	
}

void cJefe::setnombre(string _nombre)
{
	nombre = _nombre;
}

string cJefe::getnombre()
{
	return nombre;
}

void cJefe::setapellido(string _apellido)
{
	apellido = apellido;
}


string cJefe::getapellido()
{
	return apellido;
}

void cJefe::setDNI(string _DNI)
{
	DNI = _DNI;
}


string cJefe::getDNI()
{
	return DNI;
}

void cJefe::settelefono(string _telefono)
{
	telefono = _telefono;
}

string cJefe::gettelefono()
{
	return telefono;
}

void cJefe::setdisponible(bool _disponible)
{
	disponible = _disponible;
}

bool cJefe::getdisponible()
{
	return disponible;
}
void cJefe::setcant_programadores(int _cant_programadores)
{
	cant_programadores = _cant_programadores;
}

int cJefe::getcant_programadores()
{
	return cant_programadores;
}
bool cJefe::getdisponible()
{
	return disponible;
}

void cJefe::setCantidadMaximaDeProyectos(int _CantidadMaximaDeProyectos)
{
	CantidadMaximaDeProyectos = _CantidadMaximaDeProyectos;
}

int cJefe::getCantidadMaximaDeProyectos()
{
	return CantidadMaximaDeProyectos;
}

void cJefe::setCantidadActualDeProyectos(int _CantidadActualDeProyectos)
{
	CantidadActualDeProyectos = _CantidadActualDeProyectos;
}

int cJefe::getCantidadActualDeProyectos()
{
	return CantidadActualDeProyectos;
}
string cJefe::to_string() {
	stringstream ss;
	ss << "nombre: " << this->nombre << endl;
	ss << "apellido: " << this->apellido << endl;
	ss << "DNI:" << this->DNI<< endl; 
	ss << "telefono:: " << this->telefono << endl;
	ss << "disponibilidad:: " << this->disponible << endl;
	ss << "CantidadMaximaDeProyectos: " << this->CantidadMaximaDeProyectos << endl;
	ss << "CantidadActualDeProyectos: " << this->CantidadActualDeProyectos << endl;
	return ss.str();
	return "error";
}
void cJefe::imprimir() {
	cout << to_string() << endl;
}







void cJefe::setlistaDeProgramadores(cProgramador *_listaDeProgramadores)
{
	for (int i = 0; i < 3; i++)
	{
		listaDeProgramadores[this->cant_programadores] = _listaDeProgramadores;
	}
}


void cJefe::AsignarProyecto(cproyecto* pro)
{
 if(this->disponible==true)
 {
  for(int i=0;i<CantidadActualDeProyectos;i++)
	 {
	 this->listaDeProyectos[this->CantidadActualDeProyectos]=pro;
	 }
 }else
  {
   cout << this->nombre<< " "<< " "<<this->apellido<<" no esta disponible"<<endl;
  }
}
void cJefe::ReasignarProgramador(cJefe* j, cProgramador* progra)
{
 for(int i=0;i<3;i++)
  {
   if(progra->getapellido()==listaDeProgramadores[i]->getapellido())
   {
    progra->setJefe(j);
	this->listaDeProgramadores[i]=nullptr;
   }

  }
}
void cJefe::RevisarEntrega(cproyecto * pro,centrega * ent)
{
 for(int i=0;i<this->CantidadActualDeProyectos;i++)
  {
   if(pro->getNombre()==this->listaDeProyectos[i]->getNombre())
   {
	   pro->RecibirEntrega(ent);
	   pro->setEstadoDeProyecto(ent->getestado());
	   pro->setEtapaDeProyecto(ent->getNumeroDeEtapa());
	   if (ent->getCantidadDeEntregas() == 2)
	   {
		   pro->setEtapaDeProyecto(PRIMERA_ETAPA);
	   }
   }

  }
}
cproyecto cJefe::FinProyecto(centrega * ent,cproyecto * pro)
{
	if (ent->getNumeroDeEtapa() == 4)
	{
		pro=nullptr;
	}
	return *pro;
}
void cJefe::CambiarFechaFin(int dia,int mes, int anio,cproyecto * pro)
{
	pro->EstablecerFechaDeFinDeProyecto(dia,mes,anio);
}


