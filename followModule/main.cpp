// roi 설정
#include<opencv2/opencv.hpp>
//#include<opencv2/highgui/>

using namespace cv;
using namespace std;

const int WIDTH = 320;
const int HEIGHT = 480;


int main(int argc, int **argv ) {

	//비디오 영상을 받기 위한 cap 객체 선언
	VideoCapture cap(1);
	//카메라 안 열릴 때
	if (!cap.isOpened()) {
		cout << "카메라를 찾을수 없습니다.\n" << endl;
		return -1;
	}


	return 0;
}