#include "Node.cpp"
#include "eventos/event.cpp"

#ifndef LIST 

#define LIST 1

// 2. ajustar a que esta lista sea doblemente enlazada, cambia el add, find, insert y el remove
template <class T>

class List {
    public:
        List();             //Constructor
        ~List();            //Destructor
        bool empty() const;           // Verifica si la lista está vacía ademas de los nodos centinelas
        T& front() const;            // Obtine el elemento despues del centinela Header
        T& back() const;            // Obtiene el elemento antes del centinela Trailer
        void addFront(const T& e); // add to front of list
        void addBack(const T& e); // add to back of list
        //void removeFront();    // remove from front
        //void removeBack(); 
    private:
        Node* header;
        Node* trailer;

    protected:
        void add(Node* node, T& element);

    public:
        List() {                    //Constructor
            header = new Node;
            trailer = new Node;
            header->next = trailer;
            trailer->prev = header;
        }
        ~List(){                            //Destructor
            while(!empty()) removeFront(); //pregunta si la lista está vacia, si no lo está elimina centinelas
            detele header;
            detele trailer;
        }
        front() const            //Obtine el elemento despues del centinela Header
        { return header->next->T; }

        back() const             // Obtiene el elemento antes del centinela Trailer
        { return trailer->prev->T; }

        add(Node* ptr, T& element){
            Node* newNode = new Node;  newNode -> element = element;    //Inmediatamente asignamos el elemento a ese nuevo nodo
            newNode->next = ptr;                                  //nuevo nodo apunte al puntero nodo
            newNode->prev = node-> prev;                          // 
            ptr -> prev -> next = ptr -> prev = ptr;
        }

        addFront(const T& element)      // Añade el elemento despues del centinela Header
        { add(header->next, element); }

        addBack(const T& element)       // Añade el elemento despues del centinela Header
        { add(trailer, element); }

        empty(){                            //Verifica si la lista está vacía
            return (header -> next == trailer)
        }
};

#endif