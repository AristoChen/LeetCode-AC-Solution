/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        if(find_if(employees.begin(), employees.end(), [id](Employee* a){return a->id == id;}) == employees.end())
            return 0;
        
        int pos = find_if(employees.begin(), employees.end(), [id](Employee* a){return a->id == id;}) - employees.begin();
        int answer = employees[pos]->importance;
        for(int i = 0; i < employees[pos]->subordinates.size(); i++)
            answer += getImportance(employees, employees[pos]->subordinates[i]);
        
        return answer;
    }
};