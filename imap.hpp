#pragma once
#include <string>
#include <boost/json.hpp>
#include <map>

// using namespace boost::json;

class Timap {
public:
 friend boost::json::object imap_to_json(Timap &im);

    int m_oid; //object id
    char  m_valBegin;    
    std::map <int,char> m_map;
};