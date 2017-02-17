// Dothraki.cpp

#include "Dothraki.h"

// Constructor.

Dothraki::Dothraki() {

}

// Setters.

Dothraki::setName(string name) {
	this -> name = name;
}

// Destructor.

Dothraki::~Dothraki() {
   std::cout << "Limpiando objeto: " << this << std::endl;
}
