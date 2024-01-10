#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main() {
    VideoCapture cap(0); // membuka kamera default

    if (!cap.isOpened()) {
        std::cerr << "Error: Unable to open the camera." << std::endl;
        return -1;
    }

    Mat frame;

    while (true) {
        cap >> frame; // membaca frame dari kamera

        imshow("Camera", frame);

        if (waitKey(30) == 27) { // tunggu 30ms, esc untuk keluar
            break;
        }
    }

    cap.release();
    destroyAllWindows();

    return 0;
}
