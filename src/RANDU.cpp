//
// Created by jake on 19/06/2020.
//

#include "RANDU.h"

std::string RANDU::name() {
  return "RANDU";
}

std::string RANDU::description() {
  return "A linear congruential generator used since the 1960s, used in IBM mainframes. Described by Donald Knuth as 'horrible'";
}

void RANDU::setSeed(uint32_t seed) {
	this->seed = seed;
}

uint32_t RANDU::get() {
	long intermediateValue = seed * 65539;
	return seed = intermediateValue % (1LL << 31);
}
