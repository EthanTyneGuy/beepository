#include <iostream>
#include <vector>

using namespace std;

static int total=0;

int vector(vector <int> num, int countMount){
    int size = num.size();
    if(countMount < size){
        total+= num[countMount];
        vecAdd(num, countMount+1);
    }
    else{
        int x = total;
        cout << "Final total: " << total << endl;
        return x;
    }
}
int main(){
    vector<int> num;
    int mount;
    int temp;
    cout << "how many numbers?" << endl;
    cin >> mount;
    cout << "enter chosen numbers to add" << endl;
    for (int n = 0; n != mount; n++){
        cin >> temp;
        num.push_back(temp);
    }
    int space = 0;
    vecAdd(num, space);
    return 0;
}