#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class library
{
private:
    int book_no ;
    string book_name;
    string Author;

public:
    library();

    void Add_book();
    void update_book();
    void delete_book();
    
};

library::library() {
    book_no = 0;
    book_name = "";
    Author = "";
}



void library::Add_book()
{
    cout << "Enter book NO : "<<endl;
    cin >>book_no;

    cout << "enter book name: "<< endl;
    cin.ignore();
    getline(cin , book_name);

    cout << "Enter Book Author name : "<<endl;
    cin.ignore();
    getline(cin, Author);


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

    return 0;
    
}