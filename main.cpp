//
// Created by Rohan Datta on 2019-03-07.
//
#include "bookType.h"
#include <iostream>
using namespace std;

void Search(string info, bookType library[], int LibrarySize) { //Search Function
    int x = LibrarySize;
    int output = 0; //output is increased if a match has been found
    for (int i = 0; i < x; i++){//iterate through the library checking all different search criteria
        if (library[i].checkTitle(info)){
            library[i].bookInfo();
            output++;
        }
        else if (library[i].checkISBN(info)){
            library[i].bookInfo();
            output++;
        }
        else if (library[i].checkAuthors(info)){
            library[i].bookInfo();
            output++;
        }
        else if (library[i].checkSubjects(info)){
            library[i].bookInfo();
            output++;
        }
        if ( i == x-1 and output == 0){//only executes if the library has been searched and no matches have been found
            cout << "No books were found matching the provided description.";
        }
    }
}

int main(){bookType book1;
        book1.setTitle("Harry Potter and The Sorcerer's Stone");
        book1.setAuthors(1);
        book1.setISBN("4563219");
        book1.setCopies(10);
        book1.setPrice(15.99);
        book1.setPub("Penguin");
        book1.setYear("1997");
        book1.setSubjects(3);
        bookType book2;
        book2.setTitle("Absalom, Absalom!");
        book2.setAuthors(1);
        book2.setISBN("4563220");
        book2.setCopies(9);
        book2.setPrice(18.99);
        book2.setPub("Penguin");
        book2.setYear("1942");
        book2.setSubjects(3);
        bookType book3;
        book3.setTitle("A Game of Thrones");
        book3.setAuthors(1);
        book3.setISBN("4563221");
        book3.setCopies(11);
        book3.setPrice(24.99);
        book3.setPub("Random House");
        book3.setYear("1991");
        book3.setSubjects(3);
        bookType library[3] = {book1,book2,book3};
        Search("William Faulkner",library,3);
}

/*Enter Author's names:
J.K. Rowling
Enter Book Subject types:
Adventure
Action
Fantasy
Enter Author's names:
William Faulkner
Enter Book Subject types:
Political
Drama
Tragedy
Enter Author's names:
George R.R. Martin
Enter Book Subject types:
Fantasy
Action
Political
Book Author Match: William Faulkner
Absalom, Absalom!
By
William Faulkner
ISBN: 4563220
No. of Copies: 9
About:
Political
Drama
Tragedy

Process finished with exit code 0*/