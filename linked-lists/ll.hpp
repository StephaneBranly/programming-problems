#include <iostream>

// Template class T
template<class T>

// Simply linked elements
class SimplyElement{
    private:
        SimplyElement* next;
        T        value; 
    public:
        // Constructor
        SimplyElement(const T& val, SimplyElement* nxt=nullptr): value(val), next(nxt)  {}

        // Getters
        SimplyElement<T>* next() const { return next; }
        const T& value() const { return value; }  

        // Setters
        void setNext(SimplyElement* nxt) { next = nxt; }
        void setValue(T& val) { value = val; }

        // Destructor
        ~SimplyElement() {};
};

// Template class T
template<class T>
// Doubly linked elements
class DoublyElement{
    private:
        DoublyElement* next, previous;
        T              value;

    public:
        // Constructor
        DoublyElement(const T& val, DoublyElement* nxt=nullptr, DoublyElement* prv=nullptr): value(val), next(nxt), previous(prv)  {}

        // Getters
        DoublyElement<T>* next() const { return next; }
        DoublyElement<T>* previous() const { return previous; }
        const T& value() const { return value; }  

        // Setters
        void setNext(DoublyElement* nxt) { next = nxt; }
        void setPrevious(DoublyElement* prv) { previous = prv; }
        void setValue(T& val) { value = val; }

        // Destructor
        ~DoublyElement() {};

}