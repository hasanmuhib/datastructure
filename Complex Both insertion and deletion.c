#include<stdio.h>
int main(void)
{
    int i,size,n,pos,newdat;
    printf("How many indexes in array?\n");
    scanf("%d", &size);
    int a[size];
    printf("How many elements in array?\n");
    scanf("%d", &n);
    if(n>=size) printf("Invalid conditions for insertion!\n");
    else
    {
        printf("Enter the values of Array:\n");
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Printing the values of Array:\n");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nNow time to insert new data without deleting any!\
In which position you want to add?\n");
        scanf("%d", &pos);
        printf("Enter new data value:\n");
        scanf("%d", &newdat);
        for(i=n-1; i>=pos-1; i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=newdat;
        n++;
        printf("Showing the new values of array:\n");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);

        }
        printf("\nNow which position value you want to delete?\n");
        scanf("%d", &pos);
        for(i=pos-1; i<n; i++)
        {
            a[i]=a[i+1];
        }
        n--;
        printf("Printing the new values of array:\n");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        if(a[n-1]%2==0)
        {
            printf("\nThe last element of the array is even! You need to add value.How many new value you want to add?\n");
            int nplus;
            scanf("%d",&nplus);
            n=n+nplus;
            if (n>size) printf("Element can't be more than array size!\n");
            else
            {
                for(i=0; i<nplus; i++)
                {
                    printf("\nNow time to insert new data without deleting any!\
In which position you want to add?\n");
                    scanf("%d", &pos);
                    printf("Enter new data value:\n");
                    scanf("%d", &newdat);
                    for(int j=n-1; j>=pos-1; j--)
                    {
                        a[j+1]=a[j];
                    }
                    a[pos-1]=newdat;
                }
                printf("Printing the new values of array:\n");
                for(i=0; i<n; i++)
                {
                    printf("%d ",a[i]);
                }
            }

        }
        else
        {
            printf("\nThe last element of the array is odd! You need to delete value.\
How many new value you want to delete?\n");
            int nminus;
            scanf("%d", &nminus);
            for(i=0; i<nminus; i++)
            {
                printf("\nNow which position value you want to delete?\n");
                scanf("%d", &pos);
                for(int j=pos-1; j<n; j++)
                {
                    a[j]=a[j+1];
                }
                n--;
                 printf("Printing the new values of array:\n");
            for(int i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }

            }

        }
    }

}
