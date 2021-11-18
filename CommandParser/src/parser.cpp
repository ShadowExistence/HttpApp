#include "parser.h"
#include <string>
#include <vector>

namespace Commander{

  std::vector<std::string> Parser::split(std::string line, std::string delimiter){
  
    // create vector tokens
    std::vector<std::string> tokens;

    std::string token;
    size_t iDelimiter;
    size_t iStart = 0;

    do {
      iDelimiter = line.find(delimiter, iStart);

      if(iDelimiter != std::string::npos) {
        
        token = line.substr(iStart, iDelimiter-iStart);
        iStart = iDelimiter+1;

      }
      else{
        token = line.substr(iStart, line.length()-iStart);
      }

      //if multiple spaces are in the line
      if(token != delimiter) tokens.push_back(token);
    } while (iDelimiter != std::string::npos);


    return tokens;
  };

  
};
