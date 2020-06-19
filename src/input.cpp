//
// Created by jake on 18/06/2020.
//

#include "../include/input.h"

int getInt(std::string prompt) {
	while (true) {
		std::cout << prompt;

		std::string input = "";
		std::cin >> input;

		try {
			return std::stoi(input);
		}

		catch (std::invalid_argument) {}

	}
}

wchar_t getChoice(std::string prompt, std::vector<wchar_t> choices) {
	while (true) {
		std::cout << prompt;

		std::string input;
		std::cin >> input;

		for (auto item : choices) {
			if (item == input[0]) {
				return item;
			}
		}
	}
}
