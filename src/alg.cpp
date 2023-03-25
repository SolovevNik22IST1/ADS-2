// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double answer = 1;
    if (value == -1) {
        if (n % 2 == 0)
            return 1;
        else
            return -1;
    }
    for (uint16_t i = 1; i <= n; ++i)
        answer *= value;
    return answer;
}

uint64_t fact(uint16_t n) {
  uint64_t answer = 1;
    for (uint16_t i = 2; i <= n; ++i)
        answer *= i;
    return answer;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double rez = 0;
    for (int i = 0; i <= count; i++) {
        rez += calcItem(x, i);
    }
    return rez;
}

double sinn(double x, uint16_t count) {
  double sin = 0;
    for (int i = 1; i <= count; i++) {
        sin += pown(-1, i-1) * calcItem(x, 2*i-1);
    }
    return sin;
}

double cosn(double x, uint16_t count) {
  double cosin = 0;
    for (int i = 1; i <= count; i++) {
        cosin += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
    }
    return cosin;
}
