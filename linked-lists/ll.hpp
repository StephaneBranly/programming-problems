#include <iostream>

// Template class T
template<class T>
class Element{
    private:
        Element* next;
        T        value; 
    public:
        // Constructor
        Element(const T& val, Element* nxt=nullptr): value(val), next(nxt)  {}

        // Getters
        Element<T>* getNext() const { return next; }
        const T& getValue() const { return value; }  

        // Setters
        void setNext(Element* nxt) { next = nxt; }
        void setValue(T& val) { value = val; }

        // Destructor
        ~Element() {};
};