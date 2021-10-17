class Solution {
public:
   
    string countAndSay(int n) {
        string say="1";
        string container="";            
        int count=1 ;            
        for (int i = 2;i<=n;i++){
          for (int j = 0;j<say.size();j++)   
               if (say[j]== say[j+1] )
                      count ++;
               else {
                    container+= to_string(count);
                    container += say[j];
                    count = 1;
                }

       say = container;        
       container = "";        
      }

        return say;
    }
};