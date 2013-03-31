//
//  main.cpp
//  BinarySearch
//
//  Created by Cong on 13-2-26.
//  Copyright (c) 2013年 liuchyin. All rights reserved.
//

#include <iostream>
using namespace std;

int BinarySearch(int data[], int start, int end, int k){
    while(start <= end){
        int mid = start + (end - start) / 2;
        //cout<<mid<<endl;
        if(data[mid] == k)
            return mid;
        else if(data[mid] < k){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    //if(start > end)
        return -1;
}


int main(int argc, const char * argv[])
{
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<BinarySearch(data, 0, 9, 0)<<endl;
    
    return 0;
}

