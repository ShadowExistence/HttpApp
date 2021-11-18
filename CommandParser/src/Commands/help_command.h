#pragma once

#include "command.h"
#include <string>
#include <vector>

namespace Commander{
  
  class HelpCommand : Command {

    public:
      HelpCommand(void);
      virtual std::string execute(std::vector<std::string> arguments);
          
  };
};