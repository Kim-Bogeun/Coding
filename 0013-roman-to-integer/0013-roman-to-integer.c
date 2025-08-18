int romanToInt(char* s) {
    int map[256] = {0};
    map['I'] = 1; 
    map['V'] = 5;
    map['X'] = 10; 
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int res = 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        int cur = map[(char)s[i]];
        int nxt = map[(char)s[i+1]];
        if(cur < nxt){
            res -= cur;
        }
        else{
            res += cur;
        }
    }

    return res;
}