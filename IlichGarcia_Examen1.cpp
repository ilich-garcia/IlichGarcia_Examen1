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

					Stark* stark = new Stark(); // Creando Stark.

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
               int force, quantity;
					double money;

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
                  cout << "1) Agregar guardia real. \n2) Salir. \nOpción: ";
                  cin >> keep;

                  if (keep == 1) { // Agregando guardia real.
                     string name, soldier;
                     int age, attack, defense;

                     RoyalGuard* royalGuard = new RoyalGuard();

                     cout << "Nombre: ";
                     cin >> name;
                     cout << "Edad: ";
                     cin >> age;
                     cout << "Tipo de soldado: ";
                     cin >> soldier;
                     cout << "Ataque: ";
                     cin >> attack;
                     cout << "Defensa: ";
                     cin >> defense;

                     royalGuard -> setName(name);
                     royalGuard -> setAge(age);
                     royalGuard -> setSoldier(soldier);
                     royalGuard -> setAttack(attack);
                     royalGuard -> setDefense(defense);

                     lannister -> setRoyalGuard(royalGuard);
                  }
               } while (keep != 2);
				} else if (newOption == 3) { // Agregando Targaryen.
               string queen, emblem, motto;
               int dragons, boats;

               cout << "Reina: ";
               cin >> queen;
               cout << "Animal emblema: ";
               cin >> emblem;
               cout << "Lema: ";
               cin >> motto;
               cout << "Cantidad de dragones: ";
               cin >> dragons;
               cout << "Cantidad de barcos: ";
               cin >> boats;

               Targaryen* targaryen = new Targaryen();

               targaryen -> setQueen(queen);
               targaryen -> setEmblem(emblem);
               targaryen -> setMotto(motto);
               targaryen -> setDragons(dragons);
               targaryen -> setBoats(boats);

               do {
                  cout << "1) Dothraki. \n2) Salir. \nOpción: ";
                  cin >> keep;

                  if (keep == 1) { // Agregando Dothraki.
                     string name, chief, horse, color;
                     int attack, defense;

                     Dothraki* dothraki = new Dothraki();

                     cout << "Nombre: ";
                     cin >> name;
                     cout << "Jefe bárbaro: ";
                     cin >> chief;
                     cout << "Nombre del caballo: ";
                     cin >> horse;
							cout << "Color del caballo: ";
							cin >> color;
                     cout << "Ataque: ";
                     cin >> attack;
                     cout << "Defensa: ";
                     cin >> defense;

                     dothraki -> setName(name);
                     dothraki -> setChief(chief);
                     dothraki -> setHorse(horse);
                     dothraki -> setAttack(attack);
                     dothraki -> setDefense(defense);

                     targaryen -> setDefense(royalGuard);
            }
			} while (newOption != 4);
		} else if (option == 2) {
			
		} else if (option == 3) {
			
		} else if (option == 4) {
			
		}
	} while (option != 5);

	return 0;
}
