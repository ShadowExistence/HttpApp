#pragma once

#include <string>
#include "./command.h"


namespace Commander{

  class Move : public Command{

    public:
      Move(void);
      virtual std::string execute(std::vector<std::string> arguments);

  };
};