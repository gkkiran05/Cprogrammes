//programme to add element into linked list at starting 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*new, *head, *tail;

int main()
{
    int value;
    char ch;
    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter The Value:");
        scanf("%d", &value);
        
        new -> data = value;
        new -> next = NULL;
        
        if(head == NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail -> next = new;
            tail = new;
        }
        printf("Enter c for continue , e for exit:");
        scanf(" %c", &ch);
    }while(ch == 'c');
    
    //printing the list
    struct node *temp = head;
    printf("Elements before insertion\n");
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    
    //insertion of element at starting position
    printf("Enter The value to be insert:");
    scanf("%d", &value);
    new = (struct node*)malloc(sizeof(struct node));
    new -> data = value;
    new -> next = head;
    head = new;
    
    //printing the elements after insertion
    printf("Elements After insertion\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    
    return 0;
}


/*
 *
 *
        out put
-----------------------
Enter The Value:20
Enter c for continue , e for exit:c
Enter The Value:30
Enter c for continue , e for exit:c
Enter The Value:40
Enter c for continue , e for exit:c
Enter The Value:50
Enter c for continue , e for exit:e
Elements before insertion
20 30 40 50
Enter The value to be insert:10
Elements After insertion
10 20 30 40 50



*/
