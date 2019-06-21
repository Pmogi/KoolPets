// Pet source file

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

// constructor function
void basePet::basePet(){
	happy = 0;
	honger = 0;
	chonk = 0;
	name = NULL;
	type = "Slime";
	
}

void basePet::assignName(string petName){
	name = petName;
}

// load variables from save file to pet object
void basePet::loadPetSave(string sName, string sType, int sHappy, int sHonger, int sChonk){
	name = sName;
	type = sType;
	happy = sHappy;
	honger = sHonger;
	chonk = sChonk;
}