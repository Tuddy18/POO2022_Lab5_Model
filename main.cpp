#include <iostream>
#include "domain/entity.h"
#include "domain/repo.h"

using namespace std;

int main() {
    Repo repo;

    Entity e1(1, "1st entity");
    Entity e2(2, "2nd entity");
    Entity e3(3, "3rd entity");

    repo.addEntity(e1);
    repo.addEntity(e2);
    repo.addEntity(e3);

    cout << repo.getBiggestEntity();

    e2.setName("42");
    cout << repo.getBiggestEntity();

    repo.updateEntity(e2);
    cout << repo.getBiggestEntity();

    repo.deleteEntity(e2);
    cout << repo.getBiggestEntity();

    return 0;
}
