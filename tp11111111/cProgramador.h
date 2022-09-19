#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class cProgramador
{
private:
	string nombre;
	string apellido;
	tm fecha_de_nacimiento;
	string telefono;
	bool horario;//true:fulltime , false:parttime
	//cproyecto **lista_proyectos;
public:
	cProgramador(string _nombre, string _apellido, tm _fecha_de_nacimiento, string _telefono,bool 
	_horario);
	~cProgramador();
	//void AsignarProyecto(cproyecto * pro);
	//void EntregarProyecto(centrega* entr);
	//cproyecto FinProyecto(cproyecto*pro);
	void imprimir();
	string to_string();
	void setnombre(string _nombre);
	string getnombre();
	void setapellido(string _apellido);
	string getapellido();
	void setfecha_de_nacimiento(tm _fecha);
	tm getfecha_de_nacimiento();
	void settelefono(string _telefono);
	string gettelefono();
	void sethorario(bool _horario);
	bool gethorario();
	//void setlista_proyectos(cproyectos **_lista_proyectos);
	//cproyectos getlista_proyectos();

};

