// roi ����
#include<opencv2/opencv.hpp>
//#include<opencv2/highgui/>

using namespace cv;
using namespace std;

const int WIDTH = 320;
const int HEIGHT = 480;


int main(int argc, int **argv ) {

	//���� ������ �ޱ� ���� cap ��ü ����
	VideoCapture cap(1);
	//ī�޶� �� ���� ��
	if (!cap.isOpened()) {
		cout << "ī�޶� ã���� �����ϴ�.\n" << endl;
		return -1;
	}


	return 0;
}