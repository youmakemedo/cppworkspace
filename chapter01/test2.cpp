#include <iostream>

using namespace std;

void Testfunc();

int main()
{

  enum color
  {
    red,
    blue = 5,
    black
  } c;
  c = blue;
  cout << c << endl;
  cout << black << endl;
  Testfunc();
  return 0;

}
class Base {
  public:
  virtual ~Base(){} // 必须要为基类加一个虚函数 否则就会报：source type is not polymorphic
};
class Derived : public Base {};

void Testfunc() 
{
  // 动态转换（dynamic cast）
  Base* ptr_base = new Derived;
  Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base); // 将基类指针转换为派生类指针
  // 静态转换
  int i = 10;
  float j = static_cast<float>(i);
  cout << sizeof(j) << endl;
  // 常量转换
  const int x = 10;
  int& r = const_cast<int&>(x); // 常量转换，将const int转换为int
  // int& r = const_cast<float&>(i); // 报错：常量转换用于将 const 类型的对象转换为非 const 类型的对象。只能用于转换掉 const 属性，不能改变对象的类型


  // 重新解释型转换（将int重新解释成float类型）
  int y = 10;
  float f = reinterpret_cast<float&>(y); // 重新解释将int类型转换为float类型
}