#include<iostream>

using namespace std;

void test(int x)

{

try{

if(x==1) throw x; 

else if (x==0) throw 'x'; 
else if (x==-1) throw 1.0; 

cout << "End of try block";

}

catch(char c)

{

cout<<"Caught an Character \n";

}

catch(int m)

{

cout<<"caught an integer \n";

}

catch(double d)

{

cout<<"Caught a float \n";

}

cout<<"End of Try -Catch block";

}

int main(){

test(1);

test(0);

test(-1);

test (2);
}