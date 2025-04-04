# include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int n;
    cin >> n;
    
    int* numbers = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    

    
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            if(numbers[j] > numbers[j+1]){
                swap(numbers[j], numbers[j+1]);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    delete[] numbers;
}