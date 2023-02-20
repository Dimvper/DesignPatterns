#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using namespace std;

struct journal
{
    string title;
    vector<string> entries;

    journal(const string &title) : title(title) {}

    void add_entry(const string &entry){
        static int count = 1;
    }
};


int main(){
    cout << "Hello World!" << endl;    
    return 0;
}