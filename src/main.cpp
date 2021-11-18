#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Infos.hpp>

#include "json.hpp"
#include <sstream>
#include <iostream>
#include "httpAct.h"

using namespace HttpAction;
using namespace std;

int main() {

  std::string url = "http://localhost:3000";
  HttpAction::HttpAct tester(url);
  

  nlohmann::json js = tester.get();
  
  cout << "message: " << js["message"] << endl;

  tester.post("{\"message\": \"Hello World\"}");
  

  return 0;
}

