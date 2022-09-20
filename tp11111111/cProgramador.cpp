#include "cProgramador.h"
#include <sstream>
cProgramador::cProgramador(string _nombre,string _apellido, int _dia, int _mes, int _anio,string _telefono,bool _horario,cJefe *_Jefe)
{
	nombre = _nombre;
	apellido = _apellido;
	fecha_de_nacimiento.tm_mday = _dia;
	fecha_de_nacimiento.tm_mon = _mes;
	fecha_de_nacimiento.tm_year = _anio;
	telefono = _telefono;
	horario = _horario;
	Jefe = _Jefe;
	for(int i=0;i<Jefe->getCantidadMaximaDeProyectos();i++)
	{
	this->lista_proyectos[i]=nullptr;
	}
	

}

cProgramador::~cProgramador()
{
	for(int i=0;i<Jefe->getCantidadMaximaDeProyectos();i++)
	{
	this->lista_proyectos[i]=nullptr;
	}
	delete lista_proyectos;
	
}
void cProgramador::AsignarProyecto(cproyecto * pro)
 {
   if(this->gethorario()==true)
   {
     for(int i=0;i<Jefe->getCantidadActualDeProyectos();i++)
	 {
	 this->lista_proyectos[Jefe->getCantidadActualDeProyectos()]=pro;
	 }
   }else 
    {
	 cout<<"El programador no se encuentra disponible"<<endl;
	
	}

 }
void cProgramador::EntregarProyecto(centrega* entr,cproyecto * pro, cJefe* jefe, int dia, int mes, int anio, int c)
 {
   this->Jefe->RevisarEntrega(pro,entr);
   entr->actualizar(jefe,dia, mes,anio,  c);

 }

 cproyecto cProgramador::FinProyecto(cproyecto*pro)
 {
  pro=nullptr;
  return *pro;
 }
 

string cProgramador::to_string() {
	stringstream ss;
	 ss << "nombre: " << this->nombre << endl;
	 ss << "apellido: " << this->apellido << endl; 
	 //ss << "fecha de nacimiento:" << this->fecha_de_nacimiento<< endl; 
	 ss << "telefono:: " << this->telefono << endl;
	 ss << "horario: " << this->horario << endl;
	 return ss.str();
	return "error";
}

void cProgramador::setnombre(string _nombre)
{
	nombre = _nombre;
}

string cProgramador::getnombre()
{
	return nombre;
}

void cProgramador::setJefe(cJefe *_Jefe)
{
	Jefe = _Jefe;
}

void cProgramador::setapellido(string _apellido)
{
	apellido = apellido;
}


string cProgramador::getapellido()
{
	return apellido;
}

void cProgramador::setfecha_de_nacimiento(tm _fecha)
{
	fecha_de_nacimiento = _fecha;
}


tm cProgramador::getfecha_de_nacimiento()
{
	return fecha_de_nacimiento;
}

void cProgramador::settelefono(string _telefono)
{
	telefono = _telefono;
}

string cProgramador::gettelefono()
{
	return telefono;
}

void cProgramador::sethorario(bool _horario)
{
	horario = _horario;
}

bool cProgramador::gethorario()
{
	return horario;
}

void cProgramador::imprimir() {
	cout << to_string() << endl;
}

void cProgramador::setlista_proyectos(cproyecto** _lista_proyectos)
 {
 lista_proyectos=_lista_proyectos;
 }



