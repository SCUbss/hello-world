#include<iostream>
using namespace std;
int main() {
	int age;
	char wanttolearn;
	char name[100]; 
	char y ='y';
	char n ='n';
	cout<<"�������������"<<endl;
	cin>>age;
	cout<<"�������������"<<endl;
	cin>>name;
	cout<<"������"<<name<<"\n"<<"���䣺"<<age<<"\n"<<endl;
	cout<<"ok now you are a intelligent c++ writer\n"<<endl;
	cout<<"do you like to learn this language?(type y / n)"<<endl;
	while(true){
		cin>>wanttolearn;
		if(wanttolearn==n){
			cout<<"ɵ��"<<name<<"��ѧc++�˸Ͻ�������\n"<<endl;
			return 0;
		}
		if(wanttolearn !=n &&wanttolearn!=y){
			cout<<"������Ҫ�Ҹ�"<<endl;
			continue;
		}
		if(wanttolearn==y){
			cout<<"Hello World!"<<endl;
			break;
		}
	}
	cout<<"���Ѿ�������c++�����磬���ˣ��뾡���ʹ���ң���~������һ��\n"<<endl;
}
