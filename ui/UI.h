//
// Created by tuddy on 05-Apr-22.
//

#ifndef LAB5_UI_H
#define LAB5_UI_H

#include "../service/service.h"

class UI{
private:
    Service service;

    void printEntities(vector<Entity> entities);

    void printOptions();

public:

    UI(const Service &service);

    void readEntity();

    void displayAllEntities();

    void displayBiggestEntity();

    void runMenu();
};

#endif //LAB5_UI_H
