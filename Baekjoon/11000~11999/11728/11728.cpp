#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M);

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    for (int i = 0; i < M; ++i)
        cin >> B[i];

    vector<int> arr(N + M);
    
    int i = 0, j = 0, k = 0;

    while (i < N && j < M)
    {
        
        if (A[i] <= B[j])
        {
            arr[k++] = A[i++];
        }
        else
        {
            arr[k++] = B[j++];
        }
    }

    if (i == N)
    {
        while (k < N + M)
            arr[k++] = B[j++];
    }
    else
    {
        while (k < N + M)
            arr[k++] = A[i++];
    }
    

    for (int i = 0; i < N + M; ++i)
        cout << arr[i] << ' ';
        
    return 0;
}