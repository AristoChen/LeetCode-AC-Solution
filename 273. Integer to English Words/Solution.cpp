/*
Submission Detail:{
    Difficulty : Hard
    Acceptance Rate : 22.84 %
    Runtime : 5 ms
    Testcase : 601 / 601 passed
    Ranking : Your runtime beats 84.01 % of cpp submissions.
}
*/

class Solution {
public:
    string numberToWords(int num) {
        
        if(num == 0)
            return "Zero";
        
        string answer = "";
        int count = 0;
        
        if(num >= 1000000000)
        {
            while(num >= 1000000000)
            {
                count++;
                num -= 1000000000;
            }
            answer += numberLowerThanThousand(count);
            count = 0;
            answer += "Billion ";
        }
            
        if(num >= 1000000)
        {
            while(num >= 1000000)
            {
                count++;
                num -= 1000000;
            }
            answer += numberLowerThanThousand(count);
            count = 0;
            answer += "Million ";
        }
        
        if(num >= 1000)
        {
            while(num >= 1000)
            {
                count++;
                num -= 1000;
            }
            answer += numberLowerThanThousand(count);
            count = 0;
            answer += "Thousand ";
        }
        
        answer += numberLowerThanThousand(num);
        
        return answer.substr(0, answer.size()-1);
    }
    
    string numberLowerThanThousand(int num)
    {
        string answer = "";
        int count = 0, digits = 0;
        if(num >= 100)
        {
            while(num >= 100)
            {
                count++;
                num -= 100;
            }
            answer += digitsToWord(count);
            answer += "Hundred ";
            count = 0;
        }
            
        
        //cout << num << " ";
        
        if(num >= 20)
        {
            digits = num % 10;
            num = num - digits;
            answer += between20and90(num);
            num = digits;
        }
            
        //cout << num << " ";
        
        if(num >= 10 && num < 20)
            answer += tensToWord(num);
        if(num >= 1 && num < 10)
            answer += digitsToWord(num);
        
        return answer;
    }
    
    string between20and90(int num)
    {
        switch(num)
        {
            case 20:
                return "Twenty ";
            case 30:
                return "Thirty ";
            case 40:
                return "Forty ";
            case 50:
                return "Fifty ";
            case 60:
                return "Sixty ";
            case 70:
                return "Seventy ";
            case 80:
                return "Eighty ";
            case 90:
                return "Ninety ";
            default:
                return "";
        }
    }
    
    string tensToWord(int num)
    {
        switch(num)
        {
            case 10:
                return "Ten ";
            case 11:
                return "Eleven ";
            case 12:
                return "Twelve ";
            case 13:
                return "Thirteen ";
            case 14:
                return "Fourteen ";
            case 15:
                return "Fifteen ";
            case 16:
                return "Sixteen ";
            case 17:
                return "Seventeen ";
            case 18:
                return "Eighteen ";
            case 19:
                return "Nineteen ";
            default:
                return "";
        }
    }
    
    string digitsToWord(int num)
    {
        switch(num)
        {
            case 1:
                return "One ";
            case 2:
                return "Two ";
            case 3:
                return "Three ";
            case 4:
                return "Four ";
            case 5:
                return "Five ";
            case 6:
                return "Six ";
            case 7:
                return "Seven ";
            case 8:
                return "Eight ";
            case 9:
                return "Nine ";
            default:
                return "";
        }
    }
};