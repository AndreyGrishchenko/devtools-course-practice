// Copyright 2022 Andrey Grishchenko

#include <gtest/gtest.h>
#include <string>
#include "include/Combinations.h"

TEST(Grishchenko_Combination, test_zero_value) {
    Combination c;
    std::string a = c.comb(0, 0);
    ASSERT_EQ(a, "1: \n");
}

TEST(Grishchenko_Combination, test_six_four_value_can_run) {
    Combination c;
    ASSERT_NO_THROW(std::string a = c.comb(3, 2));
}

TEST(Grishchenko_Combination, test_three_two_value) {
    Combination c;
    std::string a = c.comb(3, 2);
    ASSERT_EQ(a, "1: 1 2 \n2: 1 3 \n3: 2 3 \n");
}

TEST(Grishchenko_Combination, test_two_two_value) {
    Combination c;
    std::string a = c.comb(2, 2);
    ASSERT_EQ(a, "1: 1 2 \n");
}

TEST(Grishchenko_Combination, test_one_one_value) {
    Combination c;
    std::string a = c.comb(1, 1);
    ASSERT_EQ(a, "1: 1 \n");
}
