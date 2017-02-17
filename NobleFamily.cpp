// NobleFamily.cpp

#include "NobleFamily.h"

// Constructor.

NobleFamily::NobleFamily() {
   std::cout << "Objeto NobleFamily creado!" << std::endl;
}

// Setters.

void NobleFamily::setName(string name) {
	this -> name = name;
}

void NobleFamily::setSymbol(string symbol) {
   this -> symbol = symbol;
}

void NobleFamily::setMotto(string motto) {
   this -> motto = motto;
}

void NobleFamily::setPeople(int people) {
   this -> people = people;
}

void NobleFamily::setAttack(int attack) {
   this -> attack = attack;
}

void NobleFamily::setDefense(int defense) {
   this -> defense = defense;
}

// Getters.

string NobleFamily::getName() {
   return name;
}

string NobleFamily::getSymbol() {
   return symbol;
}

string NobleFamily::getMotto() {
   return motto;
}

int NobleFamily::getPeople() {
   return people;
}

int NobleFamily::getAttack() {
   return attack;
}

int NobleFamily::getDefense() {
   return defense;
}

// Destructor.

NobleFamily::~NobleFamily() {
   std::cout << "Limpiando objeto: " << this << std::endl;
}
