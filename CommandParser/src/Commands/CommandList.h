#pragma once

#include <vector>
#include <string>
#include "./command.h"
#include "./help_command.h"
#include "./move_command.h"

Commander::Help help;
Commander::Move move;
std::vector<Commander::Command> CommandsList = {
  help,
  move,
};

