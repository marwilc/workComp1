/*
 * equisn.cpp
 *
 *  Created on: Aug 18, 2016
 *      Author: Jhonny Sanchez
 *      		Marwil Campos 21.484.386
 *      		Jhoan Moreno
 */
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

double calculoDeEquisSubN(int n, double a){
	if (n == 0)
		return(1);
	else if(n == 1)
			return((double)1/3);
		else
			return((double)(a * (1/(pow(3,n-1))) + (((1 - (3 * a)) / 9) * calculoDeEquisSubN(n-2,a))));
}
int main(int argc, char **argv) {

	int n;
	double a, Xn, exacto, Ea, Er;

	cout << endl <<  "ingrese el n a Calcular: ";
	cin >> n;
	cout << endl << "ingrese el A: ";
	cin >> a;
	cout << endl;

	cout << setiosflags(ios::left/*|ios::scientific*/)
		 << setprecision(10)
		 << setw(4) << "A"
		 << setw(4) << "N"
		 << setw(20) << "Valor Aproximado"
		 << setw(20) << "Valor Exacto"
		 << setw(20) << "Error absoluto"
		 << setw(20) << "Error relativo"
		 << endl;

	exacto = (double)1/(pow(3,n));	// calculo del exacto Xn
	Xn = calculoDeEquisSubN(n,a);	// calculo de la aproximacion al Xn
	Ea = fabs(exacto - Xn);			// calculo del error absoluto
	Er = fabs( Ea / exacto) * 0.01;		// calculo del error relativo

	cout << setiosflags(ios::left/*|ios::scientific*/)
		 << setprecision(10)
		 << setw(4) << a
		 << setw(4) << n
		 << setw(20) << Xn
		 << setw(20) << exacto
		 << setw(20) << Ea
		 << setw(0) << Er << "%"
		 << endl;
}




