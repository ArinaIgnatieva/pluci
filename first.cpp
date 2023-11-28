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

double sRecTriangle(double k1, double k2) //функция принимает значения двух катетов
{
    return (k1*k2)/2; //по формуле находит площадь прямоугольного треугольника и возвращает ее значение
}

double gipRecTriangle(double k1, double k2) //функция принимает значения двух катетов
{
    return sqrt(pow(k1,2)+pow(k2,2)); //по формуле находит значение гипотенузы и возвращает ее значение
}

int sum4digit(int digit) //функция принимает четырехзначное число
{
    int a = digit % 10; //находим каждую цифру числа через деление на 10 с остатком и целочисленное деление
    int b = digit / 10 % 10;
    int c = digit / 100 % 10;
    int d = digit / 1000;
    
    return a+b+c+d; //функция возвращает сумму цифр четырехзначного числа
}

double DtoP_r(double x, double y) //функция принимает значение координат x, y
{
    return sqrt(x*x + y*y); //по формуле ищет значение r и возвращает его
}

double DtoP_tg(double x, double y) //функция принимает значение координат x, y
{
    return y/x; //по формуле ищет значение tg(fi) и возвращает его
}

double PtoD_x(double r, double fi) //функция принимает значения r, fi
{
    return r*cos(fi); //по формуле ищет значение x и возвращает его
}

double PtoD_y(double r, double fi) //функция принимает значения r, fi
{
    return r*sin(fi); //по формуле ищет значение y и возвращает его
}

double koren1(double a, double b, double d) //функция принимает значения коэффициентов a, b и дискриминанта
{
    return (-b+sqrt(d))/2*a; //по формуле ищет первый корень и вовзвращает его значение
}

double koren2(double a, double b, double d) //функция принимает значения коэффициентов a, b и дискриминанта
{
    return (-b-sqrt(d))/2*a; //по формуле ищет второй корень и вовзвращает его значение
}

double diskriminant(double a, double b, double c) //функция принимает значения коэффициентов a, b, c
{
    return pow(b, 2)-4*a*c; //по формуле ищет дискриминант и возвращает его значение
}

double mediana(double a, double b, double c) //функция принимает значения трех сторон треугольника
{
    return 0.5*sqrt(2*pow(b,2) + 2*pow(c,2) - pow(a,2)); //по формуле находит медиану и вовзращает ее значение
}

double minutes(double a) //функция принимает значение количества прошедших секунд
{
    return a/60; //делим секунды на 60 и получаем прошедшие минуты, функция вовзвращает это значение
}

double hours(double a) //функция принимает значение количества прошедших секунд
{
    return a/3600; //делим секунды на 3600 и получаем прошедшие часы, функция вовзвращает это значение
}

double isosceles(double a, double b, double c) //функция принимает значения трех сторон треугольника
{
    return (a==b) ? (b!=c||a==c) : (b==c||a==c); //тернарный оператор: если a=b, то должно выполняться либо b!=c, либо a==c; если a!=b, то должно выполняться либо b==c, либо a==c. Если вообще ничего не выполняется из этого, то мы это уже в main обрабатываем
}

double discount(double price) //функция принимает значение цены
{
    double discount = (price > 1000) ? price*0.1 : 0; //создаем переменную "скидка", которой присваивается то или иное значение в зависимости от выполнения условия: если цена больше 1000, то скидка 0,1 от цены, если меньше либо равна 1000, то скидка 0
    return price-discount; //функция возвращает разницу между ценой и скидкой, то есть окончательную цену
}

void advice(double weight, double height) //функция принимает значения высоты и веса
{
    double idealWeight = height - 100; //новой переменной присваивается значение
    std::string recommend = (weight>idealWeight) ? "loose weight" : "not loose weight"; //если реальный вес больше идеального, то строке присваивается значение "loose weight", если меньше либо равен, то "not loose weight"
    
    std::cout << "you should " << recommend << std::endl; //выводим значение на консоль
}

double cost(double day, double minutes, double costOfMin) //функция принимает значение дня разговора, минут разговора и стоимость минуты разговора
{
    double cost = (day==6||day==7) ? minutes*costOfMin*0.8 : minutes*costOfMin; //если 6 или 7 день недели, то новой переменной cost присваивается значение равное 0,8 от реальной цены (минуты * цена за минуту), если другие дни, то цена реальная, без скидок
    return cost; //возвращаем значение переменной cost 
}

