#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> v;
    int N;
    cin>>N;
    for(int i =0;i<N;++i)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;++j)
        {
            int ele;
            cin>>ele;
            temp.push_back(ele);
        }
        v.push_back(temp);
    }

    vector<vector<int>> :: iterator row;
    vector<int> :: iterator col;
    for(row = v.begin();row!=v.end();++row)
    {
        for(col= row->begin();col!=row->end();++col)
        {
            cout<<*col<<" ";
        }
        cout<<endl;
    }
}
