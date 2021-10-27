#include <bits/stdc++.h>
using namespace std;
    struct com
    {
        int real;
        int imag;
    };
    struct com add(struct com a, struct com b)
    {
      a.real = a.real+b.real;
      a.imag = a.imag+b.imag;
      return a;
    }
    struct com multiply(struct com a,struct com b)
    {
        struct com d;
        d.real=(a.real*b.real)-(a.imag*b.imag);
        d.imag=(a.real*b.imag)+(a.imag*b.real);
        return d;
    }
int main() {
    struct com a1={2,2};
    struct com b1={1,3};
    struct com d=add(a1,b1);
    struct com e=multiply(a1,b1);
    cout<<d.real<<"+"<<d.imag<<"i\n";
    cout<<e.real<<"+"<<d.imag<<"i\n";
	return 0;
}
