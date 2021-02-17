#include "functions.h"

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
