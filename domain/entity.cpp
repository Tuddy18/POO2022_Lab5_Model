//
// Created by tuddy on 22-Mar-22.
//

#include "entity.h"

Entity::Entity() {
}

Entity::Entity(const int id, const string &name) {
    this->id = id;
    this->name = name;
}

Entity::Entity(const Entity &other) {
    this->id = other.getId();
    this->name = other.getName();

//    cout << "Copy constr called\n";
}

const string &Entity::getName() const {
    return name;
}

void Entity::setName(const string &name) {
    Entity::name = name;
}

int Entity::getId() const {
    return id;
}

void Entity::setId(int id) {
    Entity::id = id;
}

bool Entity::operator==(const Entity &rhs) const {
    return name == rhs.name;
}

bool Entity::operator!=(const Entity &rhs) const {
    return !(rhs == *this);
}

ostream &operator<<(ostream &os, const Entity &entity) {
    os << "id: " << entity.id << " name: " << entity.name << endl;
    return os;
}

istream &operator>>(istream &is, Entity &entity) {
    cout << "Entity id: " << endl;
    is >> entity.id;
    cout << "Entity name: " << endl;
    is >> entity.name;
    return is;
}

bool Entity::operator<(const Entity &rhs) const {
    return name < rhs.name;
}

bool Entity::operator>(const Entity &rhs) const {
    return rhs < *this;
}

bool Entity::operator<=(const Entity &rhs) const {
    return !(rhs < *this);
}

bool Entity::operator>=(const Entity &rhs) const {
    return !(*this < rhs);
}


Entity::~Entity() {
//    cout << "Entity ID: " << this->id << " dies" << endl;
}



