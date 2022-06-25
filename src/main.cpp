#include <stdio.h>
#include <opencv2/opencv.hpp>


using namespace cv;
int main(int argc, char** argv) 
{
    // Declarar una matriz 
    Mat image;
    // Creo la matriz con una imagen
    image = imread("C:/Users/rafae/Documents/GitHub/ED22-01-Fredes-Munizaga/images/image0292.png") ;
    // image == 0, no cargo la imagen
    
    if (!image.data)
    {
        //Indicar un error
        printf("No image data \n");
        return -1;
    }
    // image == 1, muestro la imagen
    // Creo una ventana vacia que tien nombre "IMAGEN"
    namedWindow("IMAGEN", WINDOW_AUTOSIZE);
    // Coloco la imagen dentro de la ventana vacia
    imshow("IMAGEN", image);
    // El programa queda en espera de una tecla
    //waitkey(milisegundos cierre imagen)
    waitKey(0);
    return 0;
}
