#include "command.h"

namespace Commander{

  void Command::description(std::string description){

    _description = description;
  }

  std::string Command::description(void){
    return _description;
  }

};