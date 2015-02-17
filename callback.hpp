#include<vector>

using namespace std;

typedef double (*Callback)( void *apply, double x );
vector<double> function( Callback callback, void *apply,
                   const vector<double> &x );


