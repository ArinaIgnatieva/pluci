#include <iostream>
#define _USE_MATH_DEFINES 
#include <cmath>
#define M_PI 3.14159265
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double sTrapez(double b1, double b2, double h) //функция принимает значения оснований и высоты
{
    return (b1+b2)/2*h; //по формуле находит площадь и возвращает ее значение
}

double lCircle(double r) //функция принимает значение радиуса
{
    return 2*M_PI*r; //по формуле находит длину окружности и возвращает ее значение
}

double sCircle(double r) //функция принимает значение радиуса
{
    return M_PI*pow(r,2); //по формуле находит площадь круга и возвращает ее значение
}

double sRecTriangle(double k1, double k2)
{
    return (k1*k2)/2;
}

double gipRecTriangle(double k1, double k2)
{
    return pow(k1,2)+pow(k2,2);
}

int sum4digit(int digit)
{
    int a = digit % 10;
    int b = digit / 10 % 10;
    int c = digit / 100 % 10;
    int d = digit / 1000;
    
    return a+b+c+d;
}

double DtoP_r(double x, double y)
{
    return sqrt(x*x + y*y);
}

double DtoP_tg(double x, double y)
{
    return y/x;
}

double PtoD_x(double r, double fi)
{
    return r*cos(fi);
}

double PtoD_y(double r, double fi)
{
    return r*sin(fi);
}

double koren1(double a, double b, double d)
{
    return (-b+sqrt(d))/2*a;
}

double koren2(double a, double b, double d)
{
    return (-b-sqrt(d))/2*a;
}

double diskriminant(double a, double b, double c)
{
    return pow(b, 2)-4*a*c;
}

double mediana(double a, double b, double c)
{
    return 0.5*sqrt(2*pow(b,2) + 2*pow(c,2) - pow(a,2));
}

double minutes(double a)
{
    return a/60;
}

double hours(double a)
{
    return a/3600;
}

double isosceles(double a, double b, double c)
{
    return (a==b) ? (b!=c||a==c) : (b==c||a==c);
}

double discount(double price)
{
    double discount = (price > 1000) ? price*0.1 : 0;
    return price-discount;
}

void advice(double weight, double height)
{
    double idealWeight = height - 100;
    std::string recommend = (weight>idealWeight) ? "loose weight" : "not loose weight";
    
    std::cout << "you should " << recommend << std::endl;
}

double cost(double day, double minutes, double costOfMin)
{
    double cost = (day==6||day==7) ? minutes*costOfMin*0.8 : minutes*costOfMin;
    return cost;
}

bool happy(int number)
{
    int sum1half = 0;
    int sum2half = 0;
    
    for (int i = 0; i<3; i++){
        sum1half = sum1half + number%10;
        number /= 10;
    }
    
    for (int i = 0; i<3; i++){
        sum2half = sum2half + number%10;
        number /= 10;
    }
    
    return (sum1half==sum2half);
    
}

void kopeyk(int number){
    if (number%10==1 && number!=11){
        std::cout<<number<<" kopeyka";
    }
    else if ((number%10==2||number%10==3||number%10==4)&&(number!=12&&number!=13&&number!=14)){
        std::cout<<number<<" kopeiki";
    }
    else {
        std::cout<<number<<" kopeek";
    }
}

bool palindrom(int number){
    int original = number;
    int reversed = 0;
    
    while(number>0){
        int help = number % 10;
        reversed = reversed*10 + help;
        number = number/10;
    }
    return (original==reversed);
}

int mult(int digit)
{
    int a = digit % 10;
    int b = digit / 10 % 10;
    int c = digit / 100;
    
    return a*b*c;
}

int add(int digit)
{
    int a = digit % 10;
    int b = digit / 10 % 10;
    int c = digit / 100;
    
    return a+b+c;
}

bool fit(double a, double b, double c, double d)
{
    if ((a<=c&&b<=d)||(a<=d&&b<=c))
    {
        return true;
        }
    else {
        return false;
    }
}

