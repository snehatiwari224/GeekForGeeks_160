int fun(string s) {
    // code here
    set<string>a;
    for(int i=0;i<s.size()-1;i++){
        a.insert(s.substr(i,2));
    }
    return a.size();
}