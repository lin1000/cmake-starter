#include<cv.h>  
#include<cxcore.h>  
#include<highgui.h>  
int main()
{  
    IplImage *res,*dst;  
    CvRect rect;  
    
    rect.x=0,rect.y=0,rect.width=200,rect.height=200;  
    res=cvLoadImage("./cat_02.jpg");//载入一张图片  
    dst=cvCreateImage(cvSize(200,200),8,3);//创建图像空间  
    
    //创建窗口  
    cvNamedWindow("res",CV_WINDOW_AUTOSIZE);  
    cvNamedWindow("dst",CV_WINDOW_AUTOSIZE);  
  
    //设置ROI区域  
    cvSetImageROI(res,rect);  
  
    //提取ROI  
    cvCopy(res,dst);  
  
    //取消设置  
    cvResetImageROI(res);  
  
    //显示图像  
    cvShowImage("res",res);  
    cvShowImage("dst",dst);     
    cvWaitKey(0);  
  
    cvDestroyWindow("res");  
    cvDestroyWindow("dst");  
  
    cvReleaseImage(&res);  
    cvReleaseImage(&dst);  
  
}  