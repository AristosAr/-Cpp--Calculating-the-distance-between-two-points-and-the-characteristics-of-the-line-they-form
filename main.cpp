#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float r(float x1, float x2, float y1, float y2);
void g(float x1, float x2, float y1, float y2, float& l, float& b); //x1,x2,y1,y2: input
                                                                    //l,b: outpout
int main()
{
    float x1,x2,y1,y2;
    float f;
    float l,b; //l=angle & b=ordinate

    cout<< "Give the values of the vector x, x1 and x2" << endl;
    cin>> x1 >> x2;
    cout<< "Give the values of the vector y, y1 and y2" <<endl;
    cin>> y1 >> y2;

    f = r(x1,x2,y1,y2);
    g(x1,x2,y1,y2,l,b);

    cout<< setw(3) << fixed << "R= " << setw(11) << fixed << setprecision(3) << f << endl;
    cout<< setw(3) << fixed << "Gradient= " << setw(11) << fixed << setprecision(3) << l << endl;
    cout<< setw(3) << fixed << "Ordinate= " << setw(11) << fixed << setprecision(3) << b << endl;

    return 0;
}

float r(float x1, float x2, float y1, float y2){
float result_f;

result_f = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

return result_f;
}

void g(float x1, float x2, float y1, float y2, float& l, float& b){

l=((y2-y1)/(x2-x1));
b=y1-(l*x1);
}
