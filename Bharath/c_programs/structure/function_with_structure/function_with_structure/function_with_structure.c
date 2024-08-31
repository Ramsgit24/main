#include<stdio.h>
struct A{
    char letter;
    char bottle_name;
    short int water_in_ml;
    int distance_in_m;
    float pi;
    double gravitational_constant;
    long double boltzmann_constant;
};
void display(struct A);
int main(){
    struct A first={'q','B',4000,60000,3.14f,6.67432,0.1380649};
    display(first);)

}
void display(struct X q){
    printf(" %c %c %u %d %f %lf %llf",q.letter,q.bottle_name,q.water_in_ml,q.pi,q.gravitational_constant,q.boltzmann_constant);
}
