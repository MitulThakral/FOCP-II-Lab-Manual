#include<iostream>
using namespace std;
class Book
{
    string title;
	string author;
	double price;
    public:
    void inputDetails();
    void displayDetails();
};
void Book::inputDetails()
{
    cout<<"enter the title author name and the price of book";
    cin>>title>>author>>price;
}
 void Book::displayDetails()
 {
    cout<<"title of the book "<<title<<endl;
    cout<<"author of the book "<<author<<endl;
    cout<<"price of the book "<<price<<endl;
 }
 int main()
 {
    Book b1;
    b1.inputDetails();
    b1.displayDetails();
 }
