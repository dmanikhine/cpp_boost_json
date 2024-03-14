#include <iostream>
#include <string>
#include "smalltools.hpp"

using namespace boost::json;

int main() {
    // Create an instance of the class
    Timap im;
    im.m_oid = 1;
    im.m_valBegin='L';    
    im.m_map={{2,'D'},{2,'S'},{5,'E'},{10,'A'},{16,'V'},{22,'L'}};

    // Convert class instance to JSON object
    object json_obj = imap_to_json(im);

    // Serialize JSON object to string
    std::string json_str = serialize(json_obj);

    // Output JSON string
    std::cout << "JSON:\n" << json_str << std::endl;

    return 0;
}
