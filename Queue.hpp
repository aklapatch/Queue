//Queue.hpp
//header for Queue class
//Copyright Aaron Klapatch 2018 

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <vector>
#include <iostream>

template <typename T>
class Queue {
    private:
        std::vector<T> m_data;

    public:

        /// Constructs a queue with size 0
        Queue() {}

        /// Does not do anything really.
        ~Queue() {} 

        /// Pushes argument into queue's first position
        void push(T);

        /// Returns first item in queue.
        T pop();
};

#include "Queue.tpp"

#endif // QUEUE_HPP