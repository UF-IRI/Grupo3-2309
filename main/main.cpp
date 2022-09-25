#include <cstdlib>
#include <iostream>
using namespace std;

#include "example.h"
#include "example.cpp" 

int paroimpar(int num1, int num2);
int temperaturaspacientes(float temperaturas1, float temperaturas2);

int main()
{
	int opcion = 0;
	cout << "Si quiere ingresar temperaturas ingrese 1, si quieres hacer una suma y ver si el resultado es par o impar, ingrese 2\n";
	cin >> opcion;

	float temperaturas[2]={0, 0};
	if (opcion == 1)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << "\nIngrese temperatura del paciente" << i + 1<<"\n";
			cin >> temperaturas[i];
		}
		int resultado = temperaturaspacientes(temperaturas[0],temperaturas[1]);
		if (resultado == -1)
		{
			cout << "Alguno de los valores ingresados no es probable";
		}
		else if (resultado == 0)
		{
			cout << "Ambos tienen fiebre";
		}
		else if (resultado == 1)
		{
			cout << "Ambas temperaturas son normales";
		}
		else if (resultado == 2)
		{
			cout << "Uno tiene fiebre y el otro tiene temperatura normal";
		}
	}
	else if (opcion == 2)
	{
		int num1 = 0;
		int num2 = 0;
		cout << "Ingrese numero 1: ";
		cin >> num1;
		cout << "Ingrese numero 2: ";
		cin >> num2;
		int numero = 0;
		numero = paroimpar(num1, num2);
		if (numero == 1)
			cout << "La suma de los numeros es par";
		else
			cout << "La suma de los numeros es un numero impar";
	}
}