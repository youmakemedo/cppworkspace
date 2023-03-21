#include <iostream>
using namespace std;

/*
在函数或一个代码块内部声明的变量，称为局部变量。

在函数参数的定义中声明的变量，称为形式参数。

在所有函数外部声明的变量，称为全局变量。

局部作用域：在函数内部声明的变量具有局部作用域，它们只能在函数内部访问。局部变量在函数每次被调用时被创建，在函数执行完后被销毁。

全局作用域：在所有函数和代码块之外声明的变量具有全局作用域，它们可以被程序中的任何函数访问。全局变量在程序开始时被创建，在程序结束时被销毁。

块作用域：在代码块内部声明的变量具有块作用域，它们只能在代码块内部访问。块作用域变量在代码块每次被执行时被创建，在代码块执行完后被销毁。

类作用域：在类内部声明的变量具有类作用域，它们可以被类的所有成员函数访问。类作用域变量的生命周期与类的生命周期相同。

如果在内部作用域中声明的变量与外部作用域中的变量同名，则内部作用域中的变量将覆盖外部作用域中的变量。

当局部变量被定义时，系统不会对其初始化，必须自行对其初始化。定义全局变量时，系统会自动初始化为下列值
*/

// 类作用域
class MyClass {
  public:
    static int class_var; // 类作用域变量
};

int MyClass::class_var = 30;

// 变量声明
extern int a, b;
extern int c;
extern float f;
char xx;
int xxxx = 15;

int func();

int main ()
{
  // 变量定义
  int a, b;
  int c;
  float f;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  // cout << c << endl ;
 
  // f = 70.0/3.0;
  // cout << f << endl ;

  // int xxx = func();
  // cout << "xxx:\t\t" << xxx << endl;
  // cout << xxxx << endl;
  cout << "类作用域变量：" << MyClass::class_var << endl;

  return 0;
}

int func() {
  return 15;
}
