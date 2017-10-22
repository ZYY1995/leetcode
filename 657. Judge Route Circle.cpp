class Solution {
public:
    bool judgeCircle(string moves) {
        int R = 0,U = 0;
        for (int i = 0;i < moves.size();i++)
        {
            switch (moves[i])
            {
                case 'R':
                    R++;
                    break;
                case 'L':
                    R--;
                    break;
                case 'U':
                    U++;
                    break;
                case 'D':
                    U--;
                    break; 
            }
        }
        return R == 0 && U == 0;
    }
};