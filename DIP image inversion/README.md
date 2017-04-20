Let bmp.h be included in all your files.
Firstly, the program works only for bmp images.
The image height and width and dimensions need to be hardcoded into the file being compiled.( imgwidth, imgheight,size)
next: Make sure the image is 256 Color Bitmap image(8 bit image). //You can check by checking the propertiedsof your image.
it has 3 files.
serial.c : which does image inversion in C with naive implementation.
compile using gcc serial.c 
run : ./a.out <image>.bmp <no of threads to run on> // in this case just 1

omp.c : which does image inversion in C with parallel implementation using OpenMP.
compile using gcc -fopenmp serial.c 
run : ./a.out <image>.bmp <no of threads to run on>

pthread.c : which does image inversion in C with naive implementation.
compile using gcc -lpthread serial.c 
run : ./a.out <image>.bmp <no of threads to run on>

For test case : 4 image files have been uploaded : img1.bmp, img2.bmp, img3.bmp, new1.bmp

The output will be a newly converted bmp image named : "out.bmp"
