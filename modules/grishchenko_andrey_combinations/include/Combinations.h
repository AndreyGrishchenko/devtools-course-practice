// Copyright 2022 Andrey Grishchenko

#ifndef MODULES_GRISHCHENKO_ANDREY_COMBINATIONS_INCLUDE_COMBINATIONS_H_
#define MODULES_GRISHCHENKO_ANDREY_COMBINATIONS_INCLUDE_COMBINATIONS_H_

#include <algorithm>
#include <vector>
#include <random>
#include <string>

class Combination {
 public:
bool NextSet(int* a, int n, int m);
void Print(int* a, int n);
std::string comb(int n, int m);
};

#endif  // MODULES_GRISHCHENKO_ANDREY_COMBINATIONS_INCLUDE_COMBINATIONS_H_
