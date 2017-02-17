// Dothraki

#include <iostream>
#include <string>

# ifndef DOTHRAKI_H
# define DOTHRAKI_H

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
		setName(string);
		setChief(string);
		setHorse(string);
		setColor(string);
		setAttack(int);
		setDefense(int);
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
