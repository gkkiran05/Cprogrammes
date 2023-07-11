//creating linked list and displaying values
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
        new = (struct node*)malloc(sizeof(struct node));
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
        printf("Enter c - continue, e - exit:");
        scanf(" %c", &ch);
    }while(ch == 'c');
    
    //printing the values
    
    struct node *temp = head;
    
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    
    return 0;
}
    
        

/*
         out put
------------------------
Enter The Value:10
Enter c - continue, e - exit:c
Enter The Value:20
Enter c - continue, e - exit:c
Enter The Value:30
Enter c - continue, e - exit:c
Enter The Value:40
Enter c - continue, e - exit:c
Enter The Value:50
Enter c - continue, e - exit:e
10 20 30 40 50


*/
