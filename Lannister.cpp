// Lannister.cpp

#include "Lannister.h"

Lannister::Lannister() {
	std::cout << "Objeto Lannister creado!" << std::endl;
}

// Setters.

Lannister::setFamilyBoss(string familyBoss) {
	this -> familyBoss = familyBoss;
}

Lannister::setEmblem(string emblem) {
   this -> emblem = emblem;
}

Lannister::setMotto(string motto) {
   this -> motto = motto;
}

Lannister::setRoyalGuard(RoyalGuard* royalguard) {
   this -> royalguards.push_back(royalguard);
}

Lannister::setForce(int force) {
   this -> force = force;
}

Lannister::setQuantity(int quantity) {
   this -> quantity = quantity;
}

// Getters.

string Lannister::getFamilyBoss() {
	return familyBoss;
}

string Lannister::getEmblem() {
   return emblem;
}

string Lannister::getMotto() {
   return motto;
}

RoyalGuard* Lannister::getRoyalGuard(int position) {
   return royalguards[position];
}

int Lannister::getForce() {
   return force;
}

int Lannister::getQuantity() {
   return quantity;
}

// Destructor.

Lannister::~Lannister() {
	std::cout << "Limpiando objeto: " << this << std::endl;
}
