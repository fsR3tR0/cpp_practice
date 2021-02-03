#include "include.h"

using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "hun");
	u16 in_u8 = 0;
	string in_str;

	cout<<"Halo, ez meg nem ekezetes"<<endl;
	cout<<"Ez már az: űűűöüúőpí"<<endl;

	cout<<"Irjon be egy szamot:";
	cin>>in_u8;
	cout<<"Beolvasott szam erteke: "<<in_u8<<endl;
	cout<<"Irjon be egy szoveget."<<endl;
	cin>>in_str;
//	while(getline(cin,in_str) != '0'){};
//	cin.getline(cin,in_str);
	cout<<"Ezt irtad be: "<<in_str<<endl;
	cout<<"Meret: "<<in_str.size()<<", hossz: "<<in_str.length()<<endl;
	cout<<"Meg egy:";
	getline(cin,in_str);
	cout<<in_str<<endl;
//	cout<<"Forditva: ";

//	system("echo 3s...");
//	system("sleep 3");
//	system("clear");

//	getc();
	return 0;
}

