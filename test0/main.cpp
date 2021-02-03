#include "include.h"

using namespace std;

void stream_szetszed(vector <int> &v, string str);
void print_vector(vector <int> v);

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "hun");
	u16 in_u8 = 0;
	string in_str, in_str2, in_numbers;
	vector <int> numbers;

	cout<<"Halo, ez meg nem ekezetes"<<endl;
	cout<<"Ez már az: űűűöüúőpí"<<endl;

	cout<<"Irjon be egy szamot: ";
	cin>>in_u8;
	cin.ignore();
	cout<<"Beolvasott szam erteke: "<<in_u8<<endl;
	cout<<"Irjon be egy szoveget:";
	getline(cin,in_str2);
	cout<<in_str2<<endl;
	cout<<"A szoveg merete: "<<in_str2.size()<<" - hossza: "<<in_str2.length()<<endl;
	cout<<"Forditva: ";
	for(int i = in_str2.size()-1; i >= 0; i--){
		cout<<in_str2[i];
	}
	cout<<endl;
	cout<<"Irjon be egy szamsorozatot space-cel elvalasztva"<<endl;
	getline(cin, in_numbers);
	stream_szetszed(numbers, in_numbers);
	print_vector(numbers);
/*	cin>>in_u8;
	cout<<in_u8<<endl;
	system("echo 3s...");
	system("sleep 3");
	system("clear"); */
	return 0;
}

void stream_szetszed(vector <int> &v, string str){
	istringstream szamok(str);
	int szam;
	while(szamok >>szam){
		v.push_back(szam);
	}
}

void print_vector(vector <int> v){
	for(int i = 0; i < v.size(); i++){
		if(i == v.size()-1){
			cout<<v[i]<<"."<<endl;
		}else{
			cout<<v[i]<<", ";
		}
	}
}










