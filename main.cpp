#include <iostream>
#include "subsrc/func.h"

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main ()
{
    cout<<"hello"<<endl;
    shower();
    IplImage* img = cvCreateImage(cvSize(128, 128), 8,1);
    cvCircle(img, cvPoint(65,65), 50, cvScalar(128), 3);
    cvShowImage("img1", img);
    cvWaitKey();    

    return 0;
}