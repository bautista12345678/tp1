#include "cProgramador.h"
#include <sstream>
cProgramador::cProgramador(string _nombre,string _apellido,tm _fecha_de_nacimiento,string _telefono,bool _horario)
{
	nombre = _nombre;
	apellido = _apellido;
	fecha_de_nacimiento = _fecha_de_nacimiento;
	telefono = _telefono;
	horario = _horario;
	/*for(int i=0;i<getCantidadMaximaDeProyectos();i++)
	{
	this->*lista_proyectos[i]=nullptr;
	}
	*/
}

cProgramador::~cProgramador()
{
	/*for(int i=0;i<getCantidadMaximaDeProyectos();i++)
	{
	this->lista_proyectos[i]=nullptr;
	}
	delete lista_proyectos;
	*/
}
/*void cProgramador::AsignarProyecto(cproyecto * pro)
 {
   if(this->gethorario()==true)
   {
     for(int i=0;i<getCantidadActualDeProyectos();i++)
	 {
	 this->lista_proyectos[getCantidadActualDeProyectos()]=pro;
	 }
   }else 
    {
	 cout<<"El programador no se encuentra disponible"<<endl;
	 break 0;
	}

 }
void cProgramador::EntregarProyecto(centrega* entr)
 {
 
  entr->actualizar(j);
   j->revisarEntrega(pro);

 }

 cproyecto cProgramador::FinProyecto(cproyecto*pro)
 {
  pro=nullptr;
  return pro;
 }
 */

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

/*void cProgramador::setlista_proyectos(cproyectos** _lista_proyectos)
 {
 listaproyectos=_listaproyectos;
 }
cproyectos getlista_proyectos()
{
return lista_proyectos;
}
*/