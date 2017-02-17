// Lannister

#include "RoyalGuard.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

# ifndef LANNISTER_H
# define LANNISTER_H

class Lannister {
	private:
		string familyBoss;
		string emblem;
		string motto;
		vector<RoyalGuard*> royalGuards;
		double money;
		int force;
		int quantity;		

	public:
		Lannister(); // Constructor.
		// Setters.
		void setFamilyBoss(string);
      void setEmblem(string);
      void setMotto(string);
      void setRoyalGuard(RoyalGuard*);
      void setMoney(double);
		void setForce(int);
      void setQuantity(int);
		// Getters.
      string getFamilyBoss();
      string getEmblem();
      string getMotto();
      RoyalGuard* getRoyalGuard();
      double getMoney();
      int getForce();
      int getQuantity();
		~Lannister(); // Destructor.
};

# endif
