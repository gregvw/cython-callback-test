// g++ -DTEST 

#include "callback.hpp"
#include <iostream>
using namespace std;
 
vector<double> function( Callback callback, void* apply, 
                         const vector<double> &x ) {

    int n = x.size();
    vector<double> y(n);

    for(int i=0;i<n;++i) {
        y[i] = callback(apply,x[i]);
    }
    return y;
}


#ifdef TEST
#include<iostream>

double square( double &x ){
    return x*x;
}


int main(int argc, char *argv[]) {

    int n = 10;
    vector<double> x(n);
    vector<double> y(n);
    for(int i=0; i<n;++i) {
        x[i] = (double)(i);
    } 

    function(&square,x,y);

    for(int i=0; i<n;++i) {
        std::cout << x[i] << std::endl;
    } 

}
#endif
