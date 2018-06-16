#include <catch.hpp>
#include <quick.h>
#include <sorter.h>



SCENARIO("SORT") {
	int nums[] = { 9,1,7,2,5,8,3,6,4 };
	int nums_proverka[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	sorter(nums, 9);
	for (int i = 0; i < 9; ++i) {
		REQUIRE(nums[i] = nums_proverka[i]);
	}
}
