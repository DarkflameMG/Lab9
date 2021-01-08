#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string text;
    int count = 0;
    double sum=0,sumpow = 0,number;
    while(getline(source,text))
    {
        count++;
        number =  atof(text.c_str());
        sum += number;
        sumpow += (number * number);
    }
    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << sum/count << '\n';
    cout << "Standard deviation = " << sqrt((sumpow/count)-(sum/count)*(sum/count));
}