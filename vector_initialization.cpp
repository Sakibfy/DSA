#include<bits/stdc++.h>
using namespace std;

int main(){

//  vector<int> v;      //type  1
// vector<int> v(5);    //type 2
// vector<int> v(10,-1);   //type 3
// vector<int> v2(v);      //type 4

//int a[5] = {1,2,3,4};

//vector<int> v(a, a+2); // type 5

//cout << v.capacity();
// for (int i = 0; i < v.size(); i++)
// {
//    cout << v[i] << " ";
// }

//  cout << v.size();




vector<int> v = {1,2,3,4,5,56};
vector<int> v2;

v2 = v;

// for (int i = 0; i < v2.size(); i++)
// {
//     cout << v2[i] <<  " ";
// }

for(int x : v2)
{
    cout << x << " "; 
}


    return 0;
}