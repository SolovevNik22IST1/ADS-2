// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {

  double rez = value;
  if (n == 0.0)
      rez = 0.0;
  else
      for (int i = 1; i < n; ++i)
          rez *= value;
  return rez;
}

uint64_t fact(uint16_t n) {

  int rez = 1;
  for (int i = 1; i <= n; ++i)
    rez*=i;
  return rez;
}

double calcItem(double x, uint16_t n) {

  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {

  double rez = 1;
  for (int i = 1; i <= count; ++i)
    rez += calcItem(x, i);
  return rez;
}

double sinn(double x, uint16_t count) {

  double rez = x;
  double f;
  for (int i = 1; i <= count; ++i) {
    f = calcItem(x, 2 * i - 1);
    rez -= pown(-1, i-1) * f;
  }
  return rez;
}

double cosn(double x, uint16_t count) {

  double rez = x;
  double f;
  for (int i = 2; i <= count; ++i) {
    f = calcItem(x, 2 * i - 2);
  rez -= pown(-1, i-1) * f;
  return rez;
}
