#pragma once
#include <string>
#include <vector>

namespace Commander {

  class Parser{

    public:
      static std::vector<std::string> split(std::string line, std::string delimiter=" ");


  };
};