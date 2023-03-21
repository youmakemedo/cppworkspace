#include <iostream>

using namespace std;

extern int testfunc();
extern int func();

// c++ 常量
/*
整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。

整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。后缀可以是大写，也可以是小写，U 和 L 的顺序任意。

把常量定义为大写字母形式，是一个很好的编程实践。
*/
#define LENGTH 212         // 合法的
#define WIDTH 215u        // 合法的
#define HIGH 0xFeeL      // 合法的
// 078         // 非法的：8 不是八进制的数字
// 032UU       // 非法的：不能重复后缀


// c++修饰符类型
/*
signed：表示变量可以存储负数。对于整型变量来说，signed 可以省略，因为整型变量默认为有符号类型。

unsigned：表示变量不能存储负数。对于整型变量来说，unsigned 可以将变量范围扩大一倍。

short：表示变量的范围比 int 更小。short int 可以缩写为 short。

long：表示变量的范围比 int 更大。long int 可以缩写为 long。

long long：表示变量的范围比 long 更大。C++11 中新增的数据类型修饰符。

float：表示单精度浮点数。

double：表示双精度浮点数。double 可以缩写为 long double。

bool：表示布尔类型，只有 true 和 false 两个值。

char：表示字符类型。

wchar_t：表示宽字符类型，可以存储 Unicode 字符。*/



// c++中的类型限定符
/*
const	const 定义常量，表示该变量的值不能被修改。。
volatile	修饰符 volatile 告诉该变量的值可能会被程序以外的因素改变，如硬件或其他线程。
restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
mutable	表示类中的成员变量可以在 const 成员函数中被修改。
static	用于定义静态变量，表示该变量的作用域仅限于当前文件或当前函数内，不会被其他文件或函数访问。
register	用于定义寄存器变量，表示该变量被频繁使用，可以存储在CPU的寄存器中，以提高程序的运行效率。
*/

/*
void example_function(register int num) {
    // register 关键字建议编译器将变量 num 存储在寄存器中
    // 以提高程序执行速度
    // 但是实际上是否会存储在寄存器中由编译器决定
}
*/



int main() {
  int x = testfunc();
  int xx = func();
  cout << x << endl;
  cout << xx << endl;   // 会报错  不能存在多个main函数
  return 0;
}