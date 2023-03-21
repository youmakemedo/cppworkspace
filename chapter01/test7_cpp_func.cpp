// c++函数
#include <iostream>
#include <ctime>

using namespace std;

int max(int a, int b);
int randnum();

// C++ 标准库提供了大量的程序可以调用的内置函数。例如，函数 strcat() 用来连接两个字符串，函数 memcpy() 用来复制内存到另一个位置。
int main () {
  // int a = max(7, 3);
  // cout << a << endl;

  int *x;
  int *y;
  int a = 2;
  x = &a;
  // *y = x;
  cout << *x << endl;
  cout << &x << endl;
  cout << x << endl;
  randnum();


  return 0;
}

int max(int a, int b) {
  int result = 0;
  result = a >= b ? a : b;
  return result;
}


// 生成随机数 伪随机数
int randnum() {
  // 设置种子
  srand( (unsigned)time( NULL ) );
  int j = rand();
  cout << "随机数j:" << j << endl;
  return j;
}