#pragma once

#include "command.h"
#include <string>
#include <vector>

namespace Commander{
  
  class Help : public Command {

    public:
      Help(void);
      virtual std::string execute(std::vector<std::string> arguments);
  };
};