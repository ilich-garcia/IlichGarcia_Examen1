// Targaryen.cpp

#include "Targaryen.h"

// Constructor.

Targaryen::Targaryen() {
   std::cout << "Objeto Targaryen creado!" << std::endl;
}

// Setters.

Targaryen::setQueen(string queen) {
	this -> queen = queen;
}

Targaryen::setEmblem(string emblem) {
   this -> emblem = emblem;
}

Targaryen::setMotto(string motto) {
   this -> motto = motto;
}

Targaryen::setDragons(int dragons) {
   this -> dragons = dragons;
}

Targaryen::setDothrakies(Dothraki* dothraki) {
   this -> queen = queen;
}

Targaryen::setBoats(int boats) {
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

Dothraki* Targaryen::getDothrakies() {
   return queen;
}

int Targaryen::getBoats() {
   return boats;
}

// Destructor.

Targaryen::~Targaryen() {
   std::cout << "Limpiando objeto: " << this << std::endl;
}
