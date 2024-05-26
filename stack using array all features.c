#include<stdio.h>
#define limit 100
int stack[limit];
int top=-1;
void push()
{
    int value;
    if (top==limit-1)
    {
        printf("Stack overflow!\n");
    }
    else
    {
        printf("Enter the value to be pushed:\n");
        scanf("%d", &value);
        stack[++top]=value;
        printf("%d pushed onto stack.\n", value);
    }
    
}

void pop()
{
    if (top==-1)
    {
        printf("Stack underflow!\n");
    }
        else
        {
            int value = stack[top];
            top--;
            printf("%d popped out from stack.\n", value);
        }

    
}

void peek()
{
    if (top==-1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Top elements is %d.\n",stack[top]);
    }
}

void display()
{
    if (top==-1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Printing the values of stack:\n");
        for(int i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

void menu()
{
    printf("Which operations you want to choose?\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");
    printf("4.Display the stack\n");
    printf("5.Exit\n");
}

int main()
{
    int i,choice;
    while (1)
    {
        menu();
        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() !='\n');
            continue;
        }

        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            return 0;
            default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }
    

}