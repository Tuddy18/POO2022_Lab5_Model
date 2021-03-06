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

HomemadeVector::HomemadeVector(const HomemadeVector& other) {
    this->_capacity = other._capacity;
    this->_size = other._size;

    auto* newEntities = new int[_capacity];

    for (int i = 0; i < _size; i++) {
        newEntities[i] = other._entities[i];
    }
    this->_entities = newEntities;
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

HomemadeVector &HomemadeVector::operator=(const HomemadeVector &other) {
    this->_capacity = other._capacity;
    this->_size = other._size;
    this->_entities = other._entities;

    if(this->_entities != nullptr){
        delete[] this->_entities;
    }

    this->_entities = new int[other._capacity];

    for (int i = 0; i < _size; i++) {
        _entities[i] = other._entities[i];
    }

    return *this;
}
