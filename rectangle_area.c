#include <stdio.h>
double calc_area(double width, double height);
int main(){
    double width;
    double height;
    double area;
    printf("enter width");
    scanf("%lf", &width);
    printf("enter height");
    scanf("%lf", &height);
    area = calc_area(width, height);
    printf("the area is %lf", area);
    return 0;

}
double calc_area(double width, double height){
    
    double area = width*height;
    return area;
}