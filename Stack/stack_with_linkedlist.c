#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top_node = NULL;

void push() //insert in first
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = top_node;
    top_node = temp;
    printf("%d pushed into stack\n", top_node->data);
}

void pop() //delete first node
{
    struct node *temp;
    if(top_node == NULL)
    {
        printf("Stack Underflow!!");
    }
    else
    {

        temp = top_node;
        printf("%d is poped from stack\n", temp->data);
        top_node = temp->next;
        temp->next=NULL;
        free(temp);

    }
}
void top() //print top/head value
{
    if(top_node == NULL)
        printf("Stack is Empty\n");
    else
        printf("Top is: %d\n", top_node->data);
}
int main()
{
    top();
    push();
    push();
    push();
    top();
    pop();
    top();
    return 0;
}
