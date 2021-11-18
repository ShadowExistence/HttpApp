#pragma once
#include <string>
#include <vector>

namespace Commander{

  class Command {

    public:
    // virtual == allow override in subclas (absract)
      virtual std::string execute(std::vector<std::string> arguments) = 0;
    
    public:
      void description(std::string description);
      std::string description(void);
    
    private:
      std::string _description = "";
  };
};