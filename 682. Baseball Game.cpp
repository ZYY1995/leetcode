class Solution {
public:
    int calPoints(vector<string>& ops) {
        int valid_point[1000];
        int point = -1;
        int sum = 0;
        for(int i = 0;i<ops.size();i++)
        {
            if(ops[i].compare("C") == 0)
            {
                sum -= valid_point[point];
                point--;
            }
            else if(ops[i].compare("D") == 0)
            {
                int tmp = 2 * valid_point[point];
                point++;
                valid_point[point] = tmp;
                sum += valid_point[point];
            }
            else if(ops[i].compare("+") == 0)
            {
                int tmp = valid_point[point] + valid_point[point - 1];
                point++;
                valid_point[point] = tmp;
                sum += valid_point[point];
            }
            else
            {
                point++;
                valid_point[point] = atoi(ops[i].c_str());
                sum += valid_point[point];
            }
        }
        return sum;
    }
};