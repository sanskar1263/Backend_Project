#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = n; i > 0; i--)
            arr.push_back(i);
        reverse(arr.begin() + n - (k + 1), arr.end());
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

// int n,k;
//         cin>>n>>k;
//         if(k == 0){
//             for(int i=n;i>0;i--){
//                 cout<<i<<" ";
//             }
//         }else if(k == n-1){
//             for(int i=1;i<=n;i++){
//                 cout<<i<<" ";
//             }
//         }else{

//         }