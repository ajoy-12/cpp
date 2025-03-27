#include<iostream>
using namespace std;
class LibraryItem {
public:
int id;
string title, author;
LibraryItem() {
cout<< "Enter item id: ";
cin>>id;
cout<< "Enter title: ";
cin>>title;
cout<< "Enter author name: ";
cin>>author;
}
virtual void display() {
cout<< "Item id: " << id <<endl;
cout<< "Title: " << title <<endl;
cout<< "Author name: " << author <<endl;
}
virtual ~LibraryItem() {
cout<< "A destructor in base class" <<endl;
}
};
class Book : public LibraryItem {
public:
int page;
Book() {
cout<< "Enter the number of pages: ";
cin>>page;
}
void display(){
LibraryItem::display();
cout<< "Number of pages: " << page <<endl;
}
~Book() {
cout<< "A destructor in Book derived class" <<endl;
}
};
class Magazine : public LibraryItem {
public:
int issue;
Magazine() {
cout<< "Enter the issue number: ";
cin>>issue;
}
void display(){
LibraryItem::display();
cout<< "Issue number: " << issue <<endl;
}
~Magazine() {
cout<< "A destructor in Magazine derived class" <<endl;
}
};
class Newspaper : public LibraryItem {
public:
string date;
Newspaper() {
cout<< "Enter date: ";
cin>>date;
}
void display(){
LibraryItem::display();
cout<< "Date: " << date <<endl;
}
~Newspaper() {
cout<< "A destructor in Newspaper derived class" <<endl;
}
};
int main() {
LibraryItem* items[3];
Book a;
Magazine b;
Newspaper c;
items[0] = &a;
items[1] = &b;
items[2] = &c;
for (int i = 0; i< 3; i++) {
(*items[i]).display();
cout<<endl;
}
return 0;
}
