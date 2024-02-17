uint32_t reverseBits(uint32_t n) {
    uint32_t ans=0;
    uint32_t mask=1;
    for(int i=0;i<32;i++){
        if(n&mask==1){
            ans=ans|mask;
        }
        n=n>>1;
        if(i==31)break;
        
        ans=ans<<1;
    }
    return ans;
}
