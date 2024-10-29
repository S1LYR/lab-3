#include "Name.h"
using namespace std;

Name::Name(const string& surname,
           const string& firstName,
           const string& patronymic)
    : surname(surname), firstName(firstName), patronymic(patronymic) {}

string Name::toString() const {
    string result;

    if (!surname.empty()) result += surname;
    if (!firstName.empty()) {
        if (!result.empty()) result += " ";
        result += firstName;
    }
    if (!patronymic.empty()) {
        if (!result.empty()) result += " ";
        result += patronymic;
    }

    return result;
}
