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

  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {

  double rez = 1;
  for (int i = 1; i <= count; ++i)
    rez += pown(x, i) / fact(i);
  return rez;
}

double sinn(double x, uint16_t count) {

  double rez = x;
  for (int i = 1; i <= count; ++i)
  rez -= pown(-1, i-1) * (pown(x, 2*i-1) / fact(2*i-1));
  return rez;
}

double cosn(double x, uint16_t count) {

  double rez = x;
  for (int i = 2; i <= count; ++i)
  rez -= pown(-1, i-1) * (pown(x, 2*i-2) / fact(2*i-2));
  return rez;
}
