#include <iostream>
#include <cctype>

int main() {
	bool whileCheck = true;		//true = aja ohjelma, false = sulje ohjelma
	std::string longString;		//Stringi, josta etsit‰‰n p‰tk‰
	std::string searchFor;		//String, jota etsit‰‰n pidemm‰st‰ stringist‰

	while (whileCheck == true) {	//Ajetaan ohjelmaa, kunnes ei en‰‰ ajeta


		std::cout << "Give a string from which to search for: ";
		std::cin >> longString;

		std::cout << "Give seatch string: ";
		std::cin >> searchFor;
	
		std::cout << "Long string: " << longString << ", short string: " << searhFor << ".\n";	//Testi, poista myˆhemmin

		whileCheck = Tarkistus();	//Kysyt‰‰n k‰ytt‰j‰lt‰, jatketaanko ohjelman k‰yttˆ‰
	}


	return 0;
}