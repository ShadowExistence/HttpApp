#include <string>
#include "./move_command.h"


namespace Commander{

  Move::Move(void){
    this->description("Moves player in a direction");
    this->name("move");
  }

  std::string Move::execute(std::vector<std::string> args){
    return "You moved player";
  }
}