bool isPalindrome(char* s) {
    int len=strlen(s);
    int end=len;int start=0;
    
    for(int i=0;i<len;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }

    while(start<end){
        while( start<end && (s[start]<'a' || s[start]>'z') && (s[start]<'0' || s[start]>'9' )){
            start++;
        }
         while( start<end && (s[end]<'a' || s[end]>'z') && (s[end]<'0' || s[end]>'9' )){
            end--;
        }

        if(s[start]==s[end]){
            start++;
            end--;
        }else{
            return false;
        }
        
    }
    return true;
}
