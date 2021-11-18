#include "help_command.h"

namespace Commander{

  HelpCommand::HelpCommand(void){

    this->description("Test if this thing even works > Help Command");
  }


  std::string HelpCommand::execute(std::vector<std::string> arguments){

    return "Place description of all the commands";
  }
}