// 1️⃣ [Basic Prefix Sum Calculation]
// 📌 Problem: Given an array, compute prefix sum for each index.
// 🔹 Concept: Store cumulative sum at each index.

/*
arr[] = {1, 2, 3, 4}  
prefix[] = {1, 3, 6, 10}  
*/
#include<iostream>
#include<bits/stdc++.h>

int main()
{
    std::vector<int>arr = {1, 2, 3, 4};
    for(int i=1;i<arr.size();i++)
    {
        arr[i] = arr[i-1] + arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}