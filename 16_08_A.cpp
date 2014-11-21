#include<iostream>
#include<cstring>
using namespace std;
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      }
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main()
{
    int n, m;
    cin>>n>>m;
    int inp[m];
    for (int i = 0; i < m; i++)
    {
        cin>>inp[i];
    }
    quickSort(inp, 0, m-1);
    int mini = inp[n-1]-inp[0];
    for(int i =1 ;i <= m-n; i++)
    {
        mini = min(mini, inp[n+i-1]- inp[i]);
    }
    cout<<mini<<endl;
}
