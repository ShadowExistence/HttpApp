#include <iostream>
#include <string>
#include <vector>

#include "parser.h"
#include "Commands/help_command.h"
#include "Commands/move_command.h"
//#include "./src/Commands/CommandList.h"

using namespace Commander;

using namespace std;

int main() {
	Commander::Help help;
	Commander::Move move;
	std::vector<Commander::Command*> CommandsList = {&help, &move}; // << doesn't work
	std::vector<std::string> tokens;
	std::cout << "demo commnand parser" << std::endl;
	do{
		std::string userInput = "";
		std::cout << "cmd > ";
		std::getline(std::cin, userInput);

		tokens = Parser::split(userInput);
		bool commandFound = false;
		for(auto command : CommandsList){
			if(command->name() == tokens[0]){
				cout << command->execute(tokens);
				cout << "\n" << endl;
				commandFound = true;
				break;
			}
		}
		if(!commandFound){
			cout << "Command not found, try help for commands list." << endl;
		}
	}while(tokens[0] != "exit");
	return 0;
}


	// for(auto &token : tokens){
	// 	std::cout << token << " | ";
	// }
	// std::cout << std::endl;  //Check for parser if the tokens are found