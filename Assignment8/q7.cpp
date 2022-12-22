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

catch(...)

{

cout<<"Caught an Exception \n";

}

}

int main()

{

Cout<<"Testing Generic catch";

test(-1);

test(0);

test(1);

return 0;

}