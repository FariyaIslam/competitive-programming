#include<iostream>
using namespace std;

int main()
{
    int val=0,  result = 0;
    int n;
    int arr[5];
    cin >> n;

    while(n--)
    {
        for(int i=0; i<3; i++)
        {
            cin >> arr[i];
            if(arr[i] > 0)
                val++;
        }
        if(val>=2){
            result++;
        }
        val = 0;
    }

    cout << result << endl;

    return 0;
}
