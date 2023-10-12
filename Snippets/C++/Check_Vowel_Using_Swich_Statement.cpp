#include<iostream>
using namespace std;

int main()
{
  char ch;

  cout<<"Input a character : ";
  cin>>ch;

  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      cout<<ch<<" is a vowel.";
      break;
    default:
      cout<<ch<<" is not a vowel.";
  }

  return 0;
}