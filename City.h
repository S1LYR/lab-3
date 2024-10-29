#ifndef CITY_H
#define CITY_H

#include <string>
#include <vector>
#include <utility> // Для std::pair
#include <sstream> // Для std::stringstream
using namespace std;

class City {
private:
    string name; // Название города
    vector<pair<City*, int>> paths; // Вектор путей к следующим городам и их стоимости

public:
    // Конструктор для создания города только с названием
    City(const string& name);

    // Конструктор для создания города с названием и путями
    City(const string& name, const vector<pair<City*, int>>& paths);

    // Метод для добавления пути
    void addPath(City* city, int cost);

    // Метод для получения текстового представления города
    string toString() const;
};

#endif  // CITY_H
