//
//  main.cpp
//  junyi
//
//  Created by Gary on 2018/5/9.
//  Copyright © 2018年 Gary. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int input;
    int count =0;
    cin >> input;
    for (int i=1; i<=input; i++) {
        if (i%3==0 || i%5==0) {
            if(i%15==0){
                cout << i << " ";
                count++;
            }
        }
        else{
            cout << i << " ";
            count++;
        }
        
    }
    cout << endl <<count <<endl;
    return 0;
}
