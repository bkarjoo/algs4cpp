//
//  StopWatch.hpp
//  cpplibs
//
//  Created by Behrooz Karjoo on 3/10/19.
//  Copyright © 2019 Behrooz Karjoo. All rights reserved.
//

#ifndef StopWatch_hpp
#define StopWatch_hpp

#include <chrono>

class StopWatch {
public:
    StopWatch();
    double elapsedTime();
private:
    std::chrono::high_resolution_clock::time_point start;
};

using namespace std::chrono;

StopWatch::StopWatch() {
    start = high_resolution_clock::now();
}

double StopWatch::elapsedTime() {
    high_resolution_clock::time_point end =
        high_resolution_clock::now();
    auto duration =  std::chrono::duration_cast<milliseconds>(end - start).count();
    return static_cast<double>(duration);
}

#endif /* StopWatch_hpp */
