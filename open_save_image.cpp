#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    Mat image;

    // LOAD image
    image = imread("image.jpg", IMREAD_GRAYSCALE);   // Read the file "image.jpg".
           //This file "image.jpg" should be in the project folder.
           //Else provide full address : "D:/images/image.jpg"

    if (!image.data)  // Check for invalid input
    {
        cout << "Could not open or find the image" << endl;
        return -1;
    }

    //DISPLAY image
    namedWindow("window", WINDOW_AUTOSIZE); // Create a window for display.
    imshow("window", image); // Show our image inside it.

    //SAVE image
    imwrite("result.jpg", image);  // it will store the image in name "result.jpg"

    waitKey(0);  // Wait for a keystroke in the window
    return 0;
}