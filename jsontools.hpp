#pragma once
#include <boost/json.hpp>
#include <map>

boost::json::array mtojson(std::map<int,char> &m);
