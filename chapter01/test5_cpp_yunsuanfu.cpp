#include <iostream>

using namespace std;

void test2();

// c++ 运算符

int main()
{
  //  int a = 21;
  //  int b = 10;
  //  int c;
 
  //  c = a + b;
  //  cout << "Line 1 - c 的值是 " << c << endl ;
  //  c = a - b;
  //  cout << "Line 2 - c 的值是 " << c << endl ;
  //  c = a * b;
  //  cout << "Line 3 - c 的值是 " << c << endl ;
  //  c = a / b;
  //  cout << "Line 4 - c 的值是 " << c << endl ;
  //  c = a % b;
  //  cout << "Line 5 - c 的值是 " << c << endl ;
 
  //  int d = 10;   //  测试自增、自减
  //  c = d++;
  //  cout << "Line 6 - c 的值是 " << c << endl ;
 
  //  d = 10;    // 重新赋值
  //  c = d--;
  //  cout << "Line 7 - c 的值是 " << c << endl ;
  test2();
  return 0;
}

void test2 () {
  unsigned int a = 60;      // 60 = 0011 1100  
  unsigned int b = 13;      // 13 = 0000 1101
  int c = 0;           

  c = a & b;             // 12 = 0000 1100
  cout << "Line 1 - c 的值是 " << c << endl ;

  c = a | b;             // 61 = 0011 1101
  cout << "Line 2 - c 的值是 " << c << endl ;

  c = a ^ b;             // 49 = 0011 0001
  cout << "Line 3 - c 的值是 " << c << endl ;

  c = ~a;                // -61 = 1100 0011
  cout << "Line 4 - c 的值是 " << c << endl ;

  c = a << 2;            // 240 = 1111 0000
  cout << "Line 5 - c 的值是 " << c << endl ;

  c = a >> 2;            // 15 = 0000 1111
  cout << "Line 6 - c 的值是 " << c << endl ;
}

// 赋值运算符
/*
=	简单的赋值运算符，把右边操作数的值赋给左边操作数	C = A + B 将把 A + B 的值赋给 C
+=	加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数	C += A 相当于 C = C + A
-=	减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数	C -= A 相当于 C = C - A
*=	乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数	C *= A 相当于 C = C * A
/=	除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数	C /= A 相当于 C = C / A
%=	求模且赋值运算符，求两个操作数的模赋值给左边操作数	C %= A 相当于 C = C % A
<<=	左移且赋值运算符	C <<= 2 等同于 C = C << 2
>>=	右移且赋值运算符	C >>= 2 等同于 C = C >> 2
&=	按位与且赋值运算符	C &= 2 等同于 C = C & 2
^=	按位异或且赋值运算符	C ^= 2 等同于 C = C ^ 2
|=	按位或且赋值运算符	C |= 2 等同于 C = C | 2
*/