void MonthAndSeason(int month) {
    std::string monthName;
    std::string season;

    switch (month) {
        case 1:
            monthName = "January";
            season = "Winter";
            break;
        case 2:
            monthName = "February";
            season = "Winter";
            break;
        case 3:
            monthName = "March";
            season = "Spring";
            break;
        case 4:
            monthName = "April";
            season = "Spring";
            break;
        case 5:
            monthName = "May";
            season = "Spring";
            break;
        case 6:
            monthName = "June";
            season = "Summer";
            break;
        case 7:
            monthName = "July";
            season = "Summer";
            break;
        case 8:
            monthName = "August";
            season = "Summer";
            break;
        case 9:
            monthName = "September";
            season = "Autumn";
            break;
        case 10:
            monthName = "October";
            season = "Autumn";
            break;
        case 11:
            monthName = "November";
            season = "Autumn";
            break;
        case 12:
            monthName = "December";
            season = "Winter";
            break;
        default:
            std::cout << "wrong month number.";
            return;
    }

    std::cout << "month: " << monthName << std::endl;
    std::cout << "season: " << season << std::endl;
}

bool happy(int number) //булева функция принимает значение шестизначного числа
{
    int sum1half = 0; 
    int sum2half = 0; //инициализируем две новые переменные, чтобы обозначить суммы половин числа
    
    for (int i = 0; i<3; i++){ //перебираем последние три цифры числа
        sum1half = sum1half + number%10; //собираем их сумму
        number /= 10; //уменьшаем изначальное число на десяток
    }
    
    for (int i = 0; i<3; i++){ //перебираем оставшиеся три цифры числа
        sum2half = sum2half + number%10; //собираем их сумму 
        number /= 10; //уменьшаем число на десяток
    }
    
    return (sum1half==sum2half); //возвращаем сравнение двух сумм
    
}

void kopeyk(int number) //функция принимает значение числа от 1 до 99
{ 
    if (number%10==1 && number!=11){ //если остаток от деления на 10 равен 1 и число не равно 11, то пишем "копейка"
        std::cout<<number<<" kopeyka";
    }
    else if ((number%10==2||number%10==3||number%10==4)&&(number!=12&&number!=13&&number!=14)){ //если остаток от деления на 10 равен 2 или 3 или 4 и число не равно 11 и 12 и 13, то пишем "копейки"
        std::cout<<number<<" kopeiki";
    }
    else { //для всех остальных пишем "копеек"
        std::cout<<number<<" kopeek";
    }
}

bool palindrom(int number) //булева функция принимает значение четырехзначного числа
{    
    int original = number; //присваиваем новой переменной значение введенного числа
    int reversed = 0; //инициализируем переменную, которой будем присваивать значение перевернутого числа
    
    while(number>0){ //перебираем все цифры числа и переставляем их в обратном порядке
        int help = number % 10; //вспомогательной переменной help присваиваем значение остатка от деления на 10, т. е. цифры с конца
        reversed = reversed*10 + help; //суммируем таким образом, чтобы цифры вставали в обратном порядке
        number = number/10; //уменьшаем исходное число на десяток
    }
    return (original==reversed); //возвращаем сравнение исходного и получившегося чисел
}

bool mult(int number, int b) {
    int dig1 = number % 10;
    int dig2 = number / 10 % 10;
    int dig3 = number / 100;

    int mult = dig1*dig2*dig3;

    if (mult > b) {
        return true;
    } else {
        return false;
    }
}

bool add(int number) {
    int dig1 = number % 10;
    int dig2 = number / 10 % 10;
    int dig3 = number / 100;

    int add = dig1+dig2+dig3;

    if (add%7==0) {
        return true;
    } else {
        return false;
    }
}

bool fit(double a, double b, double c, double d) //булева функция принимает значение четырех сторон двух прямоугольников
{
    if ((a<=c&&b<=d)||(a<=d&&b<=c)) //две стороны одного прямоугольника должны быть попарно меньше двух сторон другого прямоугольника, чтобы можно было поместить меньший в больший
    { //если выполняется одно из условий, возвращаем true
        return true;
        }
    else { //если не выполняется ни одно, возвращаем false
        return false;
    }
}

