#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    if (input.compare("PAS") == 0)
    {
        cout << "var data:array[1..10000] of longint;\n    n,i,j,temp:longint;\nbegin\n  readln(n);\n  for i:=1 to n do readln(data[i]);\n  for i:=1 to n-1 do\n    for j:=i+1 to n do\n      if (data[i]>data[j]) then\n      begin\n        temp:=data[i];\n        data[i]:=data[j];\n        data[j]:=temp;\n      end;\n  for i:=1 to n do writeln(data[i]);\nend.";
    }
    else if (input.compare("CPP") == 0)
    {
        cout << "int data[10001];\nint n,i,j,temp;\nint main(){\n  scanf(\"%d\",&n);\n  for (i=1;i<=n;i++) scanf(\"%d\",data[i]);\n  for (i=1;i<=n-1;i++)\n    for (j=i+1;j<=n;j++)\n      if (data[i]>data[j]){\n        temp=data[i];\n        data[i]=data[j];\n        data[j]=temp;\n      }\n  for (i=1;i<=n;i++) printf(\"%d\\n\",data[i]);\n  return 0;\n}";
    }
    return 0;
}
