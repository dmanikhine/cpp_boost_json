#include "jsontools.hpp"
// example
// boost::json::object jobj;
// jobj.emplace("m_oid", im.m_oid);
// jobj.emplace("m_valBegin", std::string {im.m_valBegin});

boost::json::array mtojson(std::map<int, char> &m)
{

    boost::json::array arr_master;
    for (auto const &[key, val] : m)
    {
        boost::json::array elmt;
        elmt.emplace_back(key);
        elmt.emplace_back(std::string{val});
        arr_master.emplace_back(elmt);
    }
    return arr_master;
}

boost::json::array viictojson(std::vector<std::tuple<int, int, char>> &veciic)
{
    boost::json::array json_arr;
    for (auto const &[keyBegin, keyEnd, val] : veciic)
    {
        boost::json::array elmt;
        elmt.emplace_back(keyBegin);
        elmt.emplace_back(keyEnd);
        elmt.emplace_back(std::string{val});
        json_arr.emplace_back(elmt);
    }
    return json_arr;
}