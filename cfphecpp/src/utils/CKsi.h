#ifndef UTILS_CKSI_H_
#define UTILS_CKSI_H_

#include <vector>

#include "../czz/CZZ.h"
#include "NTL/ZZ.h"

using namespace std;
using namespace NTL;

class CKsi {
public:

	long p;
	long logp;
	vector<vector<CZZ>> pows;

	CKsi(long logp);

	void precompute(long logN);
	virtual ~CKsi();
};

#endif /* UTILS_CKSI_H_ */
