#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int ele;
    string st;
    vector<int> vec1;//zero sized vector declare
    for(int i=0;i<5;i++)
        {
            cin>>ele;
            vec1.push_back(ele);
        }
    for(int i =0;i<vec1.size();i++)//normal way to print
        cout<<vec1[i]<<" ";


    vector<int> vec2 = {1,2,3,4,5};//vector with value
    for(auto i: vec2)//range based loop
        cout<<i<<" ";
    cout<<endl;



    vector<int> v(4,11);//4 int 11
    vector<int> :: iterator i = v.begin();//creating iterator
    for(;i!=v.end();i++)
       cout<<*i<<" ";

    vector<pair<int,string>> pVec;
    for(int i=0;i<5;i++)
        {
            cin>>ele>>st;
            pVec.push_back({ele,st});
            pVec.push_back(make_pair(ele,st));
        }
    for (auto p: pVec) {
       cout<< p.first << " " << p.second << "\n ";
    }

    for(int p=0; p<pVec.size();p++)
    {
        cout<< pVec[p].first <<" "<< pVec[p].second << endl;
    }

    vector<int> :: reverse_iterator rit = vec1.rbegin();//creating reverse iterator
    for(;rit!=vec1.rend();rit++)
         cout<<*rit<<" ";


}
