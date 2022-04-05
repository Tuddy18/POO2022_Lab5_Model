#include <iostream>
#include "domain/entity.h"
#include "repo/repo.h"
#include "service/service.h"
#include "ui/UI.h"
#include <queue>

using namespace std;

int main() {
    Repo repo;
    Service service(repo);
    UI ui(service);

    ui.runMenu();

    return 0;
}
