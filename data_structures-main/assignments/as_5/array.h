/******************************************************
 The interface file for the class defining the Array class
 ******************************************************/
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;

// Class definition
    class Array
    {
        private:
            int* arr;//
            int capacity;
            int size;
            void moveTowardFront(int index);
            void moveTowardEnd(int index);
        public:
            Array(int cap);//parameter constructor
            ~Array();//destructor
            void remove(int value);
            void insert(int value);
            void print()const;
    };

#endif
