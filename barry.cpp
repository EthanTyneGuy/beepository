#include <iostream>

using namespace std;
//ithought main was supposed to start capital
int main() {
    //establishing da things, baby
    int batAvgNum = 8;
    double averages[8];
    double sum;
    double minAvg = 100000000;
    double maxAvg = 0;
    double trueAvg;

    for (int yas = 0; yas < batAvgNum; ++yas) {
        cout << "Enter a batting average:" << endl;
        cin >> averages[yas];
        sum += averages[yas];
        //slay queen
        //the insomnia is going to kill me
    }
    //now we find da max baby!!!!!!!!! (im in pain, so much pain)
    for (int yas = 0; yas < batAvgNum; ++yas) {
        if (averages[yas] > maxAvg){
            maxAvg = averages[yas];
        }
    }
    //now for min ahhhhhhhhhhhhhhhhhhhhhhh
    for (int yas = 0; yas < batAvgNum; ++yas) {
        if (averages[yas] < minAvg){
            minAvg = averages[yas];
        }
    }
    // i dont know how tedious im making this on myself
    trueAvg = sum/batAvgNum;

    for (int yas = 0; yas < batAvgNum; ++yas) {
        cout << "averages[" << yas << "] is: " << averages[yas] << endl;
    }

    //final finishing this nightmare and going to sleep hopefully if it works this time
    cout << "Minimum batting average is " << minAvg << endl;
    cout << "Maximum batting average is " << maxAvg << endl;
    cout << "Average batting average is " << trueAvg << endl;
    

    return 0;
}