#include "jsontools.hpp"
//example
//boost::json::object jobj;        
//jobj.emplace("m_oid", im.m_oid);
//jobj.emplace("m_valBegin", std::string {im.m_valBegin});


boost::json::array mtojson(std::map<int,char> &m) {
        
        boost::json::array arr_master;
        for (auto const& [key, val]: m) {
            boost::json::array elmt;
            elmt.emplace_back(key);
            elmt.emplace_back(std::string {val});
            arr_master.emplace_back(elmt);            
        }
        return arr_master;
    }