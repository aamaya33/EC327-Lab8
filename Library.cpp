//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"
#include <cassert>
//implement class functions
Library :: Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

bool Library :: addBook(string bookName){
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library :: removeBook(string bookName){
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

void Library :: print(){
    for(int i = 0; i < 10; i++){
        cout << books[i] << endl;
    }
}

int main() {
    Library library;

    // Test addBook method
    assert(library.addBook("Book1") == true);
    assert(library.addBook("Book1") == false); // Adding the same book should return false
    assert(library.addBook("Book2") == true);
    assert(library.addBook("Book3") == true);
    assert(library.addBook("Book4") == true);
    assert(library.addBook("Book5") == true);
    assert(library.addBook("Book6") == true);
    assert(library.addBook("Book7") == true);
    assert(library.addBook("Book8") == true);
    assert(library.addBook("Book9") == true);
    assert(library.addBook("Book10") == true);
    assert(library.addBook("Book11") == false); // Library is full, should return false

    // Test removeBook method
    assert(library.removeBook("Book1") == true);
    assert(library.removeBook("Book1") == false); // Book already removed, should return false
    assert(library.removeBook("Nonexistent Book") == false); // Book does not exist, should return false

    // Test print method by manually checking output

    return 0;
}
