#include<iostream>
using namespace std;

char before(char X){
	if(X == 65){
        return X = 'Z';
    }
    if(X >= 65 && X <=90){
        X = X-1;
    }else{
        return '0';
    }
    return X;
}
