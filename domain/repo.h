//
// Created by tuddy on 22-Mar-22.
//

#ifndef LAB5_REPO_H
#define LAB5_REPO_H

#include <vector>
#include <algorithm>
#include "entity.h"

using namespace std;

class Repo{
private:
//    Entity entities[1];
    vector<Entity> entities;

public:

    /**
     * Constructor
     */
    Repo();

    // CREATE
    /**
     * Adds an entity to the repo
     * @param e
     */
    void addEntity(Entity e);

    // READ
    /**
    * Gets an entity by id
    * @param id the entity id
    * @return the entity
    */
    Entity& getEntity(int id);

    /**
     * Gets an entity with specific name
     * @param name the name
     * @return the entity
     */
    Entity& getEntity(string name);

    // UPDATE
    /**
     * Updates an entity in the repo
     * @param e
     */
    Entity& updateEntity(Entity e);

    // DELETE
    /**
     * Deletes an entity from the repo
     * @param e
     */
    void deleteEntity(Entity e);

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
