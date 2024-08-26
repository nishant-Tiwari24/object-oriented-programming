#include <iostream>

class complex {
  int a;
  int b;

  public:
    void setData(int a, int b) {
      a = a;
      b = b;
    }

    void getSum(complex o1, complex o2) {
      a = o1.a + o2.a;
      b = o1.b + o2.b;
    }
};

int main() {
  complex c1, c2, c3;
  c2.setData(1,2);
  c3.setData(3,4);
  c1.getSum(c2, c3);
  return 0;
}