#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "cProgramador.h"
#include "cproyecto.h"
#include "cJefe.h"
#include "centrega.h"
using namespace std;

class cJefe
{
private:
	string nombre;
	string apellido;
	string telefono;
	string DNI;
	bool disponible;
	cproyecto ** listaDeProyectos;
	int CantidadMaximaDeProyectos;
	int CantidadActualDeProyectos;
	cProgramador **listaDeProgramadores;
	int cant_programadores;
public:
	cJefe(string _nombre, string _apellido, string _DNI, string _telefono, bool
		_disponible,int _CantidadMaximaDeProyectos, int _CantidadActualDeProyectos);
	~cJefe();
	void setnombre(string _nombre);
	string getnombre();
	void setapellido(string _apellido);
	string getapellido();
	void settelefono(string _telefono);
	string gettelefono();
	void setDNI(string _DNI);
	string getDNI();
	void setdisponible(bool _disponible);
	bool getdisponible();
	void setCantidadMaximaDeProyectos(int _CantidadMaximaDeProyectos);
	int getCantidadMaximaDeProyectos();
	void setCantidadActualDeProyectos(int _CantidadActualDeProyectos);
	int getCantidadActualDeProyectos();
	void setlistaDeProgramadores(cProgramador *_listaDeProgramadores);
	void setcant_programadores(int _cant_programadores);
	int getcant_programadores();
	void imprimir();
	string to_string();
	void AsignarProyecto(cproyecto* pro);
	void ReasignarProgramador(cJefe*j, cProgramador* progra);
	void RevisarEntrega(cproyecto * pro, centrega* ent);
	cproyecto FinProyecto(centrega* ent, cproyecto* pro);
	void CambiarFechaFin(int dia, int mes, int anio, cproyecto* pro);
};

