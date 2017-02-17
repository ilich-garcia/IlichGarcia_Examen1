// RoyalGuard.cpp

#include "RoyalGuard.h"

// Constructor.

RoyalGuard::RoyalGuard() {
   std::cout << "Objeto RoyalGuard creado!" << std::endl;
}

// Setters.

void RoyalGuard::setName(string name) {
	this -> name = name;
}

void RoyalGuard::setAge(int age) {
   this -> age = age;
}

void RoyalGuard::setSoldier(string soldier) {
   this -> soldier = soldier;
}

void RoyalGuard::setAttack(int attack) {
   this -> attack = attack;
}

void RoyalGuard::setDefense(int defense) {
   this -> defense = defense;
}

// Getters.

string RoyalGuard::getName() {
   return name;
}

int RoyalGuard::getAge() {
   return age;
}

string RoyalGuard::getSoldier() {
   return soldier;
}

int RoyalGuard::getAttack() {
	return attack;
}

int RoyalGuard::getDefense() {
   return defense;
}


// Destructor.

RoyalGuard::~RoyalGuard() {
   std::cout << "Limpiando objeto: " << this << std::endl;
}

