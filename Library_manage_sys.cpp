#include<iostream>
#include<string.h>
#include<stdlib.h>
#include <fstream>

using namespace std;

class library
{
private:
    int bookId ;
    string book_name;
    string Author;

public:
    library(); //constructer 

    void Add_book();
    void saveToFile();
    void update_book();
    void delete_book();
    
};

library::library() {
    bookId = 0;
    book_name = "";
    Author = "";
}



void library::Add_book()
{
    cout << "Enter book NO : "<<endl;
    cin >>bookId;

    cout << "enter book name: "<< endl;
    cin.ignore();
    getline(cin , book_name);

    cout << "Enter Book Author name : "<<endl;
    cin.ignore();
    getline(cin, Author);


}

void library:: saveToFile() {
     ofstream file("books.txt", ios::app);

     file << bookId << ",        "
         << book_name<< ",         " ;
    file << Author  << endl;

     file.close();

     cout << "Book saved successfully!\n";
}
// library::update_book(){

// }
// library::delete_book(){

// }

int main(){
    cout <<" =========== LIBRARY MANAGMENT SYSTEM ==========\n\n "<< endl;
    cout << "1. Add Book Deatils "<<endl;
    cout << "2. Update book  Deatils "<<endl;
    cout << "3. Delete Book Deatils "<<endl;

    library ll;
    ll.Add_book();
    ll.saveToFile();

    return 0;
    
}