
#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

void ForEach(const :: vector<int>& values,const function<void(int)>& func){
    for(int value : values)
        func(value);
}

int main(){
    vector<int> values = {1, 5, 9, 4, 5, 6};

    int a = 5;

    auto lambda = [=](int value){ cout << "Values:" << value << endl;};

    ForEach(values, lambda);

    return 0;
}
