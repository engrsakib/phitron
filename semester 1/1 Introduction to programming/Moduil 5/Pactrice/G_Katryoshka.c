#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       long long int eyes, mouth, body, k = 0, min;
       scanf("%lld %lld %lld", &eyes, &mouth, &body);
       
       long long int first;  //k_2eyes_1body
       long long int second; //k_2eyes_1mouth_1body
       long long int third; //k_1eye_1mouth_1body
       
        min = eyes;     
        if(mouth < min)
        {
            min = mouth;
        }if(body < min)
        {
            min = body;
        }
        
            
           k += min;
           eyes = eyes - min;
           body = body - min;
           mouth = mouth - min;
            
        eyes = eyes / 2;
        if(eyes < body)
        {
            k += eyes;
        }else
        {
            k += body;
        }
        printf("%lld", k);
         
       
       
    return 0;
}
