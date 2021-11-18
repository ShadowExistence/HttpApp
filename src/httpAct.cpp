#include "json.hpp"
#include <string>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Option.hpp>

#include "httpAct.h"

namespace HttpAction{

  HttpAct::HttpAct(std::string http){
    cURLpp::initialize(CURL_GLOBAL_ALL);
    _http = http;
  }

  nlohmann::json HttpAct::get(std::string argument){

    std::ostringstream stream;
    request.setOpt(curlpp::Options::Url(_http));
    stream << request;

    cURLpp::terminate();

    nlohmann::json js = nlohmann::json::parse(stream.str());
    return js;
    
    //default catch
    // catch(curlpp::RuntimeError & e)
    // {
    //   e.what shows human readable error
    //   std::cout << e.what() << std::endl;
    // }

    // catch(curlpp::LogicError & e)
    // {
    //   std::cout << e.what() << std::endl;
    // }

  } 

  void HttpAct::post(std::string argument){
    //later change the argument to json

    request.setOpt(new curlpp::options::Url(_http)); 

    std::list<std::string> header; 
    header.push_back("Content-Type: application/json");

    request.setOpt(new curlpp::options::HttpHeader(header)); 
    request.setOpt(new curlpp::options::PostFields(argument));
    request.setOpt(new curlpp::options::PostFieldSize(argument.size()));
    
    request.perform();
    cURLpp::terminate();
  }



  void HttpAct::httpSet(std::string http) {_http = http;}
  std::string HttpAct::httpGet(void) {return _http;}
};