#include "imap.hpp"
#include <iostream>

boost::json::object imap_to_json(Timap &im) {
        boost::json::object json_im;        
        json_im.emplace("m_oid", im.m_oid);
        json_im.emplace("m_valBegin", std::string {im.m_valBegin});
        boost::json::array m_map_arr;
        for (auto const& [key, val]: im.m_map) {
            boost::json::array elmt;
            elmt.emplace_back(key);
            elmt.emplace_back(std::string {val});
            m_map_arr.emplace_back(elmt);            
        }
        json_im.emplace("m_map", std::move(m_map_arr));

        return json_im;
    }