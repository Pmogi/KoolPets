// pet source file header

#include <string>

// Header guard
#ifndef PET_H


// base class for pet objects
class basePet {
	
	private:
		string name;
		string type;
		int happy;
		int honger;
		int chonk;
		
	
	public:
		
		// declerations of pet class functions
		void basePet(); // constructor function
		
		int getHappy(); // :)
		int getHonger();
		int getChonk();
	
};

// used for saving pet's data to binary file
int savePet();
#endif