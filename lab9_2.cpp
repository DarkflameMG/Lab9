#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ
	string text;
	dest << "-------------------- BOOM ---------------------\n";
	while(getline(source,text))
	{
		dest << text << '\n';
	}
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
