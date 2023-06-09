#include <iostream>

using namespace std;

// 指针
/*
指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。
就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：type *var-name;
*/

// 引用
/*
引用很容易与指针混淆，它们之间有三个主要的不同：

不存在空引用。引用必须连接到一块合法的内存。
一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
引用必须在创建时被初始化。指针可以在任何时间被初始化。
*/


int main () {
  int  var = 20;   // 实际变量的声明
  int  *ip;        // 指针变量的声明

  ip = &var;       // 在指针变量中存储 var 的地址

  int i = 17;

  int&  r = i; //为 i 声明引用变量




  return 0;
}