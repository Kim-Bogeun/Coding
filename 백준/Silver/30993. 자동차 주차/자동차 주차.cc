# include<iostream>

using namespace std;

long long fac(int n){
    if(n==0){
        return 1;
    }
    
    
    long long result = 1;
    
    for(int i = 1; i <= n; i++){
        result = result * i;
    }
    
    return result;
}

int main(){
    
    int n, a, b, c;
    
    cin >> n >> a >> b >> c;
 
    long long output = fac(n)/(fac(a)*fac(b)*fac(c));
    
    cout << output << endl;
    
    
    return 0;
}