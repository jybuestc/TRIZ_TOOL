//
//  main.cpp
//  triz
//
//  Created by apple on 15/12/3.
//  Copyright © 2015年 apple. All rights reserved.
//

#include <iostream>
#include "TechnicalAnalysis.h"
#include "PhysicField.h"
#include "Howto.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"Already have a draft solution? (Y/N)";
    char a;
    cin>>a;
    if(a=='Y' or a=='y'){
        cout<<"Being in General Solution Model path."<<endl;
    choice1:        cout<<"1. 技术分析 2. 物场模型 3. How-to模型 :";
        int b;
        cin>>b;
        switch(b){
            case 1:
                ta method1;
                method1.startAnalysis();
                break;
            case 2:
                pf _method2;
                _method2.startAnalysis();
                break;
            case 3:
                ht _method3;
                _method3.startAnalysis();
                break;
            default: goto choice1;
        }
    }
    else if (a=='N' or a=='n'){
        cout<<"Being in Solution Create path."<<endl;
        
    }
    else{
        cout<<"Invalid input, exit."<<endl;
    }
    return 0;
}
