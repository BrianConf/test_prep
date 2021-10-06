#include <iostream>
#include <vector>

using namespace std;

using iter_type = vector<int>::iterator;
using VectorIntContainer = vector<int>;

iter_type make_unique(iter_type iter_1, iter_type iter_2){

    iter_type result_iter;
    result_iter = iter_1;

    for(auto it = iter_1; it < iter_2; it++){

        if(*it != *result_iter){

            result_iter++;
            *result_iter = *it;

        }
    }

    return result_iter;
}
int main()
{
    auto vect_ = VectorIntContainer{1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5};

    auto it = make_unique(begin(vect_), end(vect_));

    for (auto p = begin(vect_); p != it + 1; ++p)
            cout << ' ' << *p;

    return 0;
}
