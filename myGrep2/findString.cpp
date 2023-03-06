#include <iostream>
#include <string>

void Etsi(std::string longString, std::string searchFor) {
	
int check = longString.find(searchFor);	//Katsotaan missä kohtaa etsittävä stringi on

if (check > -1) {
	std::cout << "\"" << searchFor << "\" found in \"" << longString << "\" in position " << check << '\n';
}
else {
	std::cout << "\"" << searchFor << "\" NOT found in \"" << longString << "\"\n";
}






}

