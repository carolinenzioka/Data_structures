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
        public:
            Array(int cap);//parameter constructor
            ~Array();//destructor
            void insert(int value);
            void print()const;
    };

#endif
