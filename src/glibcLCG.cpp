//
// Created by jake on 17/09/2020.
//

#include "glibcLCG.h"

std::string glibcLCG::name() {
	return "glibc rand()";
}

std::string glibcLCG::description() {
	return "Used in the C random number generator when ";
}

void glibcLCG::setSeed(uint32_t seed) {
	this->seed = seed;
}

uint32_t glibcLCG::get() {
	long intermediateValue = seed * 1103515245 + 12345;
	return seed = intermediateValue % (1LL << 31);
}
