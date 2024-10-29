#include "Person.h"
using namespace std;

Person::Person(const Name& name, int height)
    : name(name), height(height) {}

string Person::toString() const {
    return name.toString() + ", рост: " + to_string(height);
}
