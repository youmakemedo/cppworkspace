#include <iostream>

using namespace std;

#include <iomanip>
using std::setw;

// C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 \0 终止的一维字符数组。
/*
1	strcpy(s1, s2);
复制字符串 s2 到字符串 s1。
2	strcat(s1, s2);
连接字符串 s2 到字符串 s1 的末尾。连接字符串也可以用 + 号，例如:
string str1 = "runoob";
string str2 = "google";
string str = str1 + str2;
3	strlen(s1);
返回字符串 s1 的长度。
4	strcmp(s1, s2);
如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
5	strchr(s1, ch);
返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
6	strstr(s1, s2);
返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置
*/

int main () {

  int n[10];

  for (int i = 0; i < 10; i++)
  {
    n[i] = i + 100;
  }
  cout << "Element" << setw(13) << "value" << endl;

  for (int j = 0; j < 10; j++)
  {
    cout << setw(5) << j << setw(13) << n[j] << endl;
  }
    return 0;
}