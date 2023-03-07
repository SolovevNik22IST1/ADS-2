// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double rez = 1;
    for (int i = n; i > 0; i--) {
        rez *= value;
    }
    return rez;
}

uint64_t fact(uint16_t n) {
  uint64_t rez = 1;
    for (int i = n; i >= 1; i--) {
        rez *= i;
    }
    return rez;
}

double calcItem(double x, uint16_t n) {

  return ((pown(x, n)) / (fact(n)));
}

double expn(double x, uint16_t count) {
  double rez = 0;
    for (int i = count; i >= 0; i--) {
        rez += calcItem(x, i);
    }
    return rez;
}

double sinn(double x, uint16_t count) {
  double rez = 0;
    for (int i = count; i > 0; i--) {
        double k = calcItem(x, 2 * i - 1);
        rez += pown(-1, i - 1) * k;
    }
    return rez;
}

double cosn(double x, uint16_t count) {
  double rez = 0;
    for (int i = count; i > 0; i--) {
        double k = calcItem(x, 2 * i - 2);
        rez += pown(-1, i - 1) * k;
    }
    return rez;
}
