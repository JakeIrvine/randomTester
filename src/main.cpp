#include <iostream>
#include "input.h"
#include "RANDU.h"
#include "basic_PRNGs.h"

void mainMenu();
void runPRNG();
void testPRNG();
void testString();

int main() {
	std::cout << "Random Number Tester\nBy Jake Irvine\n" << std::endl;
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

void runPRNG() {
	// Normally for something like this, I would use a fancy function pointer system to automatically generate the menu
	// But that seems kinda impractical for something this small
	// So I'm gonna use a big old switch statement
	auto prng = RANDU();
	prng.setSeed(1);
	for(int i=0; i<100; i++) {
		std::cout << prng.get() << std::endl;
	} // temporary code to test my RANDU implementation

}
void testPRNG() {
	throw std::logic_error{"Not yet implemented"};
}
void testString() {
	throw std::logic_error{"Not yet implemented"};
}