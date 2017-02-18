#include "Stark.h"
#include "Lannister.h"
#include "Targaryen.h"
#include "NobleFamily.h"
#include "Dothraki.h"
#include "RoyalGuard.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
	int option, newOption, keep;

	do {
		cout << "1) Agregar. \n2) Listar. \n3) Eliminar. \n4) Simulación. \n5) Salir. \nOpción: ";
		cin >> option;

		if (option == 1) {
			do {
				cout << "1) Stark. \n2) Lannister. \n3) Targaryen. \n4) Salir. \nOpción: ";
				cin >> newOption;

				if (newOption == 1) { // Agregando Stark.
					string familyBoss, emblem, motto, bestWarrior;
					int wolfs, quantity;

					cout << "Jefe de la familia: ";
					cin >> familyBoss;               
					cout << "Cantidad de lobos huargos: ";
               cin >> wolfs;
               cout << "Animal emblema: ";
               cin >> emblem;
               cout << "Lema: ";
               cin >> motto;
               cout << "Guerrero más valioso: ";
               cin >> bestWarrior;
               cout << "Cantidad de integrantes: ";
               cin >> quantity;

					Stark* stark = addStark(); // Creando Stark.

					stark -> setFamilyBoss(familyBoss);
               stark -> setWolfs(wolfs);
               stark -> setEmblem(emblem);
               stark -> setMotto(motto);
               stark -> setBestWarrior(bestWarrior);
               stark -> setQuantity(quantity);

					do {
						cout << "1) Agregar pequeña familia noble. \n2) Salir. \nOpción: ";
						cin >> keep;

						if (keep == 1) {
							string name, symbol;
							int people, attack, defense;

                     NobleFamily* nobleFamilie = new NobleFamily();

							cout << "Nombre: ";
							cin >> name;
                     cout << "Símbolo de escudo: ";
                     cin >> symbol;
                     cout << "Lema: ";
                     cin >> motto;
                     cout << "Cantidad de personas: ";
                     cin >> people;
                     cout << "Ataque: ";
                     cin >> attack;
                     cout << "Defensa: ";
                     cin >> defense;

							nobleFamilie -> setName(name);
                     nobleFamilie -> setSymbol(symbol);
                     nobleFamilie -> setMotto(motto);
                     nobleFamilie -> setPeople(people);
                     nobleFamilie -> setAttack(attack);
                     nobleFamilie -> setDefense(defense);

							stark -> setNobleFamily(nobleFamilie);
						}
					} while (keep != 2);
				} else if (newOption == 2) { // Agregando Lannister.
               string familyBoss, emblem, motto;
               int money, force, quantity;

               cout << "Jefe de la familia: ";
               cin >> familyBoss;
               cout << "Animal emblema: ";
               cin >> emblem;
               cout << "Lema: ";
               cin >> motto;
               cout << "Cantidad de dinero: ";
               cin >> money;
               cout << "Fuerza de la montaña: ";
               cin >> force;
					cout << "Cantidad de integrantes: ";
					cin >> quantity;

               Lannister* lannister = new Lannister();

               lannister -> setFamilyBoss(familyBoss);
               lannister -> setEmblem(emblem);
               lannister -> setMotto(motto);
               lannister -> setMoney(money);
               lannister -> setQuantity(quantity);

               do {
                  cout << "1) Agregar pequeña familia noble. \n2) Salir. \nOpción: ";
                  cin >> keep;

                  if (keep == 1) {
                     string name, symbol;
                     int people, attack, defense;

                     NobleFamily* nobleFamilie = new NobleFamily();

                     cout << "Nombre: ";
                     cin >> name;
                     cout << "Símbolo de escudo: ";
                     cin >> symbol;
                     cout << "Lema: ";
                     cin >> motto;
                     cout << "Ataque: ";
                     cin >> attack;
                     cout << "Defensa: ";
                     cin >> defense;

                     nobleFamilie -> setName(name);
                     nobleFamilie -> setSymbol(symbol);
                     nobleFamilie -> setMotto(motto);
                     nobleFamilie -> setPeople(people);
                     nobleFamilie -> setAttack(attack);
                     nobleFamilie -> setDefense(defense);

                     stark -> setNobleFamily(nobleFamilie);
                  }
               } while (keep != 2);
				} else if (newOption == 3) {
					
            } else if (newOption == 4) {
					
            } else if (newOption == 5) {
					
            } else if (newOption == 6) {
					
				}
			} while (newOption != 7);
		} else if (option == 2) {
			
		} else if (option == 3) {
			
		} else if (option == 4) {
			
		}
	} while (option != 5);

	return 0;
}
