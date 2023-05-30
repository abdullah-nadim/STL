#include<iostream>
#include<map>

using namespace std;

void print (map<int,string> m)
{
    cout<<m.size()<<endl;
    map<int,string> :: iterator it = m.begin();
    for(; it!= m.end();++it)
        cout<<(*it).first<<" "<<(*it).second<<endl;
}

int main()
{
    map<int,string> m;
    m[0]="ABC";
    m[2]="BCD";
    m[3]="CDE";
    m[1]="XYZ";
    print(m);

    auto it = m.find(2); // returns iterator of that key.
    cout<<(*it).first<<" "<<(*it).second<<endl;
    m.erase(it);
    print(m);

    m.clear();
    print(m);

    return 0;

}
