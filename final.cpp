#include <iostream>
#include <string>
using namespace std;
int count_line(string choice);
int count_char(string choice);
int main(){

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