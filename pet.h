// pet source file header

#include <string>

// Becuase the header is not in the namespace of std, you must include std::string to define
// you're using the standard library, o.w. it doesn't know what library to pull from

// Header guard
#ifndef PET_H


// base class for pet objects
class basePet {
	
	private:
		std::string name;
		std::string type;
		int happy;
		int honger;
		int chonk;
		
	
	public:
		
		basePet();
		
		// declerations of pet class functions
		void assignName(std::string petName);
		
		int getHappy(); // :)
		int getHonger();
		int getChonk();
		std::string getName();
		
		void loadPetSave(std::string sName, std::string sType,
						int sHappy, int sHonger, int sChonk);
	
};

// used for saving pet's data to binary file
int savePet();
#endif