#include <iostream>
#include <string>
#include "jsontools.hpp"

using namespace boost::json;

int main() {
    // Create an instance of the class
    
    std::map<int,char> mymap={{2,'D'},{2,'S'},{5,'E'},{10,'A'},{16,'V'},{22,'L'}};
    
    boost::json::array jarr = mtojson(mymap);

    // Serialize JSON object to string
    std::string json_str = serialize(jarr);

    // Output JSON string
    std::cout << "JSON:\n" << json_str << std::endl;

    return 0;
}
