#include <iostream>
#include <cstdlib>

using namespace std;

void findA(double* a, double* x, double* y, int n) {
    double q;
    a[0]=y[0];

    for (int k=1;k<n;k++) {
        a[k]=y[k];
        q=1;

        for (int m=0;m<k;m++) {
            a[k]-=a[m]*q;
            q*=(x[k]-x[m]);
        }

        a[k]/=q;
    }
}

double P(double* a, double z, double* x, int n) {
    double s=0;
    double q;

    for (int k=0;k<n;k++) {
        q=1;

        for (int m=0;m<k;m++) {
            q*=(z-x[m]);
        }
        s+=a[k]*q;
    }
    return s;
}

void line(int m) {
    for (int k=1;k<=m;k++) {
        cout<<"-";
    }
    cout<<endl;
}

int main() {
    

    return 0;
}