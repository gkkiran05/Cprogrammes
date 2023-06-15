/*Write a program that defines a structure called "Book" 
with members title (string), author (string), and price (float).
Create an array of structures to store information for multiple books.
Prompt the user to enter details for each book and display the inventory with book details.*/
#include <stdio.h>

struct Book
{
    char title[30];
    char author[20];
    float price;
};

int main()
{
    int n;
    printf("Enter the number of books to store: ");
    scanf("%d", &n);
    struct Book books[n];

    // Prompt the user to enter details for each book
    for (int i = 0; i < n; i++)
    {
        printf("Enter the book title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Enter the author name: ");
        scanf(" %[^\n]", books[i].author);
        printf("Enter the book price: ");
        scanf("%f", &books[i].price);
        printf("\n");
    }

    // Display the inventory with book details
    printf("Inventory:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Book Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Book Price: %.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}


/*
 *   out put
 *---------------
Enter the number of books to store: 2
Enter the book title: The Pragmatic Programmer
Enter the author name: Andrew Hunt
Enter the book price: 1234

Enter the book title: Clean Code
Enter the author name:  Robert C. Martin
Enter the book price: 1233

Inventory:
Book Title: The Pragmatic Programmer
Author: Andrew Hunt
Book Price: 1234.00

Book Title: Clean Code
Author: Robert C. Martin
Book Price: 1233.00

*/

