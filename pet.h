// pet source file header

#include <string>
#include <fstream>


// Header guard
#ifndef PET_H
#define PET_H


// base class for pet objects
class basePet {

	private:
		string name;
		string type;
		//TODO: consider combining these ints to an array of moods
		int happy;
		int honger;
		int chonk;


	public:

		// declerations of pet class functions
		void basePet(); // constructor function

		int getHappy(); // :)
		int getHonger();
		int getChonk();
		string getName();
		string getType();

		void updateHappy(int newHappy);
		void updateHonger(int newHonger);
		void updateChonk(int newChonk);
		void updateName(string newName);
		void updateType(string newType);

};

#endif /* PET_H */
