// Stark.h

#include <iostream>
#include <string>
#include <vector>

#include "NobleFamily.h"

using namespace std;

# ifndef STARK_H
# define STARK_H

class Stark {
	private:
		string familyBoss;
		int wolfs;
		string emblem;
		string motto;
		vector<NobleFamily*> nobleFamilies;
		string bestWarrior;
		int quantity;

	public:
		Stark(); // Constructor.
		// Setters.
		void setFamilyBoss(string);
		void setWolfs(int);
		void setEmblem(string);
		void setMotto(string);
		void setNobleFamily(NobleFamily*);
		void setBestWarrior(string);
		void setQuantity(int);
		// Getters.
      string getFamilyBoss();
      int getWolfs();
      string getEmblem();
      string getMotto();
      NobleFamily* getNobleFamily(int);
      string getBestWarrior();
      int getQuantity();
		~Stark(); // Destructor.
};

# endif
