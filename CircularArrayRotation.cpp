#include <bits/stdc++.h>

using namespace std;
int main(){
int n;
int k;
int q;
cin >> n >> k >> q;
int *arr = new int[n];
int *query = new int[q];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
for (int j = 0; j < q; j++)
{
    cin >> query[j];
}

int *arr2 = new int[n];
int count = 0;
while (count < k)
{
    int temp = arr[n - 1];
    for (int j = 1; j < n; j++)
    {
        arr2[j] = arr[j - 1];
    }
    arr2[0] = temp;
    for (int j = 0; j < n; j++)
    {
        arr[j] = arr2[j];
    }
    count++;
}

for (int m = 0; m < q; m++)
{
    cout << arr2[query[m]] << endl;
}
}
