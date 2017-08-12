#include <cv.h>  
#include <highgui.h>  
  
using namespace cv;  
  
int main(int argc, char** argv) {
    IplImage *image;  

    printf("%s",argv[1]);

    image = cvLoadImage(argv[1]);//载入一张图片  
    //printf("%d", image->ID);
    
    if(argc != 2) {  
        printf("No image data \n");  
        return -1;  
    }  

    cvNamedWindow("myimage",CV_WINDOW_AUTOSIZE);  
    cvShowImage("myimage",image);  

    cvWaitKey(0);

    cvDestroyWindow("myimage");  
    cvReleaseImage(&image);  
  

    return 0;  
}  