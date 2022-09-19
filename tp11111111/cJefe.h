#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class cJefe
{
private:
	string nombre;
	string apellido;
	string telefono;
	string DNI;
	bool disponible;
	//cproyectos** listaDeProyectos;
	int CantidadMaximaDeProyectos;
	int CantidadActualDeProyectos;
	//cProgramadores **listaDeProgramadores;
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
	//void setlistaDeProyectos(cproyectos **_listaDeProyectos);
	//cproyectos getlistaDeProyectos();
	void setCantidadMaximaDeProyectos(int _CantidadMaximaDeProyectos);
	int getCantidadMaximaDeProyectos();
	void setCantidadActualDeProyectos(int _CantidadActualDeProyectos);
	int getCantidadActualDeProyectos();
	//void setlistaDeProgramadores(cProgramadores **_listaDeProgramadores);
	//cProgramadores getlistaDeProgramadores();
	void imprimir();
	string to_string();
	//void AsignarProyecto(cproyecto* pro);
	//void ReasignarProgramador(Jefe*j);
	//void RevisarEntrega(cproyecto * pro);
	//cproyecto FinProyecto();
	//void CambiarFechaFin(tm fe,cproyecto * pro);
};

