// RoyalGuard.

#include <iostream>
#include <string>

# ifndef ROYALGUARD_H
# define ROYALGUARD_H

class RoyalGuard {
	private:
		string name;
		int age;
		string soldier;
		int attack;
		int defense;

	public:
		RoyalGuard(); // Constructor.
		// Setters.
      setName(string);
      setAge(int);
      setSoldier(string);
      setAttack(int);
      setDefense(int);
		// Getters.
      string getName();
      int getAge();
      string getSoldier();
      int getAttack();
      int getDefense();
		~RoyalGuard(); // Destructor.
};

# endif
