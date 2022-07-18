
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include "LinkedList.hpp"
#include <iostream>
#include <iomanip>

#include "Detector.hpp"
#include "Persona.hpp"

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{

    Detector detector;
    Mat imagen;

    LinkedList linkedlist;
    imagen = imread("C:/Users/rafae/Documents/GitHub/ED22-01-Fredes-Munizaga/images/gente3.jpeg");
    detector.toggleMode();
    cout << detector.modeName() << endl;
    LinkedList *listaGeneral;
    for (string imagen : imagen)
    {

        LinkedList lcurrent;
        found = detector.detect(imagen);

        for (int i = 0; i < lcurrent.size(); i++)
        {
            Persona Persona = lcurrent.get(i);
            rectangle(imagen, cv::Point(p.getXComienzo(), p.getYComienzo()), cv::Point(p.getXFin(), p.getYFin()), cv::Scalar(0, 255, 0), 2);
            circle(imagen, cv::Point(p.getXCentro(), p.getYCentro()), 3, cv::Scalar(0, 0, 255), 3);
            circle(imagen, cv::Point(p.getXComienzo(), p.getYComienzo()), 3, cv::Scalar(255, 0, 255), 2);
            circle(imagen, cv::Point(p.getXFin(), p.getYFin()), 3, cv::Scalar(0, 255, 255), 2);
            listaGeneral.add(p);
        }
    }

    imshow("People detector", imagen);
    waitKey(0);
    cout << linkedlist.size() << endl;

    return 0;
}

void showPerson(vector<string> imagesList)
{
    for (string imagen : imagen)
    {
        LinkedList lcurrent;
        found = detector.detect(imagen);
        for (int i = 0; i < lcurrent.size(); i++)
        {
            Persona p = lcurrent.get(i);
            rectangle(imagen, cv::Point(p.getXComienzo(), p.getYComienzo()), cv::Point(p.getXFin(), p.getYFin()), cv::Scalar(0, 255, 0), 2);
            circle(imagen, cv::Point(p.getXCentro(), p.getYCentro()), 3, cv::Scalar(0, 0, 255), 3);
            circle(imagen, cv::Point(p.getXComienzo(), p.getYComienzo()), 3, cv::Scalar(255, 0, 255), 2);
            circle(imagen, cv::Point(p.getXFin(), p.getYFin()), 3, cv::Scalar(0, 255, 255), 2);
        }
    }
}

int contarP(LinkedList linkedlist) {
    return linkedlist.size();
}