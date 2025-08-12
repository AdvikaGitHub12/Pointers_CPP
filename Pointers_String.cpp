// Name: Advika Bhosle
// PRN: 24070123007
//Batch: EnTc A1

#include <iostream>
using namespace std;

int main() {
    char str[] = "Batman";
    char* ptr = str;
    
    cout<<"string:";
    while(*ptr !='\0'){
        cout<<*ptr;
        ptr++;
    }
     return 0;
}

/*
OUTPUT
string:Batman

=== Code Execution Successful ===
