#include <stdio.h>

#include <opencv2/opencv.hpp>

using namespace cv;

int main()

{
    Mat image;
    Mat temp, dst;

    image = imread("/home/lhn/test/test.jpg");

    if ( !image.data )

    {

        printf("No image data \n");

        return -1;

    }

    flip(image,dst,-1);

//    namedWindow("Display Image", WINDOW_AUTOSIZE );

    imshow("Display Image", image);
    imshow("flip Image", dst);

    waitKey(0);

    return 0;

}

