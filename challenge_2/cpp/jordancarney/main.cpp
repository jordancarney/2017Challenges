#include <iostream>
#include <vector>
#include <map>

#define NOT_FOUND -1

int findFirstNonRepeating(std::vector<int> v) {
  std::map<int, int> counts;
  for(auto i = v.begin(); i != v.end(); i++) {
    auto it = counts.find(*i);
    if (it != counts.end()) {
      it->second += 1;
    } else {
      counts.insert(std::make_pair(*i, 1));
    }
  }
  for (auto i = counts.begin(); i != counts.end(); i++) {
    if (i->second == 1) {
      return i->first;
    }
  }
  return NOT_FOUND;
}

int main(int argc, char* argv[]) {
  // first test
  std::vector<int> input0 = {2,3,4,2,3,5,4,6,4,6,9,10,9,8,7,8,10,7};
  std::cout << findFirstNonRepeating(input0) << std::endl;

  // second test
  std::vector<int> input1 = {1,2,3,1,2};
  std::cout << findFirstNonRepeating(input1) << std::endl;

  return 0;
}
