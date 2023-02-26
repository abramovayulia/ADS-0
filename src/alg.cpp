// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
   if (a == 0 || b == 0) {
    return a+b;
  }
   if (a > b) {
     return gcd(a - b, b);
   } else {
     return gcd(a, b - a);
    }
  }
