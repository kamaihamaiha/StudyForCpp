#include "iostream"
/**
 * 练习
 * @return
 */
int main(){

  // 练习 2.3 读程序写结果
  unsigned u = 10, u2 = 42;

  std::cout << u2 - u << std::endl;
  // 正确，但结果是 -32 取模后的余数值: 4294967264
  std::cout << u - u2 << std::endl;

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl; // 32
  std::cout << i - i2 << std::endl; // -32
  std::cout << i - u << std::endl;  // 0
  std::cout << u - i << std::endl;  // 0

  return 0;
}
