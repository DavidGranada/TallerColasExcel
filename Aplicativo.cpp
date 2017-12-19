/*
=======================================================
UNIVERSIDAD DE LAS FUERZAS ARMADAS - "ESPE"
=======================================================
Departamento Ciencias De La Computación
=======================================================
Tema:			COLAS - CON CLASE
Carrera:		Ingeniería en Sistemas
Docente:		Ing. Fernando Solis
Integrantes:	Granada David
Conejo Ivan
Francisco Sampedro
=======================================================
Fecha Creación:		12/12/2017
Fecha Modificación:	12/12/2017
=======================================================
EXCEL
=======================================================
*/
#include "stdafx.h"
#include"Proceso.h"
#include"Cola.h"
#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int main()
{
	printf("CLIENTE\tT LLEGADA\tT Espera\tT Descanso\tT Servicion\tT Salida\tT Llegada");
	int num = 0,tser=0;
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		num = 1 + rand() % (10 - 1);
		tser = 1 + rand() % (16 - 1);
		push(num,tser);
	}
	printf("\n");
	imprimir();
	system("pause");
    return 0;
}

