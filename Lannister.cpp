// Lannister.cpp

#include "Lannister.h"
#include "RoyalGuard.h"

Lannister::Lannister() {
	std::cout << "Objeto Lannister creado!" << std::endl;
}

// Setters.

void Lannister::setFamilyBoss(string familyBoss) {
	this -> familyBoss = familyBoss;
}

void Lannister::setEmblem(string emblem) {
   this -> emblem = emblem;
}

void Lannister::setMotto(string motto) {
   this -> motto = motto;
}

void Lannister::setRoyalGuard(RoyalGuard* royalguard) {
   royalGuards.push_back(royalguard);
}

void Lannister::setMoney(double money) {
   this -> money = money;
}

void Lannister::setForce(int force) {
   this -> force = force;
}

void Lannister::setQuantity(int quantity) {
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
   return royalGuards[position];
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
