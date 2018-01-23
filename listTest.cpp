#include <assert.h>
#include <stdio.h>
#include "List.h"

template<int T>
struct Int {
	static const int val = T;
};


int main()
{
	Int<3> x;
	assert(Int<3>::val == 3);

	typedef List<Int<1>, Int<2>, Int<3>> list;
	assert(list::head::val == 1); // = Int<1>
	typedef typename list::next listTail; // = List<Int<2>, Int<3>>
	assert(list::next::head::val == 2);
	assert(list::next::size == 2);
	list::next::next y;
	assert(list::size == 3); // = 3
	assert(list::next::next::head::val == 3);

	typedef List<Int<6>> list1;
	assert(list1::size == 1);
	assert(list1::head::val == 6);
	assert(list1::next::size == 0);

	typedef List<> list2;
	assert(list2::size == 0);
}
