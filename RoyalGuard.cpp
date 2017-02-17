// RoyalGuard.cpp

#include "RoyalGuard.h"

// Constructor.

RoyalGuard::RoyalGuard() {
   std::cout << "Objeto RoyalGuard creado!" << std::endl;
}

// Setters.

RoyalGuard::setName(string name) {
	this -> name = name;
}

RoyalGuard::setAge(int age) {
   this -> age = age;
}

RoyalGuard::setSoldier(string soldier) {
   this -> soldier = soldier;
}

RoyalGuard::setAttack(int attack) {
   this -> attack = attack;
}

RoyalGuard::setDefense(int defense) {
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

