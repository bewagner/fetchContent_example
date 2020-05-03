#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <vector>
#include "doctest/doctest.h"
#include "range/v3/view.hpp"
#include "range/v3/numeric/accumulate.hpp"

int sum_of_first_ten_squared(const std::vector<int> &v) {
    auto square = [](int i) -> int { return i * i; };
    int sum = ranges::accumulate(v
                                 | ranges::views::transform(square)
                                 | ranges::views::take(10),
                                 0);
    return sum;
}

TEST_CASE ("Test function") {
            CHECK(sum_of_first_ten_squared({1, 2, 3}) == 14);
            CHECK(sum_of_first_ten_squared({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}) == 385);
            CHECK(sum_of_first_ten_squared({}) == 0);
}

