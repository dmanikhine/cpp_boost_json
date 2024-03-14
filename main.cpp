#include <boost/json.hpp>
#include <iostream>
#include <string>

using namespace boost::json;

class Person {
public:
    std::string name;
    int age;
    std::string city;
    bool married;

    // Method to convert the class instance to a JSON object
    object to_json() const {
        object obj;
        obj.emplace("name", name);
        obj.emplace("age", age);
        obj.emplace("city", city);
        obj.emplace("married", married);
        return obj;
    }
};

int main() {
    // Create an instance of the class
    Person person;
    person.name = "John";
    person.age = 30;
    person.city = "New York";
    person.married = true;

    // Convert class instance to JSON object
    object json_obj = person.to_json();

    // Serialize JSON object to string
    std::string json_str = serialize(json_obj);

    // Output JSON string
    std::cout << "JSON:\n" << json_str << std::endl;

    return 0;
}