int main()
{
    /*task 1*/
    
    std::cout << "first base, second base, height: "; //вводим значения верхнего и нижнего оснований и высоты с клавиатуры
    double osnov1=0,osnov2=0,h=0; //инициализируем переменные
    std::cin >> osnov1 >> osnov2 >> h; //сохраняем введенные значения в переменных

    std::cout << "S of Trapezoid: "<< sTrapez(osnov1, osnov2, h) << std::endl; //вызываем функцию, которая ищет площадь трапеции и выводим результат на консоль
    
    
    /*task 2*/
    
    std::cout << "radius: "; //вводим значение радиуса с клавиатуры
    double rad=0; //инициализируем переменную 
    std::cin >> rad; //сохраняем введенное значение в переменной
    
    std::cout << "length of Circle: " << lCircle(rad) << std::endl; //вызываем функцию, которая ищет длину окружности и выводим результат на консоль
    std::cout << "S of Circle: " << sCircle(rad) << std::endl; //вызываем функцию, которая ищет площадь круга и выводим результат на консоль
    
    
    /*task 3*/
    
    std::cout << "first and second katet: "; //вводим значение катетов с клавиатуры
    double katet1=0, katet2=0; //инициализируем переменные
    std::cin >> katet1 >> katet2; //сохраняем введенные значения в переменных
    
    std::cout << "S of Rectangulare Triangle: " << sRecTriangle(katet1, katet2) << std::endl; //вызываем функцию, которая ищет площадь прямоугольного треугольника, и выводии ее значение на консоль
    std::cout << "Gipotenuza of Rectangulare Triangle: " << gipRecTriangle(katet1, katet2) << std::endl; //вызываем функцию, которая ищет гипотенузу, и выводим ее значение на консоль
    
    
    /*task 4*/
    
    std::cout << "four-digit number: "; //вводим значение четырехзначного числа с клавиатуры
    double fourdig=0; //инициализируем переменную
    std::cin >> fourdig; //сохраняем введенное значение в переменной
    
    std::cout << "Summa: " << sum4digit(fourdig) << std::endl; //вызываем функцию, которая ищет сумму всех его цифр, и выводим результат на консоль

    //я дальше не буду комментировать, что мы вводим с клавиатуры число, а потом вызываем функцию, ктороая что-то делает, так как это очевидно и повторяется в каждой задаче
    
    /*task 5*/
    
    std::cout << "x, y: ";
    double x=0, y=0;
    std::cin >> x >> y;
    
    std::cout << "Polar r: " << DtoP_r(x, y) << " Polar tg(fi): " << DtoP_tg(x, y) << std::endl;
    
    
    /*task 6*/
    
    std::cout << "r, fi: ";
    double r=0, fi=0;
    std::cin >> r >> fi;
    
    std::cout << "Decart x: " << PtoD_x(r, fi) << " Decart y: " << PtoD_y(r, fi) << std::endl;
    
    
    /*task 7*/
    
    std::cout << "index a, b, c: ";
    double a=0,b=0,c=0;
    std::cin >> a >> b >> c;
    
    std::cout << "first root: " << koren1(a, b, diskriminant(a,b,c)) << " second root: " << koren2(a, b, diskriminant(a,b,c)) << std::endl;
    
    
    /*task 8*/
    
    std::cout << "medians of first triangle: ";
    double m1=0, m2=0, m3=0;
    std::cin >> m1 >> m2 >> m3;
    
    std::cout << "mediana 1.1: " << mediana(mediana(m1,m2,m3), mediana(m2,m3,m1), mediana(m3,m1,m2)) << " mediana 2.2: " << mediana(mediana(m2,m3,m1), mediana(m3,m1,m2), mediana(m1,m2,m3)) << " mediana 3.3: " << mediana(mediana(m3,m1,m2), mediana(m1,m2,m3), mediana(m2,m3,m1)) << std::endl;                      
    
    
    /*task 9*/
    
    std::cout << "number of seconds: ";
    double sec=0;
    std::cin >> sec;
    
    std::cout << "minutes: " << minutes(sec) << " hours: " << hours(sec) << std::endl;
    
    
    /*task 10*/
    
    std::cout << "enter sides: ";
    double t=0, q=0, u=0;
    std::cin >> t >> q >> u;

    if (isosceles(t, q, u)){ //т. е. если выполняется какое-то из условий в функции isosceles(), то мы печатаем "isosceles"
        std::cout << "isosceles";
    }
    else { //если не выполняется ни одно из условий, то пишем "not isosceles"
        std::cout << "not isosceles";
    }
    
    
    /*task 11*/
    
    std::cout << "enter a price: ";
    double price=0;
    std::cin >> price;
    
    std::cout << "price with discount: " << discount(price) << std::endl;
    
    
    /*task 12*/
    
    std::cout << "enter height and weight: ";
    double height=0, weight=0;
    std::cin >> height >> weight;
    
    advice(weight, height); //так как функция сама уже выводит значение на консоль, то мы просто вызываем ее
    
    
    /*task 13*/
    
    std::srand(time(NULL)); //используем эту функцию, чтобы каждый раз при запуске программы получались новые числа, без нее всегда одинаковые будут при каждом запуске программы
    
    int val = rand()%10+1; //присваиваем новой переменной рандомное значение из диапазона от 1 до 9
    int val2 = rand()%10+1; //присваиваем новой переменной рандомное значение из диапазона от 1 до 9
    
    std::cout<< "first number: " << val << std::endl; 
    std::cout<< "second number: " << val2 << std::endl; //выводим значение обеих переменных на консоль
    
    std::cout<< "enter a multiply: "<< std::endl; //пользователь вводит результат умножения этих двух чисел
    int result=0;
    std::cin>> result;
    
    if (result==val*val2){ //если ответ действительно равен произведению, то пишем, что все правильно
        std::cout<< "correct";
        }
    else { //если ответ неправильный, то пишем, что пользователь ошибся
        std::cout<< "wrong";
        }
    
    
    /*task 14*/
    
    std::cout<< "duration of talk in minutes: "<< std::endl;
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
    
    std::cout << "enter a number from 1 to 12: ";
    int mon=0;
    std::cin >> mon;

    MonthAndSeason(mon);
    
    
    /*task 16*/
    
    std::cout<< "number: "<< std::endl;
    int number = 0;
    std::cin >> number;
    
    if (happy(number)){ //если значение булевой функции true, то есть суммы равны друг другу, то пишем, что число счастливое 
        std::cout<< "happy";
    }
    else{ //если значение булевой функции false, т. е. суммы не равны, то пишем, что число несчастливое 
        std::cout<<"unhappy";
    }   
    
    
    /*task 17*/
    
    std::cout<<"enter number from 1 to 99: ";
    int numb = 0;
    std::cin>>numb;
    
    kopeyk(numb); //так как функция сама уже выводит значение на консоль, то мы просто вызываем ее    

    
    /*task 18*/
    
    std::cout<< "enter number: ";
    int numbe=0;
    std::cin>>numbe;
    
    if(palindrom(numbe)){ //если значение функции true, т. е. числа равны, то исходное число - палиндром
        std::cout<< "palindrom!";
    }
    else { //если false, т. е. не равны, то не палиндром
        std::cout<<"not palindrom";
    }
    
    
    /*task 19*/
    
    std::cout << "enter three-digit number: ";
    int number=0;
    std::cin >> number;

    std::cout << "enter b: ";
    int b=0;
    std::cin >> b;

    if (mult(number, b)) {
        std::cout << "multiple bigger than b" << std::endl;
    } else {
        std::cout << "multiple is not bigger than b" << std::endl;
    }

    if (add(number)) {
        std::cout << "summa kratna 7" << std::endl;
    } else {
        std::cout << "summa ne kratna 7" << std::endl;
    }
    
    
    /*task 20*/
    
    double a=0, b=0, c=0, d=0;
    
    std::cout<<"enter a and b: ";
    std::cin>>a>>b;
    
    std::cout<<"enter c and d: ";
    std::cin>>c>>d;
    
    
    if(fit(a,b,c,d)){ //если функция возвращает true, то выводим, что прямоугольник можно поместить в другой прямоугольник
        std::cout<< "rectangle with sides "<<a<<"x"<<b<<" is suitable for rectangle with sides "<<c<<"x"<<d;
        }
    else { //если функция возвращает false, то пишем, что нельзя поместить
        std::cout<< "not suitable";
    }
    
}
