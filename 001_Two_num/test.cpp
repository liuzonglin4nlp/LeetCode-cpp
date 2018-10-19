#define CATCH_CONFIG_MAIN
//#include "../Catch/single_include/catch.hpp"
#include "solution.h"
#include <iostream>

int main() {
	
	std::vector<int> v1{ 2, 7, 11, 15 };
	std::cout << v1.size() << std::endl;
	Solution s;
	bool a = (s.twoSum(v1, 9) == std::vector<int>{0, 1});
	std::cout << a << std::endl;
	getchar();
	return 0;
}



/*
TEST_CASE("TWO SUM"£¬"TWOSUM")
{
	SOLUTION S;

	STD::VECTOR<INT> V1{ 2, 7, 11, 15 };
	REQUIRE((S.TWOSUM(V1, 9) == STD::VECTOR<INT>{0, 1}));

	STD::VECTOR<INT> V2{ 0, 4, 3, 0 };
	REQUIRE((S.TWOSUM(V2, 0) == STD::VECTOR<INT>{0, 3}));

	STD::VECTOR<INT> V3{ -3, 4, 3, 90 };
	REQUIRE((S.TWOSUM(V3, 0) == STD::VECTOR<INT>{0, 2}));
}*/