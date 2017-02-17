// NobleFamily.

#include <iostream>
#include <string>

# ifndef NOBLEFAMILY_H
# define NOBLEFAMILY_H

class NobleFamily {
	private:
		string name;
		string symbol;
		string motto;
		string people;
		int attack;
		int defense;

	public:
		NobleFamily(); // Constructor.
		// Setters.
		setName(string);
		setSymbol(string);
		setMotto(string);
		setPeople(string);
		setAttack(int);
		setDefense(int);
		// Getters.
      string setName();
      string setSymbol();
      string setMotto();
      string setPeople();
      int setAttack();
      int setDefense();
		~NobleFamily(); // Destructor.
};

# endif