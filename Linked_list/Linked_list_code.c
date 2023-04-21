#include<stdio.h>

struct stud {
int roll;
char name[25];
int age;
struct stud *next;
};

/* A user-defined data type called “node” */
typedef struct stud node;

//function to create a linked list and return its head
node *create_list()
{
    int k, n;
    node *p, *head;
    printf ("\n How many elements to enter?");
    scanf ("%d", &n);

    for (k=0; k<n; k++)
    {
        if (k == 0) {
        head = (node *) malloc(sizeof(node));
        p = head;}
        else {
        p->next = (node *) malloc(sizeof(node));
        p = p->next;
        }
        scanf ("%d %s %d", &p->roll, p->name, &p->age);
    }
    p->next = NULL;
    return (head);
}

//function to traverse a list
void display (node *head)
{
    int count = 1;
    node *p;
    p = head;
    while (p != NULL)
    {
        printf ("\nNode %d: %d %s %d", count,
        p->roll, p->name, p->age);
        count++;
        p = p->next;
    }
    printf ("\n");
}

int main()
{





    return 0;
}