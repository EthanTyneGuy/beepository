#include <iostream>

int Main() {
    //establishing da things, baby
    int batAvgNum = 8;
    double averages[8];
    double sum;
    double minAvg = 0;
    double maxAvg = 0;
    double trueAvg;

    for (int yas = 0; yas < batAvgNum; ++yas) {
        std::cout << "Enter a batting average:" << std::endl;
        std::cin >> averages[yas];
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
    trueAvg = sum/averages;

    for (int yas = 0; yas < batAvgNum; ++yas) {
        std::cout << "averages[" << i << "] is: " << averages[yas] << std::endl;
    }

    //final finishing this nightmare and going to sleep hopefully if it works this time
    std::cout << "Minimum batting average is " << minAvg << std::endl;
    std::cout << "Maximum batting average is " << maxAvg << std::endl;
    std::cout << "Average batting average is " << trueAvg << std::endl;
    

    return 0;
}