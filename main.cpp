/*
KoolPets
Virtual pet sim

Main --
Shouldn't have too much code here. Most of the heavy lifting should be done in sep files/libs.
*/

#include <iostream>	// I/O
#include <time.h>	// for counting game ticks for refresh
#include <string>	// used for names

// project headers
#include "pet.h"

using namespace std; // using standard library namespace

static bool petExist;


int main(){
	// load required data here / or create new file
	{
		
		
	}
	
	
	// checking pet existing could probably be it's own function in pet source and just return pet object
	
	// creating pet to either load save to or create new pet
	basePet pet;
	
	// defaulting to no save file for now
	petExist = false;
	
	
	if (petExist == false){
		string name;
		cout << "What name would you like for your pet?\n> ";
		cin >> name;
		pet.assignName(name);
	}
	/*
	else, using obtained variables from save file, assign them to pet object
	*/
	
	
	// main game loop
	while (1){
		
		
	}
	
	
return 0;
}