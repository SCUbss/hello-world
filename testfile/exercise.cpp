#include<iostream>
using namespace std;
int main() {
	int age;
	char wanttolearn;
	char name[100]; 
	char y ='y';
	char n ='n';
	cout<<"请输入你的年龄"<<endl;
	cin>>age;
	cout<<"请输入你的姓名"<<endl;
	cin>>name;
	cout<<"姓名："<<name<<"\n"<<"年龄："<<age<<"\n"<<endl;
	cout<<"ok now you are a intelligent c++ writer\n"<<endl;
	cout<<"do you like to learn this language?(type y / n)"<<endl;
	while(true){
		cin>>wanttolearn;
		if(wanttolearn==n){
			cout<<"傻逼"<<name<<"别学c++了赶紧滚蛋吧\n"<<endl;
			return 0;
		}
		if(wanttolearn !=n &&wanttolearn!=y){
			cout<<"听话不要乱搞"<<endl;
			continue;
		}
		if(wanttolearn==y){
			cout<<"Hello World!"<<endl;
			break;
		}
	}
	cout<<"你已经进入了c++的世界，主人，请尽情地使用我，啊~请用力一点\n"<<endl;
}
