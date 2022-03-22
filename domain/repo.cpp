//
// Created by tuddy on 22-Mar-22.
//

#include "repo.h"

Repo::Repo() {
    this->entities = vector<Entity>();
}

Entity Repo::getEntity(int id) {
    return this->entities[id];
}

void Repo::addEntity(Entity e) {
    this->entities.push_back(e);
}

Entity Repo::getBiggestEntity() {
    // TODO: add implementation
    return Entity();
}

vector<Entity> Repo::getMaxEqualEntitiesSequence() {
    // TODO: add implementation
    return vector<Entity>();
}


