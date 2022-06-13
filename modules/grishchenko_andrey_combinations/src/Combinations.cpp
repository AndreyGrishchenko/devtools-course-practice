// Copyright 2022 Andrey Grishchenko

#include <string>
#include"include/Combinations.h"

static std::string out;
static int num = 1;

bool Combination::NextSet(int* a, int n, int m) {
    int k = m;
    for (int i = k - 1; i >= 0; --i) {
        if (a[i] < n - k + i + 1) {
            ++a[i];
            for (int j = i + 1; j < k; ++j)
                a[j] = a[j - 1] + 1;
            return true;
        }
    }
    return false;
}

void Combination::Print(int* a, int n) {
    out += std::to_string(num++);
    out += ": ";
    for (int i = 0; i < n; i++) {
        out += std::to_string(a[i]);
        out +=  " ";
    }
    out += "\n";
}

std::string Combination::comb(int n, int m) {
    int* a;
    a = new int[n];
    num = 1;
    out = "";

    for (int i = 0; i < n; i++)
        a[i] = i + 1;

    Print(a, m);
    if (n >= m) {
        while (NextSet(a, n, m))
            Print(a, m);
    }

    return out;
}
