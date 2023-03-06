#include <iostream>
#include <string>

void Etsi(std::string, std::string);

int main() {
	bool whileCheck = true;		//true = aja ohjelma, false = sulje ohjelma
	std::string longString;		//Stringi, josta etsit‰‰n p‰tk‰
	std::string searchFor;		//String, jota etsit‰‰n pidemm‰st‰ stringist‰

		std::cout << "Give a string from which to search for: ";
		std::getline(std::cin, longString);

		std::cout << "Give search string: ";
		std::getline(std::cin, searchFor);

		Etsi(longString, searchFor);	//Tehd‰‰n kaikki olennainen

	return 0;
}