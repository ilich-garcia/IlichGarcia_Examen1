// RoyalGuard.

#include <iostream>
#include <string>

using namespace std;

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
      void setName(string);
      void setAge(int);
      void setSoldier(string);
      void setAttack(int);
      void setDefense(int);
		// Getters.
      string getName();
      int getAge();
      string getSoldier();
      int getAttack();
      int getDefense();
		~RoyalGuard(); // Destructor.
};

# endif
