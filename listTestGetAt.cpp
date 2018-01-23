#include <assert.h>
#include <stdio.h>
#include "List.h"

template<int T>
struct Int {
	static const int val = T;
};


int main()
{
	typedef List<Int<1>, Int<2>, Int<3>> list;
	List<> z;
	GetAtIndex<0, list>::value x; // = Int<1>
	GetAtIndex<2, list>::value y; // = Int<3>
	assert(x.val == 1);
	assert(y.val == 3);
}
