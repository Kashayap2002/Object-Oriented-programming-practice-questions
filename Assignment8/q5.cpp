#include <iostream>
using namespace std;
void test(int x)

{

try{

if(x==1) throw x; 

else if (x==0) throw 'x'; 

else if (x==-1) throw 1.0; 

cout << "\nEnd of try block.";

}

catch(...)

{

cout<<"\nCaught an Exception \n";

}

}

int main()

{

cout<<"\nTesting Generic catch\n";

test(-1);

test(0);

test(1);

return 0;

}