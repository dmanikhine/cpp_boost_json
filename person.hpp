#pragma once
#include <string>
#include <boost/json.hpp>

// using namespace boost::json;

class Person {
public:
 friend boost::json::object person_to_json(Person &p);

    std::string name;
    int age;
    std::string city;
    bool married;
};