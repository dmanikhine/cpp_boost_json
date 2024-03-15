#pragma once
#include <boost/json.hpp>

boost::json::array viictojson(std::vector<std::tuple<int,int,char>> &veciic);