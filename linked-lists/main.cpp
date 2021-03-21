#include <iostream>

#include "ll.hpp"


using namespace std;

int main(){
    Element<int> a(1), b(2,&a);    

    cout<<b.getNext()->getValue();
    return 1;
}