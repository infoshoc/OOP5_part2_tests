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
	List<> x;
	typedef PrependList<Int<4>, List<Int<5> > > l1;
	assert(l1::list::head::val == 4);
	assert(l1::list::next::head::val == 5);
	typedef typename PrependList<Int<4>, list>::list newList; // = List< Int<4>, Int<1>, Int<2>, Int<3>>
	assert(newList::head::val == 4);
	assert(newList::next::head::val == 1);
	assert(newList::next::next::head::val == 2);
	assert(newList::next::next::next::head::val == 3);

	typedef PrependList<Int<8>, List<> >::list aaa;
	assert(aaa::head::val == 8);
	assert(aaa::next::size == 0);
}
