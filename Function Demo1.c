#include <stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
}

a)  functionM(); //pass
b)  a = functionM(); //pass with warning because Data Loss
c)  b = functionN(a, b); //pass
d)  r = functionO(r,a,s,b); //pass
e)  s = functionP(a,b,c,d,e); //error because Argument Count Mismatch
f)  u = functionM(); //pass
g)  c = d + functionN(r,s); //pass with warning because Argument Mismatch
h)  t = s * functionO(r, a, r, a); //pass
i)  a = v + functionP(r, s, t, t); //pass with warning because Implicit Cast
j)  functionP(functionN(a, a), s, t, t+r); //pass with warning because Type Demotion
k)  v = functionP(functionN(a, a), s, t, t+r); //pass with warning because Argument Type Mismatch



