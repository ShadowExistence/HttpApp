#include "json.hpp"
#include <string>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Option.hpp>

#include "httpAct.h"

namespace HttpAction{

  HttpAct::HttpAct(void){
    cURLpp::initialize(CURL_GLOBAL_ALL);
  }

  nlohmann::json HttpAct::get(std::string http, std::string argument){


    std::ostringstream stream;
    curlpp::options::WriteStream writeStream(&stream);

    request.setOpt(writeStream);
    request.setOpt(curlpp::Options::Url(http));
    request.perform();
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
};