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
  std::ifstream file;
public:
  In(std::string file_name) : file_name{file_name} {
    file.open(file_name);
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
    // read the file line by line saving it into the vector
    std::string temp;
    while (file >> temp)
      lines.push_back(temp);
    return lines;
  }
};


std::vector<int> readInts(std::string filename) {
  In in(filename);
  return in.readAllInts();
}


#endif /* end of include guard: IN_H */
