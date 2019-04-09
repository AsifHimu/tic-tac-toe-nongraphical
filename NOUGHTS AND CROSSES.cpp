#include<bits/stdc++.h>
using namespace std;

class first{
public:
    first(){
        cout<<"       HELLOOO :D   "<<endl;
    }
    void print(){
         cout<<" This is OUR FIRST GAME :)"<<endl;
    }
    void player1(char a[3][3],string n1);
};
class second{
    int d;
    char name[20];
public:
    void show(char *i){
        strcpy(this->name,i);
        cout<<this->name<<endl;
    }
    void player2(char a[3][3],string n2);
    void board(char a[3][3]);
};
class derived:public first,public second{
    int b;
public:
    derived(){
        cout<<"   It's HIMU ;)"<<endl;
    }
    int checkPlayerOne(char a[3][3]);
    int checkPlayerTwo(char a[3][3]);
};
void first::player1(char a[3][3],string n1){
    int p1;
    cout<<n1<<"!!"<<"Its your turn(X) now!(Please press one number(1-9) from keyboard):"<<endl;
    cin>>p1;
    if(p1==1){
        a[0][0]='X';
    }
    else if(p1==2){
        a[0][1]='X';
    }
    else if(p1==3){
        a[0][2]='X';
    }
    else if(p1==4){
        a[1][0]='X';
    }
    else if(p1==5){
        a[1][1]='X';
    }
    else if(p1==6){
        a[1][2]='X';
    }
    else if(p1==7){
        a[2][0]='X';
    }
    else if(p1==8){
        a[2][1]='X';
    }
    else if(p1>9){
        cout<<"Invalid input"<<endl;
    }
    else{
        a[2][2]='X';
    }

}
void second::player2(char a[3][3],string n2){
    int p2;
    cout<<n2<<"!!"<<"Its your turn(O) now!(Please press one number(1-9) from keyboard):"<<endl;
    cin>>p2;
    if(p2==1){
        a[0][0]='O';
    }
    else if(p2==2){
        a[0][1]='O';
    }
    else if(p2==3){
        a[0][2]='O';
    }
    else if(p2==4){
        a[1][0]='O';
    }
    else if(p2==5){
        a[1][1]='O';
    }
    else if(p2==6){
        a[1][2]='O';
    }
    else if(p2==7){
        a[2][0]='O';
    }
    else if(p2==8){
        a[2][1]='O';
    }
    else if(p2>9){
        cout<<"Invalid input"<<endl;
    }
    else{
        a[2][2]='O';
    }
}
void second::board(char a[3][3]){
    cout<<"     |     |     "<<endl;
	cout<<"  "<<a[0][0]<<"  |  "<<a[0][1] <<"  |  "<<a[0][2]<<endl;

	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;

	cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;

	cout<< "_____|_____|_____"<<endl;
	cout<< "     |     |     "<<endl;

	cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;

	cout<<"     |     |     "<<endl<<endl;
}
int derived::checkPlayerOne(char a[3][3]){
    if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')return 1;
    if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')return 1;
    if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')return 1;
    if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')return 1;
    if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')return 1;
    if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')return 1;
    if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')return 1;
    if(a[2][0]=='X'&&a[1][1]=='X'&&a[0][2]=='X')return 1;
 }
 int derived::checkPlayerTwo(char a[3][3]){
    if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')return 1;
    if(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O')return 1;
    if(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')return 1;
    if(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')return 1;
    if(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')return 1;
    if(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')return 1;
    if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')return 1;
    if(a[2][0]=='O'&&a[1][1]=='O'&&a[0][2]=='O')return 1;
}
int main(){
    char choice;
    do{
        char a[3][3]={
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'},
        };
        int i;
        cout<<"                              1.START GAME"<<endl;
        cout<<"                              2.QUIT GAME"<<endl;
        cout<<"Enter 1 or 2"<<endl;
        cin>>i;
        if(i==1){
            system("cls");
        }
        if(i==2){
            return 0;
        }
        string n1,n2;
        first *p;
        derived ob;
        p=&ob;
        p->print();
        second ob1;
        ob1.show("WELCOME TO NOUGHTS AND CROSSES!!!");

        cout<<"Enter player1 name: ";
        cin>>n1;
        cout<<"Enter player2 name: ";
        cin>>n2;
        cout<<"PLAYER1:"<<"("<<n1<<")"<<" "<<" "<<"VS"<<" "<<" "<<"PLAYER2:"<<"("<<n2<<")"<<endl;
        system("cls");
        ob.board(a);
        ob.player1(a,n1);
        system("cls");
        ob.board(a);
        ob.player2(a,n2);
        system("cls");
        ob.board(a);
        int cnt=1;
        for(;;){
        ob.player1(a,n1);
        if(ob.checkPlayerOne(a)==1){
            ob.board(a);
            cout<<"WHOOOO!!"<<" "<<n1<<" "<<"WIN!"<<endl;
            break;
        }
        system("cls");
        ob.board(a);
        if(cnt==4){
            ob.board(a);
            cout<<"AWW!Match Draw!"<<endl;
            break;
        }
        ob.player2(a,n2);
        system("cls");
        ob.board(a);
        if(ob.checkPlayerTwo(a)==1){
            ob.board(a);
            cout<<"WHOOOO!!"<<" "<<n2<<" "<<"WIN!"<<endl;
            break;
        }
        cnt++;
    }
        cout<<"Do you want to play again?(y/n)"<<endl;
        cin>>choice;
        if(choice=='N' || choice=='n'){
            cout<<"BYE SEE YOU"<<endl;
            break;
        }
        if(choice=='Y' || choice=='y'){
            system("cls");
        }
    }
    while(choice =='Y'|| choice=='y');

    return 0;
}
