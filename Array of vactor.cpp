#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;//Array of vector size
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++)
    {
        int n;//Vector size
        cin>>n;
        for(int j=0; j<n;j++)
        {
            int ele;
            cin>>ele;
            v[i].push_back(ele);
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0; j<v[i].size();j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }

}
