class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        int x;
        if(num>=1 && num<10){
            return num;
        }
        else
            while(num/10!=0){   
                sum = 0;       
                while(num>0){
                    x = num%10;
                    num = num/10;
                    sum += x;
                    }
                num = sum;
                }
            return sum;
    }
};
