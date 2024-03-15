#include "viictojson.hpp"

    boost::json::array viictojson(std::vector<std::tuple<int,int,char>> &veciic) {
        boost::json::array json_arr;
        for (auto const& [keyBegin, keyEnd, val]: veciic){
            boost::json::array elmt;
            elmt.emplace_back(keyBegin);
            elmt.emplace_back(keyEnd);
            elmt.emplace_back(std::string {val});
            json_arr.emplace_back(elmt);            
        }        
        return json_arr;
    }