#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
#include <conio.h>
#include <stddef.h>
#include <thread>
#include <chrono>
using namespace std;

int main() 
{
    //Md. Nazmus Sakib
 
    int n;
    cin >> n;
    int a[26]={0};
    char temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a[temp - 97] += 1;
    }
    for(int i = 0; i < 26; i++){
            while(a[i] != 0 ){
                char h = i + 97;
                cout << h;
                a[i]--;
            }
            
    }
    return 0;
}
