#include "Stark.h"
#include "Lannister.h"
#include "Targaryen.h"
#include "NobleFamily.h"
#include "Dothraki.h"
#include "RoyalGuard.h"

#include <iostream>

using namespace std;

int main() {
	int option;

	do {
		cout << "1) Agregar. \n2) Listar. \n3) Modificar. \n4) Eliminar. \n5) Simulación. \n6) Salir.";
		cin >> option;
	} while (option != 6);

	return 0;
}
