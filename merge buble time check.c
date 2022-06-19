#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)


       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

int main()
{
    FILE *fn;
    int num,n,arr[150000],a,upper,lower;
    clock_t start_t, end_t;
    double total_t;
    printf("Enter the total number of random number : ");
    scanf("%d",&n);
    printf("Enter lower value: ");
    scanf("%d",&lower);
    printf("Enter upper value: ");
    scanf("%d",&upper);
    fn=fopen("number.txt","w");
    srand(time(0));
    for (int i=0;i<n;i++) {
        num=(rand()%(upper-lower+1))+ lower;
        fprintf(fn," %d",num);
    }
    fclose(fn);
    fn = fopen("number.txt", "r");
    int i;
    for (i = 0; i < n; i++)
    {
        fscanf(fn, "%d", &arr[i]);
    }
    printArray(arr,n);
    printf("\n-------------------------");
    while(1)
    {
        printf("\nPress 1 to Bubble Sort the given array.");
        printf("\nPress 2 to Merge Sort the given array.");
        printf("\nPress any number to Exit!\n\n");
        printf("Enter Your Choice : ");
        scanf("%d", &a);
        switch(a){
        case 1:
            start_t=clock();
            bubbleSort(arr, n);
            end_t=clock();
            total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
            printf("Total time taken for execution: %f\n\n", total_t);
            printf("\nBubble Sorted array:: ");
            printArray(arr, n);
            break;
        case 2:
            start_t=clock();
            mergeSort(arr, 0, n - 1);
            end_t=clock();
            total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
            printf("Total time taken for execution: %f\n\n", total_t  );
            printf("\nMerge Sorted array :: ");
            printArray(arr, n);
            break;
        default:
            exit(0);
        }
    }
  return 0;
}
