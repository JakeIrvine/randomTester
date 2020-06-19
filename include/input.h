//
// Created by jake on 18/06/2020.
//

#ifndef RANDOMTESTER_INPUT_H
#define RANDOMTESTER_INPUT_H

#include <iostream>
#include <vector>


int getInt(std::string prompt);

wchar_t getChoice(std::string prompt, std::vector<wchar_t> choices);


#endif //RANDOMTESTER_INPUT_H
