// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_HTTP_CLIENT_HPP_
#define INCLUDE_HTTP_CLIENT_HPP_

#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/connect.hpp>
#include <boost/config.hpp>
#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

using nlohmann::json;

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;

class client
{
 public:
  client();
  void create_req();
  void start();
  ~client();
 private:
  std::string require = "";
};

#endif // INCLUDE_HTTP_CLIENT_HPP_
