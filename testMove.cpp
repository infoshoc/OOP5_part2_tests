#include <assert.h>
#include "CellType.h"
#include "Direction.h"
#include "MoveVehicle.h"

int main() {
	int x = Move<X, RIGHT, 1>::amount;
	assert(1 ==  (Move<X, RIGHT, 1>::amount));
	assert(1 ==  (Move<A, RIGHT, 1>::amount));
	assert(1 ==  (Move<B, DOWN, 1>::amount));
	assert(1 ==  (Move<C, LEFT, 1>::amount));
	assert(1 ==  (Move<D, RIGHT, 1>::amount));
	assert(1 ==  (Move<R, UP, 1>::amount));

	assert(1 ==  (Move<R, UP, 1>::amount));
	assert(0 ==  (Move<R, UP, 0>::amount));
	assert(2 ==  (Move<R, UP, 2>::amount));
	assert(3 ==  (Move<R, UP, 3>::amount));
	assert(4 ==  (Move<R, UP, 4>::amount));
}
