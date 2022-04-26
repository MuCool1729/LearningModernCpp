#include <iostream>
using namespace std;
 
template<typename T> 
T square(T x){
    return x*x;
}

// Templating suffers from code bloat(the memory has copies of all square functions
// namely, square<int>,square<float> and square<long long>, all the called).



//dummy vector class with fixed upper size of 1000 and limited functionalities.
template<typename T>
class Vec{
    T arr[1000];
    int sz;
public:
    Vec():sz(0){}
    void push(T x){
        arr[sz++] = x;
    }
    void print() const{
        for(int i = 0;i<sz;i++) cout << arr[i]<<" ";
        cout << endl;
    }
    int size() const{
        return sz;
    }
    T get(int i) const{
        return arr[i];
    }
};


template<typename T>
Vec<T> operator*(const Vec<T>& a,Vec<T>& b){
    Vec<T> ret;
    for(int i = 0;i<a.size();i++){
        ret.push(a.get(i)*b.get(i));
    }
    return ret;
}


int main(){
    cout << square(5.5) <<endl;
    cout << square(5) <<endl;
    cout << square<long long>(5.5) <<endl;
   
   // one can ignore writing typenames via calling template based functions but the same
   // is not true in case of a class.
   
   // Vec vec; will give an error
   //Vec<int> vec; will work
    Vec<long long> vec;
    vec.push(154);
    vec.push(152);
    vec.push(154);
    vec.push(15487);
    vec.print();

    Vec<long long> vec2;
    vec2.push(22);
    vec2.push(220);
    vec2.push(2224);
    vec2.push(223);

    Vec<long long> ret;
    ret = vec*vec2;
    ret.print();

    ret = square(vec);
    vec.print();
    ret.print();
}


