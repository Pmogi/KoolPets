// Pet source file

#include "pet.h"

// implimentation of basePet class functions here
int basePet::getHappy(){
	return happy;
}

int basePet::getHonger(){
	return honger;
}

int basePet::getChonk(){
	return chonk;
}
std::string basePet::getName(){
	return name;
}


// constructor function
basePet::basePet(){
	happy = 0;
	honger = 0;
	chonk = 0;
	name = "Slimer";
	type = "Slime";
	
}

void basePet::assignName(std::string petName){
	name = petName;
}

// load variables from save file to pet object
void basePet::loadPetSave(std::string sName, std::string sType,
						int sHappy, int sHonger, int sChonk){
	name = sName;
	type = sType;
	happy = sHappy;
	honger = sHonger;
	chonk = sChonk;
}