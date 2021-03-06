#include <bits/stdc++.h>
using namespace std;
#define MAX 10000 
#define swap(a,b) {int  temp;temp = a;a = b;b = temp;}




void bottomupheapify(int heap[],int child)
{
    int parent = (child - 1)/2;

    while(parent >= 0 && heap[parent] > heap[child])
    {
        swap(heap[child],heap[parent]);
        child = parent;
        parent = (child - 1)/2;
    }
}







void buildheap(int heap[],int length)
{
    for(int i = 0;i < length;i++)
    {
        bottomupheapify(heap,i);
    }
}






int main()
{
    int n;
    scanf("%d",&n);
    int * heap = (int *)malloc(n * sizeof(int));

    for(int i = 0;i < n;i++)
    {
        cin >> heap[i];
    }

    buildheap(heap,n);
    for(int i = 0;i < n;i++)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
    return 0;
}
