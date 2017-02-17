// Lannister

#include <iostream>
#include <vector>
#include <string>

# ifndef LANNISTER_H
# define LANNISTER_H

using namespace std;

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
		setFamilyBoss(string);
      setEmblem(string);
      setMotto(string);
      setRoyalGuard(RoyalGuard*);
      setMoney(double);
		setForce(int);
      setQuantity(int);
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
