
#include <xpcc/math/polar_coordinate.hpp>
#include <xpcc/math/position.hpp>

using namespace xpcc;

PolarCoordinate<int16_t> bar;

volatile int16_t length;

int
main(void)
{
	length = bar.getLength();
	
	Position foo = bar.toCartesian();
	
	while (1) {
		
	}
}
