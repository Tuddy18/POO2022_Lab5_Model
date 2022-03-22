//
// Created by tuddy on 22-Mar-22.
//

#ifndef LAB5_REPO_H
#define LAB5_REPO_H

#include <vector>
#include "entity.h"

using namespace std;

class Repo{
private:
    vector<Entity> entities;

public:

    /**
     * Constructor
     */
    Repo();

    /**
    * Gets an entity by id
    * @param id the entity id
    * @return the entity
    */
    Entity getEntity(int id);

    /**
     * Adds an entity to the repo
     * @param e
     */
    void addEntity(Entity e);

    /**
     * Returns the biggest entity from the repo
     * Compares entities using operator==
     * @return the biggest entity
     */
    Entity getBiggestEntity();

    /**
     * Returns the maximal sequence of equal entities
     * Assumes entities are ordered by ID
     * @return a vector of equal entities
     */
    vector<Entity> getMaxEqualEntitiesSequence();
};

#endif //LAB5_REPO_H
