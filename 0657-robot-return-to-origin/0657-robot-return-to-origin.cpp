class Solution {
public:
    bool judgeCircle(string moves) {
       int n =  moves.length();
        int lefRig = 0;
        int updown = 0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                lefRig--;
            }
            else if(moves[i] =='R'){
                lefRig++;
            }
            else if(moves[i] == 'D'){
                updown--;
            }
            else if(moves[i] == 'U'){
                updown++;
            }
        }
        
        if(lefRig == 0 and updown == 0){
            return true;
        }
        else{
            return false;
        }
        
    }
};