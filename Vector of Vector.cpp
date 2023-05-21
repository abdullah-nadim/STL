#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> v;
    int N;
    cin>>N;
    for(int i =0;i<N;i++)
    {
        int n;
        cin>>n;
        v.push_back(vector<int>());
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            v[i].push_back(ele);
        }
    }
    for(int i =0;i<N;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
