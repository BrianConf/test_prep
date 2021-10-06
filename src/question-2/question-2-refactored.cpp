#include <iostream>
#include <vector>
#include <string>

using namespace std;

using VectorIntContainer = vector<int>;

int fact(int n) { return n > 1 ? fact(n - 1) * n : 1; }

void getBinomialCoefficients(VectorIntContainer &vect, int max_row){
    int n = 0;
     for(int r = 0; r < max_row; r++) {
        for(int i = 0; i <= r; i++) {
            if(n > max_row*max_row) break;
            vect.at(n) = fact(r)/(fact(i)*fact( r - i ));
            n++;
        }
    }
}
string create_spaces(int _row){
    string spaces = "";
    for(int i = 0; i < _row; i++){
        spaces = spaces + ' ';
    }
    return spaces;
}

void printBinomial(int max_row){
    auto vect = VectorIntContainer{};
    vect.resize(max_row*max_row);
    int n = 0;
    int s = max_row;
    getBinomialCoefficients(vect, max_row);
    for(int r = 0; r < max_row; r++) {
        cout<< create_spaces(s--);
        for(int i = 0; i <= r; i++) {
            if(n > max_row*max_row) break;
            cout<<' '<< vect.at(n);
            n++;
        }
        cout<< endl;
    }
}

int main(void){
    cout <<" enter the last row of the binomial coefficients" << endl;
    auto max_row = 0;
    cin>>max_row;
    printBinomial(max_row);

    return 0;
}

