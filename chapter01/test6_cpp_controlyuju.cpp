// 控制语句
#include <iostream>
using namespace std;


int main () {
  // for( ; ; )
  //  {
  //     printf("This loop will run forever.\n");
  //  }
  int i = 11;

  // while (i < 10)
  // {
  //   i++;
  //   cout << i << '\n' << endl;
  // }

  // do {
  //   cout << i << '\n' << endl;
  //   i++;
  // } while (i < 10);

  switch (i) {
    case 1:
      cout << "i=" << i << endl;
      break;
    case 2:
      cout << "i=" << i << endl;
      break;
    case 3:
      cout << "i=" << i << endl;
      break;
    default :
      cout << "this is default exec " << endl;
      break;
  }

  // c++支持条件运算符  其实就是if else的语法糖
  bool xxx = 16 < 15 ? true : false;
  
  cout << xxx << endl;

  return 0; // 至少会被执行一次
}