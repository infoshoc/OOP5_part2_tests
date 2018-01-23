#include <assert.h>
#include <stdio.h>
#include "List.h"

template<int T>
struct Int {
	static const int val = T;
};


int main()
{
	typedef List<Int<6>> list1;
	assert(list1::size == 1);
	list1::next::next x;
}
