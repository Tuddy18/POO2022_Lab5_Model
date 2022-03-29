//
// Created by tuddy on 22-Mar-22.
//

#include "repo.h"

Repo::Repo() {
}

void Repo::addEntity(Entity e) {
    this->entities.push_back(e);
}

Entity& Repo::getEntity(int id) {
    for (Entity& e: entities) {
        if(e.getId() == id){
            return e;
        }
    }
    throw std::runtime_error("No entity with specified id found");
}


Entity& Repo::getEntity(string name) {
    for (Entity& e: entities) {
        if(e.getName() == name){
            return e;
        }
    }
    throw std::runtime_error("No entity with specified name found");
}


vector<Entity> Repo::getAll() {
    return entities;
}


Entity& Repo::updateEntity(Entity e) {
    Entity& toUpdate = getEntity(e.getId());
    toUpdate.setName(e.getName());

    return toUpdate;
}

void Repo::deleteEntity(Entity e) {
    Entity toDelete = getEntity(e.getId());
    auto it = std::find(entities.begin(), entities.end(), toDelete);
    this->entities.erase(it);
}

Entity Repo::getBiggestEntity() {
    Entity max;
    for( Entity& e: entities){
        if(max < e){
            max = e;
        }
    }

    return max;
}

vector<Entity> Repo::getMaxEqualEntitiesSequence() {
    // TODO: add implementation
    return vector<Entity>();
}


