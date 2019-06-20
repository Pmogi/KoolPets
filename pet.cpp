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

basePet::basePet(string petName){
	
	cout << "What name would you like for your pet?\n> ";
	cin >> name;
	
	happy = 0;
	honger = 0;
	chonk = 0;
	
}