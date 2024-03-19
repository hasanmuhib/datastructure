#include<stdio.h>
int main(void)
{
    int i,size,n,beg=1,end,mid,key,loc=0;
    printf("Array size?\n");
    scanf("%d", &size);
    int a[size];
    printf("How many elements in array?\n");
    scanf("%d",&n);
    end=n;
    printf("Taking the values of array:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Printing the values of array:\n");
    for(i=1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nNow enter the key you want to search!\n");
    scanf("%d",&key);
    for(beg=1,end=n; beg<=end;)
    {
        mid=(beg+end)/2;
        if(key>a[mid])
        {
            beg=mid+1;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else
        {
            loc=mid;
            printf("Key found!Position is on location %d",loc);
            break;
        }

    }
    if(loc==0) printf("The entered key doesn't exist in array!");

}

