//
// Created by tuddy on 22-Mar-22.
//

#ifndef LAB5_ENTITY_H
#define LAB5_ENTITY_H

#include <string>
#include <iostream>

using namespace std;

class Entity{
private:
    int id;

    string name;
public:
    Entity();

    Entity(int id);

    Entity(int id, const string &name);

    Entity(const Entity& other);

    int getId() const;

    // Purposely left out setId() - Entities should get an ID on creation and stick to it

    const string &getName() const;

    void setName(const string &name);

    bool operator==(const Entity &rhs) const;

    bool operator!=(const Entity &rhs) const;

    friend ostream &operator<<(ostream &os, const Entity &entity);

    virtual ~Entity();
};

#endif //LAB5_ENTITY_H
