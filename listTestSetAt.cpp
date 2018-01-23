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
	typedef typename SetAtIndex<0, Int<5>, list>::list listA;
	assert(listA::head::val == 5);
	assert(listA::next::head::val == 2);
	assert(listA::next::next::head::val == 3);

	typedef typename SetAtIndex<2, Int<7>, list>::list listB; 
	assert(listB::head::val == 1);
	assert(listB::next::head::val == 2);
	assert(listB::next::next::head::val == 7);
}
