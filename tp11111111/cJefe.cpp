#include "cJefe.h"
#include <sstream>
cJefe::cJefe(string _nombre, string _apellido, string _DNI, string _telefono, bool _disponible, int _CantidadMaximaDeProyectos, int _CantidadActualDeProyectos)
{
	nombre = _nombre;
	apellido = _apellido;
	DNI = _DNI;
	telefono = _telefono;
	disponible = _disponible;
	/*for(int i=0;i<this->CantidadMaximaDeProyectos();i++)
	{
	this->lista_proyectos[i]=nullptr;
	}

	for(int i=0;i<3;i++)
	{
	this->listaDeProgramadores[i]=nullptr;
	}
	*/
}

cJefe::~cJefe()
{
	/*for(int i=0;i<this->CantidadMaximaDeProyectos;i++)
	{
	this->listaDeProyectos[i]=nullptr;
	}
	delete listaDeProyectos;

	for(int i=0;i<3;i++)
	{
	this->listaDeProgramadores[i]=nullptr;
	}
	delete listaDeProgramadores;
	*/
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

/*


void cJefe::setlistaDeProyectos(cproyectos **_listaDeProyectos)
{
    listaDeProyectos=_listaDeProyectos;
 }
cproyectos cJefe::getlistaDeProyectos()
{
	 return listaDeProyectos;
}

void cJefe::setlistaDeProgramadores(cProgramadores **_listaDeProgramadores)
{
listaDeProgramadores=_listaDeProgramadores;
}
cProgramadores cJefe::getlistaDeProgramadores()
{
 return listaDeProgramadores;
}

void AsignarProyecto(cproyecto* pro)
{
 if(this->disponible==true9)
 {
  for(int i=0;i<this->CantidadActualDeProyectos();i++)
	 {
	 this->listaDeProyectos[getCantidadActualDeProyectos()]=pro;
	 }
 }else
  {
   cout << this->nombre<< " "<< " "<<this->apellido<<" no esta disponible"<<endl;
  }
}
void ReasignarProgramador(Jefe*j,cProgrmador * progra)
{
 for(int i=0;i<3;i++)
  {
   if(progra->apellido==listaDeProgramadores[i]->apellido)
   {
    progra->setjefe(j);
	this->listaDeProgramadores[i]=nullptr;
   }

  }
}
void RevisarEntrega(cproyecto * pro,centrega * ent)
{
 for(int i=0;i<this->CantidadActualDeProyectos;i++)
  {
   if(pro->nombre==this->listaDeProyectos[i]->nombre)
   {
     pro->RecibirEntrega(ent)
   }

  }
}
cproyecto FinProyecto();
void CambiarFechaFin(tm fe,cproyecto * pro);


*/