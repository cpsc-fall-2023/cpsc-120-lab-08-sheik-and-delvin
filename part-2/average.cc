// Sheikh Sabah Ali
// sheiksabah.csu@fullerton.edu
// @sheiksabah
// Partners: @delvincao

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  int size = static_cast<int>(arguments.size() - 1);
  if (size < 1) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }

  bool first{true};
  float sum{0};
  for (const std::string& number : arguments) {
    if (first == true) {
      first = false;
    } else {
      float num_float{0};
      num_float = std::stof(number, nullptr);
      sum += num_float;
    }
  }
  float average{0};
  average = sum / static_cast<float>(size);

  std::cout << "average = " << average << "\n";

  return 0;
}