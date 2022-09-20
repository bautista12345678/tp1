#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "cproyecto.h"
using namespace std;
class cProgramador
{
private:
	string nombre;
	string apellido;
	tm fecha_de_nacimiento;
	string telefono;
	cJefe* Jefe;
	bool horario;//true:fulltime , false:parttime
	cproyecto** lista_proyectos;
public:
	cProgramador(string _nombre, string _apellido, int dia, int mes , int anio, string _telefono, bool
		_horario, cJefe* _Jefe);
	~cProgramador();
	void AsignarProyecto(cproyecto* pro);
	void EntregarProyecto(centrega* entr, cproyecto* pro, cJefe* jefe, int dia, int mes, int anio, int c);
	cproyecto FinProyecto(cproyecto* pro);
	void imprimir();
	string to_string();
	void setnombre(string _nombre);
	string getnombre();
	void setJefe(cJefe* _Jefe);
	void setapellido(string _apellido);
	string getapellido();
	void setfecha_de_nacimiento(tm _fecha);
	tm getfecha_de_nacimiento();
	void settelefono(string _telefono);
	string gettelefono();
	void sethorario(bool _horario);
	bool gethorario();
	void setlista_proyectos(cproyecto** _lista_proyectos);

};

