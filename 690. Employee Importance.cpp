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
        vector<int> sub;
        int result = 0;
        map<int,Employee*> import;
        queue<int> temp;
        for(int i = 0;i<employees.size();i++)
        {
            import[employees[i]->id] = employees[i];
            if(employees[i]->id == id)
            {
                temp.push(id);
            }
        }
        while(!temp.empty())
        {
            result += import[temp.front()]->importance;
            sub = import[temp.front()]->subordinates;
            temp.pop();
            for(int i = 0;i<sub.size();i++)
            {
                temp.push(sub[i]);
            }
        }
        
        return result;
    }
};