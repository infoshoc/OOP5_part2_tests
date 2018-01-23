#include <assert.h>
#include "Utilities.h"

template<int T>
struct Int {
        static const int val = T;
};

int main() 
{
	int val = ConditionalInteger<(0 != 1), 0, 1>::value; // = 0
	assert(val == 0);
	val = ConditionalInteger<(0 == 1), 0, 1>::value; // = 1
	assert(val == 1);
	typedef typename Conditional<(0 != 1), Int<0>, Int<1>>::value test1; // = Int<0>
	assert(test1::val == 0);
	typedef typename Conditional<(0 == 1), Int<0>, Int<1>>::value test2; // = Int<1>
	assert(test2::val == 1);
}
