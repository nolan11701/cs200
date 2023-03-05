#include <iostream> 
using namespace std;

void print(int *a, int x){
    for (int i = 0; i < x; i++) {
    cout<<a[i];
    }
    cout<< "\n";
}
void swap(int *a, int i, int j){
    int v=a[i];
    a[i]=a[j];
    a[j]=v;
}
void perm(int *a, int start, int end, int n) {
    if(start==end) {
        print(a, n);
        return;
    } else {
        for (int i = start; i <= end; i++) { 
            swap(a, start, i);
            perm(a, start+1, end, n);
            swap(a, start, i);
        }
    }
} 


int main() {
    int x;
    cin>>x;
    int a[x];
    for (int i = 0; i < x; i++) {
        a[i]=i+1;
    }
    // print(a,x);
    perm(a,0,x-1, x);
}