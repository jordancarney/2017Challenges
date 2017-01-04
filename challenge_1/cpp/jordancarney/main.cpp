#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char* argv[]) {
  std::string input;
  std::getline(std::cin, input);
  std::reverse(input.begin(), input.end());
  std::cout << input << std::endl;
  return 0;
}
