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


//lesson about asscociative containers
int main(){

    set<int> mset;
    mset.insert(4);
    mset.insert(1);
    mset.insert(3);
    mset.insert(6);
    mset.insert(7);

    auto itr = mset.find(6);  // sequence containers don't even have find() member function

    auto retpair =  mset.insert(3); // no new element is inserted

    if(retpair.second==false){
        itr = retpair.first;   // now 'itr' points to element 3
    }     

    mset.insert(itr,9);  //will work because 9 was not there, but passing itr does not matter as 9 will have its own place in the set, itr just provides a hint, a good hint reduces time from O(logn) to O(1) 

    mset.erase(itr); //removed 3 from set
    mset.erase(7); //erases 7


    //multiset is a set that allows duplicated items

    multiset<int> mulset;
    mulset.insert(4);
    mulset.insert(4);
    mulset.insert(4);
    mulset.insert(4);

    // please note that multiset/set elements can't be modfied, why?, think urself

    map<char,int> mmap;
    mmap.insert(pair<char,int>('[',120));
    mmap.insert(make_pair(']',110));
    mmap.insert({':',121});

    for(auto itr = mmap.begin();itr!=mmap.end();itr++){
        cout << (*itr).first <<" => "<<(*itr).second <<endl;
    }


    multimap<char,int> mulmap;
    // again keys can't be modified, same reason
    







}


