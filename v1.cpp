#include <iostream>

using namespace std;

int recurse(int num);

int main(){
    int num;
    cout << "insert that integer now motherfucker" << endl;
    cin >> num;
    cout << recurse(num);
    return 1;
}
int recurse(int num){
    if(num > 1)
    {
    return num *= recurse(num-1);
    }
    else{
    return num;
    }
}