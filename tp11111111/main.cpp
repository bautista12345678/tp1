#include <iostream>
#include <string>
#include <ctime>
#include "cproyecto.h"
#include "centrega.h"
#include "cJefe.h"
#include"cProgramador.h"
using namespace std;
int main()
{

	cproyecto* proyecto_1 = new cproyecto("proyecto_1", "01");
	cproyecto* proyecto_2 = new cproyecto("proyecto_2", "02");
	cproyecto* proyecto_3 = new cproyecto("proyecto_3", "03");
	cproyecto* proyecto_4 = new cproyecto("proyecto_4", "04");
	cproyecto* proyecto_5 = new cproyecto("proyecto_5", "05");
	cproyecto* proyecto_6 = new cproyecto("proyecto_6", "06");
	cproyecto* proyecto_7 = new cproyecto("proyecto_7", "07");
	cproyecto* proyecto_8 = new cproyecto("proyecto_8", "08");


	cJefe* jefe_1 = new cJefe("ale", "garcia", "44599324", "387564839", true, 6, 2);
	cJefe* jefe_2 = new cJefe("alex", "me", "44554324", "387564930", true, 6, 5);
	cJefe* jefe_3 = new cJefe("alejandro", "lo", "44599328", "387564439", true, 6, 1);

	cProgramador* programador_1 = new cProgramador("Raul", "lopeZ", 12, 13, 14, "3870971862", true, jefe_1);
	cProgramador* programador_2 = new cProgramador("bel", "gy", 5, 5, 34, "3875971822", true, jefe_2);
	cProgramador* programador_3 = new cProgramador("lul", "hu", 22, 1, 54, "3875471862", true, jefe_3);
	cProgramador* programador_4 = new cProgramador("yy", "rjtj", 12, 1, 14, "3870971862", true, jefe_1);
	cProgramador* programador_5 = new cProgramador("jj", "rrt", 5, 9, 34, "3875971122", true, jefe_2);
	cProgramador* programador_6 = new cProgramador("lul", "tjrtj", 22, 1, 51, "3875571862", true, jefe_3);
	cProgramador* programador_7 = new cProgramador("gg", "trjtjrs", 12, 13, 14, "3800971862", true, jefe_1);
	cProgramador* programador_8 = new cProgramador("jjuju", "yty", 5, 7, 34, "3875971822", true, jefe_2);


	centrega* entrega_1 = new centrega();
	centrega* entrega_2 = new centrega();
	centrega* entrega_3 = new centrega();
	centrega* entrega_4 = new centrega();
	centrega* entrega_5 = new centrega();
	centrega* entrega_6 = new centrega();
	centrega* entrega_7 = new centrega();
	centrega* entrega_8 = new centrega();
	centrega* entrega_9 = new centrega();
	centrega* entrega_10 = new centrega();
	centrega* entrega_11 = new centrega();
	centrega* entrega_12 = new centrega();
	centrega* entrega_13 = new centrega();
	centrega* entrega_14 = new centrega();
	centrega* entrega_15 = new centrega();
	centrega* entrega_16 = new centrega();


	proyecto_1->RecibirEntrega(entrega_1);
	proyecto_1->RecibirEntrega(entrega_2);

	proyecto_2->RecibirEntrega(entrega_3);
	proyecto_2->RecibirEntrega(entrega_4);

	proyecto_3->RecibirEntrega(entrega_5);
	proyecto_3->RecibirEntrega(entrega_6);

	proyecto_4->RecibirEntrega(entrega_7);
	proyecto_4->RecibirEntrega(entrega_8);

	proyecto_5->RecibirEntrega(entrega_9);
	proyecto_5->RecibirEntrega(entrega_10);

	proyecto_6->RecibirEntrega(entrega_11);
	proyecto_6->RecibirEntrega(entrega_12);

	proyecto_7->RecibirEntrega(entrega_13);
	proyecto_7->RecibirEntrega(entrega_14);

	proyecto_8->RecibirEntrega(entrega_15);
	proyecto_8->RecibirEntrega(entrega_16);


	jefe_1->setlistaDeProgramadores(programador_1);
	jefe_1->setlistaDeProgramadores(programador_4);
	jefe_1->setlistaDeProgramadores(programador_7);
	jefe_1->AsignarProyecto(proyecto_1);
	jefe_1->AsignarProyecto(proyecto_2);


	jefe_2->setlistaDeProgramadores(programador_2);
	jefe_2->setlistaDeProgramadores(programador_5);
	jefe_2->setlistaDeProgramadores(programador_8);
	jefe_2->AsignarProyecto(proyecto_3);
	jefe_2->AsignarProyecto(proyecto_4);
	jefe_2->AsignarProyecto(proyecto_5);
	jefe_2->AsignarProyecto(proyecto_6);
	jefe_2->AsignarProyecto(proyecto_7);

	jefe_3->setlistaDeProgramadores(programador_3);
	jefe_3->setlistaDeProgramadores(programador_6);

	jefe_3->AsignarProyecto(proyecto_8);

	proyecto_3->ReasignarProyecto(jefe_3);
	proyecto_4->ReasignarProyecto(jefe_3);
	jefe_3->imprimir();
	jefe_2->imprimir();
	jefe_3->imprimir();

	entrega_1->actualizar(jefe_1, 3, 3, 3, 3);
	entrega_1->imprimir();

	jefe_1->ReasignarProgramador(jefe_3, programador_1);
	jefe_2->ReasignarProgramador(jefe_1, programador_5);

	jefe_1->FinProyecto(entrega_1, proyecto_1);

	jefe_1->CambiarFechaFin(3, 12, 44, proyecto_2);

	jefe_1->imprimir();

	programador_1->AsignarProyecto(proyecto_3);
	programador_1->EntregarProyecto(entrega_1, proyecto_1, jefe_3, 12, 14, 02, 4);
	programador_1->FinProyecto(proyecto_3);
	programador_1->imprimir();


	delete jefe_1;
	delete jefe_2;
	delete jefe_3;

	delete programador_1;
	delete programador_2;
	delete programador_3;
	delete programador_4;
	delete programador_5;
	delete programador_6;
	delete programador_7;
	delete programador_8;
	

	delete entrega_1;
	delete entrega_2;
	delete entrega_3;
	delete proyecto_4;
	delete proyecto_5;
	delete proyecto_6;
	delete proyecto_7;
	delete proyecto_8;

	delete entrega_1;
	delete entrega_2;
	delete entrega_3;
	delete entrega_4;
	delete entrega_5;
	delete entrega_6;
	delete entrega_7;
	delete entrega_8;
	delete entrega_9;
	delete entrega_10;
	delete entrega_11;
	delete entrega_12;
	delete entrega_13;
	delete entrega_14;
	delete entrega_15;
	delete entrega_16;


	return 0;
	
}

