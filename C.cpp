#include<bits/stdc++.h> 
using namespace std; 


void solve() { 
    int input_num; 
    cin >> input_num; 

    vector<int> result; 
    int power_of_two = 1; 

    while (power_of_two < input_num) { 
        result.push_back(power_of_two);
        power_of_two *= 2; 
    } 
    int last_element = result[result.size() - 1]; 
    int remaining = input_num - last_element; 

    bool hasoneatend = false; 
    if (remaining % 2) { 
        hasoneatend = true; 
        remaining--; 
    } 

    for (int i = 31; i >= 0; i--) { 
        int ith_bit = remaining & (1 << i); 
        if (ith_bit) { 
            last_element += pow(2, i); 
            result.push_back(last_element); 
        } 
    } 

    if (hasoneatend) { 
        result.push_back(input_num); 
    } 

    
    int numelements = result.size(); 
    cout << numelements << endl; 
    for (int i = numelements - 1; i >= 0; i--) { 
        cout << result[i] << " "; 
    } 
    cout << endl; 
} 

int main() { 
    int t; 
    cin >> t; 
    for(int i = 1; i <= t; i++){ 
        solve(); 
    } 
}