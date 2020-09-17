//
// Created by jake on 17/09/2020.
//

#ifndef RANDOMTESTER_GLIBCLCG_H
#define RANDOMTESTER_GLIBCLCG_H

#include "PRNG.h"

class glibcLCG : public PRNG {
public:
	void setSeed(uint32_t seed) override;

	uint32_t get() override;

	std::string name() override;
	std::string description() override;
private:
	long seed;
};


#endif //RANDOMTESTER_GLIBCLCG_H
