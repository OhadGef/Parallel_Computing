#include <iostream>
#include <vector>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <time.h>

#define lu(x) printf("%lu\n",x);
#define d(x) printf("%d\n",x);
#define f(x) printf("%.2f\t",x);
#define loop0(i,n) for(int i=0;i<n;i++)
#define loop(i,m,n) for(int i=m;i<n;i++)

#define MAX 100 // maximum size of float value
using namespace std;


void standard(int);
float** init(int);

double time_elapsed(struct timespec start, struct timespec end) {
    double t;
    t = (end.tv_sec - start.tv_sec); //diff of tv_sec
    t += (end.tv_nsec - start.tv_nsec) * 0.000000001; //add diff of tv_nsec too
    return t;
}

int main(){
    srand(time(NULL));
    int n;
    cin>>n;
    standard(n);
    return 0;
}

//Function to create a matrix in heap
float** init(int n){
    float **a=(float**)malloc(sizeof(float*)*n);
    loop0(i,n){
        a[i]=(float*)malloc(sizeof(float)*n);
    }
    return a;
}

//Function to fill a matrix with random values
void generate(float **a,int n){
    
    loop0(i,n){
        loop0(j,n){
//            cin>>a[i][j];
            a[i][j]=rand()%1000;
        }
    }

}

//Calculation of inner product
void standard(int n){
//    clock_t start,end;
    struct timespec start,end;
    float **m1 = init(n);
    float **m2 = init(n);
    generate(m1,n);
    generate(m2,n);
    //Standard inner product calculation
    float **res = init(n);
//    start=clock();
    clock_gettime(CLOCK_REALTIME, &start);
    loop0(i,n){
        loop0(j,n){
            float sum = 0;
            loop0(k,n){
                sum+=m1[i][k]*m2[k][j];
            }
            res[i][j]=sum;
        }
    }
    clock_gettime(CLOCK_REALTIME, &end);
    cout<<time_elapsed(start,end)<<"\n";
}




