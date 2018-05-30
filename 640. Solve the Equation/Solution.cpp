/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 38.80 %
    Runtime : 4 ms
    Testcase : 52 / 52 passed
    Ranking : Your runtime beats 47.77 % of cpp submissions.
}
*/

class Solution {
public:
    string solveEquation(string equation) {
        int coefficient = 0, value = 0, sign = 1, pos = 0;
        
        equation = equation + "+";
        if(equation[0] == '-')
            equation = "0" + equation;
        for(int i = 0; i < equation.length(); i++)
        {
            if(equation[i] == '+' || equation[i] == '-' || equation[i] == '=')
            {
                string temp = equation.substr(0, i);
                if(temp.back() == 'x')
                {
                    if(temp.length() > 2 )
                        coefficient += (stoi(temp.substr(0, temp.length()-1))) * sign;
                    else
                    {
                        if(temp.length() == 1)
                            coefficient += sign;
                        else if(temp.length() == 2 && temp[0] == '+')
                            coefficient += sign;
                        else if(temp.length() == 2 && temp[0] == '-')
                            coefficient -= sign;
                        else if(temp.length() == 2 && isdigit(temp[0]))
                            coefficient += (stoi(temp.substr(0,1))) * sign;
                    }
                }
                else
                    value += (stoi(temp)) * sign * (-1);
                
                equation.erase(0,i);
                i = 0;
                
                if(equation[i] == '=')
                {
                    sign = -1;
                    equation.erase(0, 1);
                }
            }
        }
        
        if(coefficient == 0 && value == 0)
            return "Infinite solutions";
        else if(coefficient == 0 && value != 0)
            return "No solution";
        else if(coefficient != 0)
            return "x=" + to_string(value/coefficient);
    }
};