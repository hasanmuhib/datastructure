#include <stdio.h>


int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Taking the values of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Showing the values of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int key;
    printf("Enter the key you want to search!\n");
    scanf("%d", &key);

    // Binary search for the leftmost occurrence
    int startloc = -1;
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if (arr[mid] == key)
        {
            startloc = mid;
            end = mid - 1; // Continue searching towards the left
        }
        else if (arr[mid] < key)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Reset boundaries
    beg = 0;
    end = n - 1;

    // Binary search for the rightmost occurrence
    int endloc = -1;
    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if (arr[mid] == key)
        {
            endloc = mid;
            beg = mid + 1; // Continue searching towards the right
        }
        else if (arr[mid] < key)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (startloc == -1 || endloc == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Found at index from %d to %d\n", startloc, endloc);

    }

}
