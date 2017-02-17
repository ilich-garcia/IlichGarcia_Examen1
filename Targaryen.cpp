// Targaryen.cpp

#include "Targaryen.h"

// Constructor.

Targaryen::Targaryen() {
   std::cout << "Objeto Targaryen creado!" << std::endl;
}

// Setters.

void Targaryen::setQueen(string queen) {
	this -> queen = queen;
}

void Targaryen::setEmblem(string emblem) {
   this -> emblem = emblem;
}

void Targaryen::setMotto(string motto) {
   this -> motto = motto;
}

void Targaryen::setDragons(int dragons) {
   this -> dragons = dragons;
}

void Targaryen::setDothrakies(Dothraki* dothraki) {
   this -> queen = queen;
}

void Targaryen::setBoats(int boats) {
   this -> boats = boats;
}

// Getters.

string Targaryen::getQueen() {
   return queen;
}

string Targaryen::getEmblem() {
   return emblem;
}

string Targaryen::getMotto() {
   return motto;
}

int Targaryen::getDragons() {
   return dragons;
}

Dothraki* Targaryen::getDothrakies(int position) {
   return dothrakies[position];
}

int Targaryen::getBoats() {
   return boats;
}

// Destructor.

Targaryen::~Targaryen() {
   std::cout << "Limpiando objeto: " << this << std::endl;
}
