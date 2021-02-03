#include "include.h"

using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "hun");
	u16 in_u8 = 0;
	string in_str, in_str2;

	cout<<"Halo, ez meg nem ekezetes"<<endl;
	cout<<"Ez már az: űűűöüúőpí"<<endl;

	cout<<"Irjon be egy szamot:";
	cin>>in_u8;
	cin.ignore();
	cout<<"Beolvasott szam erteke: "<<in_u8<<endl;
	cout<<"Irjon be egy szoveget."<<endl;
	getline(cin,in_str2);
	cout<<in_str2<<endl;
	cout<<"A szoveg merete: "<<in_str2.size()<<" - hossza: "<<in_str2.length()<<endl;
//	cout<<"Forditva: ";
	cin>>in_u8;
	cout<<in_u8<<endl;
//	system("echo 3s...");
//	system("sleep 3");
//	system("clear");

//	getc();
	return 0;
}

