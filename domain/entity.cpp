//
// Created by tuddy on 22-Mar-22.
//

#include "entity.h"

Entity::Entity() {}

Entity::Entity(int id) : id(id) {}

Entity::Entity(int id, const string &name) : id(id), name(name) {}

Entity::Entity(const Entity &other) {
    this->name = other.getName();
    // Here you can choose whether you want to copy the ID or generate a new one
    this->id = other.getId();
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

bool Entity::operator==(const Entity &rhs) const {
    return name == rhs.name;
}

bool Entity::operator!=(const Entity &rhs) const {
    return !(rhs == *this);
}

ostream &operator<<(ostream &os, const Entity &entity) {
    os << "id: " << entity.id << " name: " << entity.name;
    return os;
}

Entity::~Entity() = default;

