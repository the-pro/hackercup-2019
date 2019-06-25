#include<iostream>
using namespace std;
int main ()
{
  int t, dot = 0, a = 0, b = 0;
  char s[500000];
  cin >> t;
  for (int i = 0; i < t; i++)
    {
      cin >> s;
      dot = 0;
      a = 0;
      b = 0;
      for (int j = 0; s[j] != '\0'; j++)
	{
	  if (s[j] == 'A')
	    a++;
	  if (s[j] == 'B')
	    b++;
	  if (s[j] == '.')
	    dot++;
	}
      cout << "Case #" << i + 1 << ": ";
      if (a + b > dot)
	{
	  if (dot == 0)
	    cout << "N";
	  else
	    cout << "Y";
	}
      else
	cout << "N";
      cout << endl;
    }
  return 0;
}
