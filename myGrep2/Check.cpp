#include <iostream>
#include <cctype>

bool Tarkistus() {
	char YN;	// Yes/No

	std::cout << "Would you like to run the program again? (Y/N)";

	while(1 == 1) {	//Never stop the madness
		std::cin >> YN;
		YN = tolower(YN);

		switch (YN) {
		case 'y':
			return 1;
			break;
		case 'n':
			return 0;
			break;
		default:
			std::cout << "Enter Y or N";
		}
	}
	


}