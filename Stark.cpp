// Stark.cpp

#include "Stark.h"

// Constructor.

Stark::Stark() {
	std::cout << "Objeto Stark creado!" << std::endl;
}

// Setters.

Stark::setFamilyBoss(string familyBoss) {
	this -> familyBoss = familyBoss;
}

Stark::setWolfs(int wolfs) {
   this -> wolfs = wolfs;
}

Stark::setEmblem(string emblem) {
   this -> emblem = emblem;
}

Stark::setMotto(string motto) {
   this -> motto = motto;
}

Stark::setNobleFamily(NobleFamily* nobleFamilie) {
   this -> nobleFamilies.push_back(nobleFamilie);
}

Stark::setBestWarrior(string bestWarrior) {
   this -> bestWarrior = bestWarrior;
}

Stark::setQuantity(int quantity) {
   this -> quantity = quantity;
}

// Getters.

string Stark::getFamilyBoss() {
   return familyBoss;
}

int Stark::getWolfs() {
   return wolfs;
}

string Stark::getEmblem() {
   return emblem;
}

string Stark::getMotto() {
   return motto;
}

NobleFamily* Stark::getNobleFamily(int position) {
   return nobleFamilies[position];
}

string Stark::getBestWarrior() {
   return bestWarrior;
}

int Stark::getQuantity() {
   return quantity;
}

// Destructor.

Stark::~Stark() {
	std::cout << "Limpiando objeto: " << this << std::endl;
}
