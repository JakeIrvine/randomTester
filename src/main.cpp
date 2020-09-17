#include <iostream>
#include "input.h"
#include "RANDU.h"
#include "glibcLCG.h"
#include "basic_PRNGs.h"

void mainMenu();
void runPRNG();
void testPRNG();
void testString();

int main() {
	std::cout << "Random Number Tester\nBy KernelPanic\n" << std::endl;
	mainMenu();
	return 0;
}

void mainMenu() {
	while(true) {
		std::cout << "[1]: Run PRNG\n[2]: Test PRNG\n[3]: Test string\n\n[q]: Quit\n";
		switch (getChoice(">>> ", {'1', '2', '3', 'q'})) {
			case '1':
				runPRNG();
				break;
			case '2':
				testPRNG();
				break;
			case '3':
				testString();
				break;
			case 'q':
				return;
		}
	}
}

PRNG* choosePRNG() {
	std::vector<PRNG*> prngs = {
			new RANDU(),
			new glibcLCG(),
			new Zeroes(),
			new Ones(),
			new Alternating()
	};

	char button = 97;
	std::vector<wchar_t> allowedChoices = {};

	std::cout << "\nSelect PRNG:\n\n";

	for (auto prng : prngs) {
		std::string mnemonic = "[";
		mnemonic += button;
		mnemonic += "]: ";

		std::cout << mnemonic << prng->name() << '\n';
		allowedChoices.push_back(button++);
	}

	char choice = getChoice(">>> ", allowedChoices);

	return prngs[choice - 97];

}

void runPRNG() {
	auto prng = (choosePRNG());


	prng->setSeed(getInt("Seed >>>"));

	int numbersWanted = getInt("Quantity >>> ");

	std::cout << std::string(50, '=') << '\n';
	for(int i=0; i < numbersWanted; i++) {
		std::cout << prng->get() << '\n';
	}
	std::cout << std::string(50, '=') << std::endl;
}

void testPRNG() {
	throw std::logic_error{"Not yet implemented"};
}

void testString() {
	throw std::logic_error{"Not yet implemented"};
}

