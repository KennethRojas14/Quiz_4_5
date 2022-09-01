#include <iostream>

#ifndef NODE 

#define NODE 1

using namespace std;

// 1. pasar este nodo a doblemente enlazado
typedef string T;

class Node {
    private:
        T *element;     //Puntero que puede almacenar cualquier tipo de dato
        Node *next;   //puntero siguiente 
        Node *prev;  //puntero al anterior
        friend class List; // allow DLinkedList access
};

#endif