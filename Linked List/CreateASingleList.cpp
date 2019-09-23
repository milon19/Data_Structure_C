#include<cstdio>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;

void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    int data;
    scanf("%d", &data);
    temp->data = data;
    if(head == NULL)
        head = temp;
    else
    {
        struct node* p;
        p = head;
        while(p->next != NULL)
            p = p->next;
        p->next = temp;
    }

}

void display()
{
    struct node* p;
    p = head;
    while(p->next != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    append();
    append();
    append();
    append();
    append();
    append();
    display();
    return 0;
}
