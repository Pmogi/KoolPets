// Pet source file

// implimentation of basePet class functions here
basePet::getHappy(){
	return happy;
}

basePet::getHonger(){
	return honger;
}

basePet::getChonk(){
	return chonk;
}

basePet::getName(){
	return name;
}

basePet::getType(){
	return type;
}

basePet::updateHappy(int newHappy){
	happy = newHappy;
}

basePet::updateHonger(int newHonger){
	honger = newHonger;
}

basePet::updateChonk(int newChonk){
	chonk = newChonk;
}

basePet::updateName(string newName){
	name = newName;
}

basePet::updateType(string newType){
	type = newType;
}


basePet::basePet(){

	cout << "What name would you like for your pet?\n";
	cin >> name;
	cout << "What kind of creature is your pet?\n";
	cin >> type;

	// Pet's mood starts at neutral
	happy = 50;
	honger = 50;
	chonk = 50;

}
