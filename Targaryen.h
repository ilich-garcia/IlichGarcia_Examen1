// Targaryen.

#include "Dothraki.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

# ifndef TARGARYEN_H
# define TARGARYEN_H

class Targaryen {
	private:
		string queen;
		string emblem;
		string motto;
		int dragons;
		vector<Dothraki*> dothrakies;
		int boats;

	public:
		Targaryen(); // Constructor.
		// Setters.
		void setQueen(string);
		void setEmblem(string);
		void setMotto(string);
		void setDragons(int);
		void setDothrakies(Dothraki*);
		void setBoats(int);
		// Getters.
      string getQueen();
      string getEmblem();
      string getMotto();
      int getDragons();
      Dothraki* getDothrakies();
      int getBoats();
		~Targaryen(); // Destructor.
};

# endif
