
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    char string[10] = {'a', 'b'};
    // char *str1 = "abcdefghi";
    //    cin.get(string,6,'.');
    //    cout<<str1;
    cin>>string;  //stop when reach to blank
    //    scanf("%s",string); //stop when reach to blank
    // gets(string); //read blank and tab
    cout << string;
    //    strcpy(string, str1);
    //    string= str1;
    //    printf("%s\n", string);
    return 0;
}
