#pragma once
#include "./json.hpp"
#include <iostream>
#include <string>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Option.hpp>


namespace HttpAction{

	class HttpAct{
			

		public:
			HttpAct(void);
			nlohmann::json get(std::string http, std::string argument="/");
			nlohmann::json post(std::string http);
		
		private:
			curlpp::Cleanup cleanup;
    	curlpp::Easy request;
	};
};