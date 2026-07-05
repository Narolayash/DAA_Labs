#include <stdio.h>
#include <time.h>

void swap(int num[], int start, int end)
{
    int temp = num[start];
    num[start] = num[end];
    num[end] = temp;
}

void heapify(int arr[], int n, int start)
{
    int largest = start;
    int l = 2 * start + 1;
    int r = 2 * start + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != start)
    {
        swap(arr, start, largest);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Build heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr, 0, i);
        heapify(arr, i, 0);
    }
}

int main()
{
    int num[100000];

    FILE *f1 = fopen("worst_case_100000.txt", "r");

    for (int i = 0; i < 100000; i++)
        fscanf(f1, "%d", &num[i]);

    fclose(f1);

    clock_t start = clock();

    heapSort(num, 100000);

    clock_t end = clock();

    double time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken: %lf sec\n", time);

    return 0;
}