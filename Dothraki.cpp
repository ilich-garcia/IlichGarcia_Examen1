// Dothraki.cpp

#include "Dothraki.h"

// Constructor.

Dothraki::Dothraki() {

}

// Setters.

void Dothraki::setName(string name) {
	this -> name = name;
}

void Dothraki::setChief(string chief) {
   this -> chief = chief;
}

void Dothraki::setHorse(string horse) {
   this -> horse = horse;
}

void Dothraki::setColor(string color) {
   this -> color = color;
}

void Dothraki::setAttack(int attack) {
   this -> attack = attack;
}

void Dothraki::setDefense(int defense) {
   this -> defense = defense;
}

// Getters.

string Dothraki::getName() {
   return name;
}

string Dothraki::getChief() {
   return chief;
}

string Dothraki::getHorse() {
   return horse;
}

string Dothraki::getColor() {
   return color;
}

int Dothraki::getAttack() {
   return attack;
}

int Dothraki::getDefense() {
   return defense;
}

// Destructor.

Dothraki::~Dothraki() {
   std::cout << "Limpiando objeto: " << this << std::endl;
}
