/*
 * 1epsilon.cpp
 *
 *  Created on: Aug 18, 2016
 *      Author: Jhonny Sanchez
 *      		Marwil Campos
 *      		Jhoan Moreno
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {

	float epsilon = 1.0, suma = 1;
	double epsilon2 = 1.0, suma2 =1;
	int opcion = 0;

	while(opcion != 1 && opcion != 2){
		cout << "1 mostrar epsilon en simple precision " << endl
			 << "2 mostrar epsilon en doble precision " << endl
			 << "opcion >> ";
		cin >> opcion;
		system("clear");
	}

	switch (opcion) {
		case 1:
			for (int k = 1; k < 100; ++k) {
				suma = suma * 0.5;
				epsilon = 1.0 + suma;
				if (epsilon <= 1.0) {
					suma = suma * 2;
					cout << setprecision(32)
						 << "Epsilon: "
						 << suma << " "
						 << endl;
					break;

				}
			}
			break;
		case 2:
			for (int k = 1; k < 100; ++k) {
				suma2 = suma2 * 0.5;
				epsilon2 = 1.0 + suma2;
				if (epsilon2 <= 1.0) {
					suma2 = suma2 * 2;
					cout << setprecision(64)
						 << "Epsilon: "
						 << suma2 << " "
						 << endl;
					break;
				}
			}
			break;
	}
	return 0;
}