int main()
{
    /*task 1*/
    
    std::cout << "enter first base, second base, height: "; //вводим значения верхнего и нижнего оснований и высоты с клавиатуры
    double osnov1=0,osnov2=0,h=0;
    std::cin >> osnov1 >> osnov2 >> h;

    std::cout << "S of Trapezoid: "<< sTrapez(osnov1, osnov2, h) << std::endl; //вызываем функцию которая ищет площадь трапеции и выводим результат на консоль
    
    
    /*task 2*/
    
    std::cout << "radius: "; //вводим значение радиуса с клавиатуры
    double rad=0;
    std::cin >> rad;
    
    std::cout << "length of Circle: " << lCircle(rad) << std::endl; //вызываем функцию которая ищет длину окружности и выводим результат на консоль
    std::cout << "S of Circle: " << sCircle(rad) << std::endl; //вызываем функцию которая ищет площадь круга и выводим результат на консоль
    
    
    /*task 3*/
    
    /*std::cout << "first katet: ";
    double e=0;
    std::cin >> e;
    
    std::cout << "second katet: ";
    double f=0;
    std::cin >> f;
    
    std::cout << "S of Rectangulare Triangle: " << sRecTriangle(e,f) << std::endl;
    std::cout << "Gipotenuza of Rectangulare Triangle: " << sqrt(gipRecTriangle(e,f)) << std::endl;
    
    
    /*task 4*/
    
    /*std::cout << "four-digit number: ";
    double g=0;
    std::cin >> g;
    
    std::cout << "Summa: " << sum4digit(e) << std::endl;
    
    
    /*task 5*/
    
    /*std::cout << "x: ";
    double h=0;
    std::cin >> h;
    
    std::cout << "y: ";
    double i=0;
    std::cin >> i;
    
    std::cout << "Polar r: " << DtoP_r(h, i) << " Polar tg(fi): " << DtoP_tg(h, i) << std::endl;
    
    
    /*task 6*/
    
    /*std::cout << "r: ";
    double j=0;
    std::cin >> j;
    
    std::cout << "fi: ";
    double k=0;
    std::cin >> k;
    
    std::cout << "Decart x: " << PtoD_x(j, k) << " Decart y: " << PtoD_y(j, k) << std::endl;
    
    
    /*task 7*/
    
    /*std::cout << "index a: ";
    double l=0;
    std::cin >> l;
    
    std::cout << "index b: ";
    double m=0;
    std::cin >> m;
    
    std::cout << "index c: ";
    double n=0;
    std::cin >> n;
    
    std::cout << "first root: " << koren1(l, m, diskriminant(l, m, n)) << " second root: " << koren2(l, m, diskriminant(l, m, n)) << std::endl;
    
    
    /*task 8*/
    
    /*std::cout << "mediana 1: ";
    double o=0;
    std::cin >> o;
    
    std::cout << "mediana 2: ";
    double p=0;
    std::cin >> p;
    
    std::cout << "mediana 3: ";
    double r=0;
    std::cin >> r;
    
    std::cout << "mediana 1.1: " << mediana(mediana(o,p,r), mediana(p,r,o), mediana(r,o,p)) << " mediana 2.2: " << mediana(mediana(p,r,o), mediana(r,o,p), mediana(o,p,r)) << " mediana 3.3: " << mediana(mediana(r,o,p), mediana(o,p,r), mediana(p,r,o)) << std::endl;                      
    
    
    /*task 9*/
    
    /*std::cout << "number of seconds: ";
    double s=0;
    std::cin >> s;
    
    std::cout << "minutes: " << minutes(s) << " hours: " << hours(s) << std::endl;
    
    
    /*task 10*/
    
    /*std::cout << "enter sides: ";
    double t=0, q=0, u=0;
    std::cin >> t >> q >> u;

    if (isosceles(t, q, u)){
        std::cout << "isosceles";
    }
    else {
        std::cout << "not isosceles";
    }
    
    
    /*task 11*/
    
    /*std::cout << "enter a price: ";
    double v=0;
    std::cin >> v;
    
    double finalPrice = discount(v);
    std::cout << "price with discount: " << finalPrice << std::endl;
    
    
    /*task 12*/
    
    /*std::cout << "enter height and weight: ";
    double height=0, weight=0;
    std::cin >> height >> weight;
    
    advice(weight, height);
    
    
    /*task 13*/
    
    /*std::srand(time(NULL)); //испольую эту функцию, чтобы каждый раз при запуске программы получались новые числа
    
    int val = rand()%10+1;
    int val2 = rand()%10+1;
    
    std::cout<< "first number: " << val << std::endl;
    std::cout<< "second number: " << val2 << std::endl;
    
    std::cout<< "enter a multiply: "<< std::endl;
    int result=0;
    std::cin>> result;
    
    if (result==val*val2){
        std::cout<< "correct";
        }
    else {
        std::cout<< "wrong";
        }
    
    
    /*task 14*/
    
    /*std::cout<< "duration of talk in minutes: "<< std::endl;
    double min = 0;
    std::cin >> min;
    
    std::cout<< "day of week (numbers): "<< std::endl;
    double day = 0;
    std::cin >> day;
    
    std::cout<< "cost of minute in rubles: "<<std::endl;
    double costMin = 0;
    std::cin >> costMin;
    
    std::cout << "final cost: " << cost(day, min, costMin);
    
    
    /*task 15*/
    
    /*std::cout<< "month: ";
    int mon = 0;
    std::cin >> mon;
    
    switch (mon) {
        case 1:
            std::cout << "January, Winter";
            break;
        case 2:
            std::cout << "February, Winter";
            break;
        case 3:
            std::cout << "March, Spring";
            break;
        case 4:
            std::cout << "April, Spring";
            break;
        case 5:
            std::cout << "May, Spring";
            break;
        case 6:
            std::cout << "June, Summer";
            break;
        case 7:
            std::cout << "July, Summer";
            break;
        case 8:
            std::cout << "August, Summer";
            break;
        case 9:
            std::cout << "September, Autumn";
            break;
        case 10:
            std::cout << "October, Autumn";
            break;
        case 11:
            std::cout << "November, Autumn";
            break;
        case 12:
            std::cout << "December, Winter";
            break;
        default:
            std::cout << "enter a number from 1 to 12";
    }
    
    
    /*task 16*/
    
    /*std::cout<< "number: "<< std::endl;
    int number = 0;
    std::cin >> number;
    
    if (happy(number)){
        std::cout<< "happy";
    }
    else{
        std::cout<<"unhappy";
    }   
    
    
    /*task 17*/
    
    /*std::cout<<"enter number from 1 to 99: ";
    int numb = 0;
    std::cin>>numb;
    
    kopeyk(numb);
    
    
    /*task 18*/
    
    /*std::cout<< "enter number: ";
    int numbe=0;
    std::cin>>numbe;
    
    if(palindrom(numbe)){
        std::cout<< "palindrom!";
    }
    else {
        std::cout<<"no";
    }
    
    
    /*task 19*/
    
    /*std::cout<< "enter a number: ";
    int dig = 0;
    std::cin>>dig;
    
    std::cout<< "enter b: ";
    int bb = 0;
    std::cin>>bb;
    
    int multi = mult(dig);
    
    if(multi>bb)
    {
        std::cout<<"multiplication is bigger than b"<<std::endl;
    } else
    {
        std::cout<<"multiplication is not bigger than b"<< std::endl;
    }
    
    int plus = add(dig);
    
    if(plus % 7 == 0)
    {
        std::cout<<"summa kratna 7";
    } else
    {
        std::cout<<"summa ne kratna 7";
    }
    
    
    /*task 20*/
    
    double a=0, b=0, c=0, d=0;
    std::cout<<"enter a and b: ";
    std::cin>>a>>b;
    
    std::cout<<"enter c and d: ";
    std::cin>>c>>d;
    
    
    if(fit(a,b,c,d)){
        std::cout<< "rectangle with sides "<<a<<"x"<<b<<" is suitable for rectangle with sides "<<c<<"x"<<d;
        }
    else {
        std::cout<< "not suitable";
    }
    
}
