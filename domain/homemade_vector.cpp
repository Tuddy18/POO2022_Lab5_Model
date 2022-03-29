//
// Created by tuddy on 29-Mar-22.
//

#include "homemade_vector.h"

void HomemadeVector::resize() {
    _capacity = _capacity + CAPACITY_BATCH_SIZE;
    int* newEntities = new int[_capacity];

    for (int i=0; i < _size; i++) {
        newEntities[i] = _entities[i];
    }
    delete[] _entities;
    _entities = newEntities;
}

HomemadeVector::HomemadeVector() {
    _capacity = CAPACITY_BATCH_SIZE;
    _entities = new int[_capacity];
    _size = 0;
}

void HomemadeVector::push_back(int e) {
    if(_size == _capacity){
        resize();
    }

    this->_entities[_size] = e;
    _size ++;
}

int HomemadeVector::capacity() {
    return _capacity;
}

int HomemadeVector::size() {
    return this->_size;
}

int HomemadeVector::operator[](int index) {
    return _entities[index];
}

HomemadeVector::~HomemadeVector() {
    delete[] _entities;
}
