#include <assert.h>
#include <stdio.h>
#include "List.h"

template<int T>
struct Int {
	static const int val = T;
};

int main()
{
	typedef PrependList<Int<4>, Int<5> > > l1;
}
