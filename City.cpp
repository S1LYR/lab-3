#include "City.h"
using namespace std;

// Конструктор для создания города только с названием
City::City(const string& name) : name(name) {}

// Конструктор для создания города с названием и путями
City::City(const string& name, const vector<pair<City*, int>>& paths) : name(name), paths(paths) {}

void City::addPath(City* city, int cost) {
    paths.emplace_back(city, cost); // Добавляем пару (город, стоимость) в вектор путей
}

string City::toString() const {
    stringstream ss;
    ss << name << ":\n"; // Заголовок с названием города

    // Перебираем все пути и добавляем их в строку
    for (const auto& path : paths) {
        ss << "  Путь в город " << path.first->name << " = " << path.second << "\n"; // city: cost
    }

    return ss.str(); // Возвращаем текстовое представление
}
