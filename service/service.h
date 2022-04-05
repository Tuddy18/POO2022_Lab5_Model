//
// Created by tuddy on 05-Apr-22.
//

#ifndef LAB5_SERVICE_H
#define LAB5_SERVICE_H

#include "../repo/repo.h"

class Service{
private:
    Repo repo;
public:

    /**
     * Constructor
     * @param repo
     */
    Service(const Repo &repo);

    /**
     * Adds an entity to the repo
     * @param e
     */
    void addEntity(Entity e);

    /**
     * Gets all entities
     * @return
     */
    vector<Entity> getAllEntities();

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

#endif //LAB5_SERVICE_H

