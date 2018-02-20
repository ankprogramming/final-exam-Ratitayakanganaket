#include <iostream>
  using namespace std;

 int main() {
     cout <<"welcome to CLI CalculatorV1.00" <<endl;

     float a,b, result,cmd;
     cout << "Enter first number : ";
     cin >> a;
     cout << "Enter second number : ";
     cin >> b;

 do{
     cout <<"Menu"<<endl;
     cout <<"1.+"<<endl;
     cout <<"2.-"<<endl;
     cout <<"3.*"<<endl;
     cout <<"4./"<<endl;
     cout <<"5.quit"<<endl;
if (cmd==1){
    result = a+b ;
    cout <<"Result = " << result << endl << endl;
}   else if (cmd==2){
    result = a-b ;
    cout <<"Result = " << result << endl << endl;
}   else if (cmd==3){
    result = a*b ;
    cout <<"Result = " << result << endl << endl;
}   else if (cmd==4){
    result = a/b ;
    cout <<"Result = " << result << endl << endl;
}else{
break;
}
 }while(1);

 return 0 ;
 }
