#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int h)
{
    //here we need o make two temp arrays to merge them

    int i, j, k;
    //size of firts array (low to mid)

    int n1 = mid - l + 1;

    //size of second array(mid+1 to high)

    int n2 = h - mid;

    int ar1[n1];
    int ar2[n2];

    //filling both arrays

    for (i = 0; i < n1; i++)
    {
        ar1[i] = a[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        ar2[j] = a[mid + 1 + j];
    }

    //now merging them

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (ar1[i] < ar2[j])
        {
            a[k++] = ar1[i++];
        }
        else
        {
            a[k++] = ar2[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = ar1[i++];
    }
    while (j < n2)
    {
        a[k++] = ar2[j++];
    }
}
void mergeSort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
int main()
{
    int a[7] = {1, 3, 2, 4, 5, 9, 6};
    mergeSort(a, 0, 6);
    for (int g = 0; g < 7; g++)
    {
        cout << a[g];
    }
}