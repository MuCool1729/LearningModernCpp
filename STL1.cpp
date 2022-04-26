#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(45);
    vec.push_back(5);
    vec.push_back(475);
    vector<int>::iterator itr1 = vec.begin(); //half open: [begin,end) 
    vector<int>::iterator itr2 = vec.end();
    for(auto itr = itr1;itr!=itr2;itr++){
        cout << *itr << " ";
    }
    cout << endl;

    sort(itr1,itr2);
    for(auto itr = itr1;itr!=itr2;itr++){
        cout << *itr << " ";
    }
    cout << endl;


}