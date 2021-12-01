#include "command.h"

namespace Commander{

  void Command::description(std::string description){

    _description = description;
  }

  std::string Command::description(void){
    return _description;
  }

  void Command::name(std::string name){

    _name = name;
  }

  std::string Command::name(void){
    return _name;
  }

};