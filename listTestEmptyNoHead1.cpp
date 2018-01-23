#include <assert.h>
#include <stdio.h>
#include "List.h"

template<int T>
struct Int {
	static const int val = T;
};


int main()
{
	List<>::head;
}
