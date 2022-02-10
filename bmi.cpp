#include <iostream>
#include <cmath>
using namespace std;
int fetch()
{

double bmi;
double w,h;
cout<< "insert weight in kilograms" <<endl;

cin >>w;

cout <<"insert height in inches" <<endl;
cin >>h;



cout<< "your weight = " << w <<"(KG)" <<endl;
cout<< "your height = " << h <<"(INCH)" <<endl;


h=h*0.025;



 bmi = w/(h*h);


cout<<"your result is: " <<bmi <<endl;




if(bmi >=18.5 && bmi <=25)
{
cout<< "you have normal weight" ;

}
if (bmi<18.5)
{
cout<< "you are underweight" ;

}
else if (bmi>25)
{
cout<< "you are overweight" ;

}
}

int main ()
{

fetch();
return 0;


}
