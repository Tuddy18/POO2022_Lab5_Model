//
// Created by tuddy on 22-Mar-22.
//

#ifndef LAB5_REPO_H
#define LAB5_REPO_H

#include <vector>
#include <algorithm>
#include "../domain/entity.h"

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
     * Gets all entities
     * @return
     */
    vector<Entity> getAll();

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
};

#endif //LAB5_REPO_H
