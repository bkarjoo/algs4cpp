#ifndef IN_H
#define IN_H

#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <fstream>

class In {
private:
  std::string file_name;
public:
  In(std::string file_name) : file_name{file_name} {
    std::ifstream file(file_name);
  }
  std::string get_filename() { return file_name; }
  std::vector<int> readAllInts() {
    auto fields = readAllStrings();
    std::vector<int> vals(fields.size());
    std::transform(fields.begin(), fields.end(), vals.begin(),
        [](std::string elem){ return std::stoi(elem); });
    return vals;
  }
  std::vector<std::string> readAllStrings() {
    std::vector<std::string> lines{};
    return lines;
  }
};


#endif /* end of include guard: IN_H */
