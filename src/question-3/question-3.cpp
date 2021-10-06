#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

using VectorIntContainer = vector<int>;
using VectorFloatContainer = vector<float>;

float getRootMeanSquare(VectorIntContainer vect){

    auto Normalised_vect = VectorFloatContainer{};
    auto N = vect.size();

    Normalised_vect.resize(vect.size());
    transform(begin(vect), end(vect), begin(Normalised_vect), [](float elem){
                    return pow(elem, 2);
              });
    auto sum = accumulate(begin(Normalised_vect), end(Normalised_vect), 0 );
    sum = sum/N;
    return sqrt(sum);
}
int main()
{
    auto vect = VectorIntContainer{1, 2, 3, 4, 5};
    cout<< getRootMeanSquare(vect);
    return 0;
}
