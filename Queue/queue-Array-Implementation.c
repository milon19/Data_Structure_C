#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max], front = 0, rear = 0;
int menu();
void dequeue();
void enqueue();
void display();
int main()
{
    int ch;
    printf("\nQueues using Arrays\n");
    do
    {
        ch = menu();
        switch(ch)
        {
        case 1: enqueue();
        break;
        case 2: dequeue();
        break;
        case 3: display();
        break;
        case 4: exit(0);
        break;
        default:
            printf("\n Please enter a valid choice");
        }

    }while(1);
}
int menu()
{
    int ch;
    printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
    printf("\nEnter Your Choice:\n");
    scanf("%d", &ch);
    return ch;
}
void enqueue()
{
    int element;

    if(rear == max)
        printf("\nOverflow!");
    else
    {
        printf("\nEnter element: ");
        scanf("%d", &element);
        queue[rear++] = element;
        printf("\n %d Enqueued at %d", element, rear);
    }
}

void dequeue()
{
    if(rear == front)
        printf("\nUnderflow!");
    else
    {
        front++;
        printf("\n Element is dequeued from %d", front);
    }
}
void display()
{
    int i;
    if(rear == front)
        printf("\n Queue is empty!!");
    else
    {
        printf(" \n");
        for(i = front; i < max; i++)
        {
            printf(" | %d", queue[i]);
        }
        printf(" |");
    }
}
