#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    int cmd;
    string name;
    string line;
    ofstream writefile;
    ifstream readfile;

    do{
        cout << "Menu"<<endl;
        cout<<"1.add student."<<endl;
        cout <<"2.list student."<<endl;
        cout<<"3.Xname."<<endl;
        cout<<"4.search."<<endl;
        cout<<"5.quit."<<endl;
        cout<<"Please enter menu : ";
        cin>>cmd;

        if(cmd ==1){
            cout<<"Enter std name :";
            cin>>name;
             writefile.open("std.txt",fstream::app);
            if(writefile.is_open()){
                writefile<<name<<endl;
                writefile.close();
            }else{
                cout<<"Unable to open file";

            }
        }else if (cmd==2){
         readfile.open("std.txt");
            if(readfile.is_open()){
                while (getline(readfile,line)){
                    cout<<line<<endl;
                }
                readfile.close();
            }
        }else if (cmd==3){
            readfile.open("std.txt");
            if (readfile.is_open()){
                cout <<line <<endl;
            }
        }else if (cmd==4){
            readfile.open("std.txt");
            if (readfile.is_open()){
                while (getline(readfile,line))
{
            if(name[cmd]){
                cout << "search name: ";
                cin >> cmd;
                cout << name[cmd]<<"Found"<<endl;

            }
            else cout << name[cmd]<<"Not Found"<<endl;
}            }
        }
        readfile.close();
    }else{
break;
}
 }while(1);

 return 0 ;
