#pragma once
#include <boost/json.hpp>
#include <map>
#include <vector>

boost::json::array mtojson(std::map<int,char> &m);
boost::json::array viictojson(std::vector<std::tuple<int,int,char>> &veciic);
