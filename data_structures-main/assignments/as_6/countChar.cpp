#include<iostream>
#include<string>
using namespace std;


int countChar(string phrase,char letter)
   {
      if(phrase.length() > 0)
        {
          return countChar(phrase.substr(1,phrase.length()-1),letter) + (phrase[0] == letter);
          // returns my original phrase moved over one character over    adds booloean value
        }
      else if (phrase.length()<=0)
        {
          return 0;
        }
    }

int main()
  {
    cout<<"this program counts the amount of times a given vowell appears in a given phrase."<<endl;
    string strg1("a like to eat pies with rasberry filling");// instantiates the string object

    cout << "Count of: a - " << countChar(strg1, 'a') << endl;
    cout << "Count of: e - " << countChar(strg1, 'e') << endl;
    cout << "Count of: i - " << countChar(strg1, 'i') << endl;
    cout << "Count of: o - " << countChar(strg1, 'o') << endl;
    cout << "Count of: u - " << countChar(strg1, 'u') << endl;
    cout << "Count of: y - " << countChar(strg1, 'y') << endl;

    /*for(int i=0;i<strg1.length();i++)
      {
        cout<<strg1.substr(i+1,strg1.length())<<endl;
      }*/
  }
