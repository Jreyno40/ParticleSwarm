#ifndef FUNCTIONTWO_H
#define FUNCTIONTWO_H
#include "Problem.h"
#if defined _WIN64 || defined _WIN32
#include "minmax.h"
#endif

/**
* @class FunctionTwo
* @brief This inherits from the Problem interface to define a sample problem.
*/
class FunctionTwo : public Problem {

public:

	double Q(std::pair<double, double> &p) {
		return 9.0 * max(0.0, 10 - pow(pdist(p), 2)) + 
			10 * (1 - (pdist(p) / mdist())) + 70 * (1 - (ndist(p) / mdist()));
	}

};

#endif /* FUNCTIONTWO_H */