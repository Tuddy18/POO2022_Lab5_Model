#include <iostream>
#include "domain/entity.h"
#include "domain/repo.h"
#include "domain/homemade_vector.h"

#include <algorithm>
#include <chrono>


#include <vector>

using namespace std;
using namespace chrono;

int main() {
//    vector<int> v;
    HomemadeVector v;

    for (int i = 0; i < 1000000; ++i) {
        // Get starting timepoint
        auto start = high_resolution_clock::now();

        // Call the function, here sort()
        v.push_back(i);

        // Get ending timepoint
        auto stop = high_resolution_clock::now();

        // Get duration. Substart timepoints to
        // get duration. To cast it to proper unit
        // use duration cast method
        auto duration = duration_cast<microseconds>(stop - start);
        int duration_microsec = duration.count();

        if(duration_microsec > 2){
            cout << "Index: " << i << endl
                 <<"Time taken by push_back(): "
                 << duration_microsec << " microseconds" << endl;
        }


    }

    return 0;
}
