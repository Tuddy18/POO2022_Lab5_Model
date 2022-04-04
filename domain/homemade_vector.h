//
// Created by tuddy on 29-Mar-22.
//

#ifndef LAB5_HOMEMADE_VECTOR_H
#define LAB5_HOMEMADE_VECTOR_H

class HomemadeVector {
private:
    const int CAPACITY_BATCH_SIZE = 1024;

    int* _entities;
    int _capacity;
    int _size;

    void resize();

public:

    HomemadeVector();

    HomemadeVector(const HomemadeVector& other);

    void push_back(int e);

    int capacity();

    int size();

    int operator[](int index);

    ~HomemadeVector();
};

#endif //LAB5_HOMEMADE_VECTOR_H
