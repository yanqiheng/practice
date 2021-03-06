class Solution {
public:
    int Add(int num1, int num2)
    {
        int sum,sumx;
        while(num2!=0){  //进位数为0时截止
            sum=num1^num2; //异或值：二进制相加不进位的值
            sumx=(num1&num2)<<1;//进位值：与值并右移一位
            num1=sum;
            num2=sumx;
        }
        return num1;
    }
};