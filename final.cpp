#include <iostream>
#include <string>
using namespace std;
int count_line(string choice);
int count_char(string choice);
int main(){
string choice;
int line_count = 0;
int char_count = 0;
cout << "Enter a Word" << endl;
cin >> choice;
line_count = count_line (choice);
char_count = count_char(choice);
cout << "line count = " << line_count << endl;
cout << "char count = " << char_count << endl;
}
int count_line(string choice){
    int line_count = 0;
    if ( choice.back() == '\n'){
        line_count++;
    }
    return line_count;
}
int count_char(string choice){
    int char_count = choice.size();
    return char_count;
}