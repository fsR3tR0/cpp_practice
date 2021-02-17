#include "include.h"
#include "komplex.h"
#include "functions.h"
/*
void stream_szetszed(vector <int> &v, string str);
void print_vector(vector <int> v);
void filebeolvas(vector <string> &v);
void filekiir(vector <string> v);
*/
int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "hun");
	u16 in_u8 = 0;
	string in_str, in_str2, in_numbers;
	vector <int> numbers;
	Komplex n1(2.3,4.5);
	double print = 0.0;
	vector <string> in_file;

	cout<<"Halo, ez meg nem ekezetes"<<endl;
	cout<<"Ez már az: űűűöüúőpí"<<endl;

	cout<<"Irjon be egy szamot: ";
	cin>>in_u8;
	cin.ignore();
	cout<<"Beolvasott szam erteke: "<<in_u8<<endl;
	cout<<"Irjon be egy szoveget: ";
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
	cout<<"==================="<<endl;
	n1.setRe(1.1);
	n1.setIm(2.2);
	cout<<"Realis: "<<n1.getRe()<<", Imagiunarius: "<<n1.getIm()<<endl;
	cout<<"Euler formula: "<<n1.length()<<"*e^j"<<n1.degre()<<" fok"<<endl;
/*	cin>>in_u8;
	cout<<in_u8<<endl;
	system("echo 3s...");
	system("sleep 3");
	system("clear"); */
	filebeolvas(in_file);
	cout<<in_file.size()<<endl;
	filekiir(in_file);

	return 0;
}
/*

void filebeolvas(vector <string> &v){
	string in_sor;
	ifstream fin("test.log");
	while(!fin.eof()){
		getline(fin, in_sor);
		v.push_back(in_sor);
	}
	fin.close();
}

void filekiir(vector <string> v){
	cout<<"File tartalma:[ ";
	for(int i = 0; i < v.size()-2; i++){
		if(i == v.size()-3){
			cout<<v[i]<<" ]"<<endl;
		}else{
			cout<<v[i]<<", ";
		}
	}
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
*/
