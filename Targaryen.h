// Targaryen.

#include <iostream>
#include <vector>
#include <string>

# ifndef TARGARYEN_H
# define TARGARYEN_H

using namespace std;

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
		setQueen(string);
		setEmblem(string);
		setMotto(string);
		setDragons(int);
		setDothrakies(Dothraki*);
		setBoats(int);
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
