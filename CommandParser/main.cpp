#include <iostream>
#include <string>
#include <vector>

#include "./src/parser.h"
#include "./src/Commands/help_command.h"

using namespace Commander;

using namespace std;

int main() {

	std::cout << "demo commnand parser" << std::endl;

	std::string userInput = "";
	std::cout << "cmd > ";
	std::getline(std::cin, userInput);

	std::vector<std::string> tokens = Parser::split(userInput);

	// for(auto &token : tokens){
	// 	std::cout << token << " | ";
	// }
	// std::cout << std::endl; 

	Commander::HelpCommand help;
	if(tokens[0] == "help") std::cout << help.execute(tokens) << std::endl;
	return 0;
}