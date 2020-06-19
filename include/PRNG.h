//
// Created by jake on 19/06/2020.
//

#ifndef RANDOMTESTER_PRNG_H
#define RANDOMTESTER_PRNG_H

#include <cstdint>
#include <string>

class PRNG {
public:

	virtual void setSeed(uint32_t seed) = 0;
	virtual uint32_t get() = 0; // It's important that this function returns 32 bytes, regardless of the actual width of an int

	const std::string name;
	const std::string description;
};

#endif //RANDOMTESTER_PRNG_H
