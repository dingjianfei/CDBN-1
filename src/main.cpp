#include <iostream>

#include "test.h"
#include "util.h"

using namespace std;

int main()
{
    testNet tn("../config/net.cfg");
    tn.print();

    testOption opt("../config/option.cfg");
    opt.print();

    testCRBMModel();

//    testCRBM crbm;

//    testMultByElementSum();
//    testAddNumber();
//    testAddVectorByRow();
//    testAddVectorByCol();
//    testMultVector();
//    testMultMatrix();
//    testConvolution2D();
//    testConvolution3D();
//    testSigmod();
//    testRandn();
//    testStochasticPooling();

#if 1
    Array<double,4> data(70,70,10,1);

    data = randn(data)/100.0;

    int size = data[0].shape().length();
    cout << data[0].shape()(size-1) << endl;

    convLayer convL("convolution", 24, 10, 1);
    poolingLayer poolingL("pooling", 3, STOCHASTIC);

    CRBM<double, 2> crbm(data, convL, poolingL, option("../config/option.cfg"), GAUSSIAN);

    crbm.train();
#endif

    return 0;
}

