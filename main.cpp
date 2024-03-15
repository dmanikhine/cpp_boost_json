#include <iostream>
#include <string>
#include "jsontools.hpp"

using namespace boost::json;

int main()
{
    std::cout << std::endl;
    {
        std::map<int, char> mymap{{2, 'D'}, {2, 'S'}, {5, 'E'}, {10, 'A'}, {16, 'V'}, {22, 'L'}};
        boost::json::array jarr = mtojson(mymap);
        std::string json_str = serialize(jarr);
        std::cout << "JSON map:\n"
                  << json_str << std::endl;
    }
    std::cout << std::endl;
    {
        std::vector<std::tuple<int, int, char>> myviic{{1, 2, 'A'}, {3, 4, 'B'}, {5, 6, 'C'}, {7, 8, 'D'}};
        boost::json::array jarr = viictojson(myviic);
        std::string json_str = serialize(jarr);
        std::cout << "JSON viic:\n"
                  << json_str << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
