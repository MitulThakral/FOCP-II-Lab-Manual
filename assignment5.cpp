#include<iostream>
using namespace std;
class Temperature
{
    float celcius;
    public:
    void inputTemperature();
	float convertToFahrenheit();
	void displayResult();
};
void Temperature::inputTemperature()
{
    cout<<"enter the temp in celcius";
    cin>>celcius;
}
float Temperature::convertToFahrenheit()
{
    return  (1.8 * celcius) + 32;
}
void Temperature::displayResult()
{
    cout<<"after converting temp "<<convertToFahrenheit()<<endl;
}
int main()
{
    Temperature t1;
    t1.inputTemperature();
    t1.displayResult();
    return 0;
}