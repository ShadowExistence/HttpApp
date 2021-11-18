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

  HttpAction::HttpAct tester;
  std::string url = "http://localhost:3000";

  nlohmann::json js = tester.get(url);
  
  cout << "message: " << js["message"] << endl;

  return 0;
}







    // curlpp::Cleanup cleanup;
    // curlpp::Easy request;

    // std::ostringstream stream;
    // curlpp::options::WriteStream writeStream(&stream);

    // // GET request
    // request.setOpt<curlpp::options::Url>("http://localhost:3000");

    // request.setOpt(writeStream);
    // request.perform();

    // nlohmann::json js = nlohmann::json::parse(stream.str());
    // std::cout << "message: " << js["message"] << std::endl;
    // std::cout << "from: " << js["from"] << std::endl;

    // // POST resquest
    // std::string postString = "{\"message\": \"hello from client\"}";

    // std::list<std::string> header;
    // header.push_back("Content-Type: application/json");

    // request.setOpt(new curlpp::options::HttpHeader(header));

    // request.setOpt(new curlpp::options::PostFields(postString));
    // request.setOpt(new curlpp::options::PostFieldSize(postString.size()));

    // request.perform();

    // Bad request handling
    // std::ostringstream stream2;
    // curlpp::options::WriteStream writeStream2(&stream2);

    // curlpp::Easy badRequest;
    // badRequest.setOpt<curlpp::options::Url>("http://localhost:3000/notfound");

    // badRequest.setOpt(writeStream2);
    // badRequest.perform();

    // switch (curlpp::infos::ResponseCode::get(badRequest)){
    //   case 404:{
    //     nlohmann::json json = nlohmann::json::parse(stream2.str());
    //     std::cout << "404 Not Found" << std::endl;
    //     std::cout << json["message"] << std::endl;
    //   }
    // }
