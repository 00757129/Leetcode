class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> kRows(rowIndex+1);//第K行的vector大小为 rowIndex+1
        for(int i = 0; i <= rowIndex; i++)//利用前一行求后一行，第K行要循环K遍
            {
            kRows[i] = 1;//行末尾为1
            for(int j = i; j > 1; j--)//每一行的更新过程
                {
                    kRows[j-1] = kRows[j-2] + kRows[j-1];
                }
            }
        return kRows;   
    }
};
————————————————
版权声明：本文为CSDN博主「QuantumYou」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/QuantumYou/article/details/120057186
