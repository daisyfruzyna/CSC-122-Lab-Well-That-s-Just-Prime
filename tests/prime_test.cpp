#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"
#include <vector>

TEST_CASE( "#zero" ) {
    std::vector<int> test = {};
    REQUIRE( prime(0) == test);
}
TEST_CASE( "#1" ) {
    std::vector<int> test = {};
    REQUIRE( prime(1) == test);
}
TEST_CASE( "#126 - large non prime - many" ) {
    std::vector<int> test = {2, 3, 3, 7};
    REQUIRE( prime(126) == test);
}
TEST_CASE( "#2 - bound(>1)" ) {
    std::vector<int> test = {2};
    REQUIRE( prime(2) == test);
}
TEST_CASE( "#20 - sample" ) {
    std::vector<int> test = {2, 2, 5};
    REQUIRE( prime(20) == test);
}
TEST_CASE( "#67 - large prime" ) {
    std::vector<int> test = {67};
    REQUIRE( prime(67) == test);
}

