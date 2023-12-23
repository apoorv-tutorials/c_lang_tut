# include<stdio.h>

int main(){
    int rad = 4;
    float pi = 3.142;
    int height = 6;
    printf("the area of circle is %f\n", pi*rad*rad);
    printf("the volumne of circle is %f\n", pi*rad*rad*height);

    printf("let's find celcius to fahernite");
    float celcius = 37;
    float far = (celcius * 9/5) + 32;
    printf("celcius temp in fahernite %f\n", far);

    int principle=100, rate=4, years=2;
    double simpleInterest = (principle * rate * years);
    printf("the value of SI is %f\n", simpleInterest/100);
}