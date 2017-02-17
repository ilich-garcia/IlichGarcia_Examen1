// Dothraki

#include <iostream>
#include <string>

# ifndef DOTHRAKI_H
# define DOTHRAKI_H

using namespace std;

class Dothraki {
	private:
		string name;
		string chief;
		string horse;
		string color;
		int attack;
		int defense;

	public:
		Dothraki(); // Constructor.
		// Setters.
		void setName(string);
		void setChief(string);
		void setHorse(string);
		void setColor(string);
		void setAttack(int);
		void setDefense(int);
		// Getters.
      string getName();
      string getChief();
      string getHorse();
      string getColor();
      int getAttack();
      int getDefense();
		~Dothraki(); // Destructor.
};

# endif
