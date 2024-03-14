#include "person.hpp"

boost::json::object person_to_json(Person &p) {
        boost::json::object obj;
        obj.emplace("name", p.name);
        obj.emplace("age", p.age);
        obj.emplace("city", p.city);
        obj.emplace("married", p.married);
        return obj;
    }