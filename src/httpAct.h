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
			HttpAct(std::string http);
			nlohmann::json get(std::string argument="/");
			void post(std::string argument="/");
		
		public:
			void httpSet(std::string http);
			std::string httpGet(void);

		private:
			curlpp::Cleanup cleanup;
    	curlpp::Easy request;
			std::string _http;
	};
};