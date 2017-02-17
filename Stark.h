// Stark.

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
		setFamilyBoss(string);
		setWolfs(int);
		setEmblem(string);
		setMotto(string);
		setNobleFamily(NobleFamily*);
		setBestWarrior(string);
		setQuantity(int);
		// Getters.
      string getFamilyBoss();
      int getWolfs();
      string getEmblem();
      string getMotto();
      NobleFamily* getNobleFamily();
      string getBestWarrior();
      int getQuantity();
		~Stark(); // Destructor.
};

# endif
