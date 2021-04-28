#include <iostream>
using namespace std;



int Time_calculate(int time_array[], int n);


int main(){

    int n;
    cout << "Enter the number of people to cross: ";
    cin >> n;

    int array_of_time[n];

    for(int i = 0; i<n; i++){

        cout << "Enter the time taken for person " << i+1 << " to cross: ";
        cin >> array_of_time[i];

    }
    int temp;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(array_of_time[i+1]<array_of_time[i]){
                temp = array_of_time[i];
                array_of_time[i] = array_of_time[i+1];
                array_of_time[i+1] = temp;
            }
        }
    }

    

    cout << "The minimum time taken for everyone to cross is: " << Time_calculate(array_of_time,n) << '\n';

}


int Time_calculate(int time_array[], int n){
    
    if (n < 3){
        
        return time_array[n - 1];
    
    }
    
    else if (n == 3){
    
        return time_array[0] + time_array[1] + time_array[2];
    
    }
    
    else{
    
        int temp1 = time_array[n - 1] + time_array[n - 2] + 2*time_array[0];
        int temp2 = time_array[0] + time_array[n - 1] + 2*time_array[1];
        
        if (temp1 < temp2){
            
            return temp1 + Time_calculate(time_array, n - 2);
        
        }
        
        else if (temp2 < temp1){
            
            return temp2 + Time_calculate(time_array, n - 2);
        
        }
        
        else{
            
            return temp2 + Time_calculate(time_array, n - 2);
        
        }
    
    }

}


