// NobleFamily.

#include <iostream>
#include <string>

# ifndef NOBLEFAMILY_H
# define NOBLEFAMILY_H

using namespace std;

class NobleFamily {
	private:
		string name;
		string symbol;
		string motto;
		int people;
		int attack;
		int defense;

	public:
		NobleFamily(); // Constructor.
		// Setters.
		setName(string);
		setSymbol(string);
		setMotto(string);
		setPeople(int);
		setAttack(int);
		setDefense(int);
		// Getters.
      string getName();
      string getSymbol();
      string getMotto();
      int getPeople();
      int getAttack();
      int getDefense();
		~NobleFamily(); // Destructor.
};

# endif
