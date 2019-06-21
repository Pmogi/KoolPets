/*
KoolPets
Virtual pet sim

Main --
Shouldn't have too much code here. Most of the heavy lifting should be done in sep files/libs.
*/

#include <iostream>	// I/O
#include <time.h>	// for counting game ticks for refresh
#include <strings>	// used for names
#include <fstream>


// project headers
#include "pet.h"

using namespace std; // using standard library namespace


struct saveFile
{
	string name;
	string type;
	int happy;
	int honger;
	int chonk;
}

// used for saving pet's data to binary file
void savePet(saveFile &save, const basePet &pet){

	save.name = pet.getName();
	save.type = pet.getType();
	save.happy = pet.getHappy();
	save.honger = pet.getHonger();
	save.chonk = pet.getChonk();

	ofstream ofs("saveFile.data", ios::binary);
	ofs.write((char*)&save, sizeof(save));

}

void loadPet(basePet &pet){
	saveFile load;
	ifstream ifs("saveFile.data", ios::binary);
	ifs.read((char *)&load, sizeof(load));
	pet.updateName(load.name);
	pet.updateType(load.type);
	pet.updateHappy(load.happy);
	pet.updateHonger(load.honger);
	pet.updateChonk(load.chonk);
}


// planning on adding arg for binary file, includeing file
int main(){
	string input;
	bool validInput = FALSE;
	// load required data here / or create new file
	cout << "KOOLPets TM. \n";

	while(validInput == FALSE)
{
	cout << "Whatcha want to do?\n";
	cout << "(LOAD) or (NEW)\n";
	cin  >> input;

	if(input == "LOAD"){
		/*TODO: Make load feature that allows user to select their desired saveFile
		*/
		basePet loadPet;
		loadPet(loadPet);
		validInput = TRUE;
	}
	else if(input == "NEW")
	{
		/*TODO: Make savefile be user namable
		 				Create a check function to see if there is already a save file
						with the same name
		*/
		basePet koolPet;
		saveFile save;
		//automatically saves pet
		savePet(save,koolPet);
		validInput = TRUE;
	}
	else
	{
		cout <<"ERROR: INVALID Entry\n";
		cout << "Please Try Again. \n";
	}
}

	// main game loop
	while (1){


	}


return 0;
}
