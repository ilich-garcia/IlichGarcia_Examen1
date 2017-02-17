// NobleFamily.

#include <iostream>
#include <string>

using namespace std;

# ifndef NOBLEFAMILY_H
# define NOBLEFAMILY_H

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
		void setName(string);
		void setSymbol(string);
		void setMotto(string);
		void setPeople(int);
		void setAttack(int);
		void setDefense(int);
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
