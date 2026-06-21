#include<stdio.h>
#define N 10
int t1[N], t2[N];

int hash1(int key) {
    return key % N;
}

int hash2(int key) {
    return ((key / N) + key) % N;
}


// insert1()とinsert2()が交互に飛び交っている
// 
void insert(int key){
    int i;
    i = 
}