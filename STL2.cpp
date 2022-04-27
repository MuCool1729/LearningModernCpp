#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set> //set as well as multiset
#include <map> // map as well as multimap
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <numeric> 
#include <functional> // for functors

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(7);
    vec.push_back(6);

    cout << vec[1] <<endl;  // no range check
    cout << vec.at(1)<<endl; // throws range_error exception for out of range
    
    for(int i=0;i<vec.size();i++) cout << vec[i] <<" ";
    cout << endl;

    // recommended way of traversing a container
    for(auto itr = vec.begin();itr!=vec.end();itr++) cout << *itr <<" ";
    cout <<endl;

    for(int u:vec) cout << u << " ";
    cout <<endl;

    // Point worth noting that Vector is a dynamically allocated contiguous array in memory.
    int* p = &vec[0];
    p[2] = 6; // is same as doing vec[2] = 6;
    
    for(int u:vec) cout << u << " ";
    cout <<endl;

    vector<int> vec2(vec); // copy constructor
    vec.clear(); // clears everythin from vec but vec2 remains as it is.
    vec2.swap(vec); // vec2 now becomes empty and vec has nw 4 items.


    for(int u:vec) cout << u << " ";
    cout <<endl;

    for(int u:vec2) cout << u << " ";
    cout <<endl;

    deque<int> deq = {1,6}; // fast insert/remove from beginning or end.
    deq.push_front(4);
    deq.push_back(7);

    cout << deq[1] <<endl; // 1

    list<int> mlist = {1,2,4}; // fast insert and remove at any place
    mlist.push_back(16);
    mlist.push_front(0);

    auto itr = find(mlist.begin(),mlist.end(),2);
    mlist.insert(itr,8);

    itr++;
    mlist.erase(itr);

    array<int,5> a = {1,2,3,4,5};
    for(int u:a) cout << u<< " ";
    cout <<endl;


}


