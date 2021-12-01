#include "help_command.h"
#include <string>
namespace Commander{

  Help::Help(void){

    this->description("Test if this thing even works > Help Command");
    this->name("help");
  }


  std::string Help::execute(std::vector<std::string> arguments){

    return "Place description of all the commands";
  }
}