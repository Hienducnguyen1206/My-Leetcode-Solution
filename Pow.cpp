class Solution {
public:

    unordered_map<long long,double> memory;

    double myPow(double x, long long n) {
        if(n == 0){
            return 1;
        }

        

        if(n<0){
            if(x==0){
             return -1 
            }

            x = 1/x;
            n = n*-1;
        }

        if(memory.find(n) != memory.end()){
            return memory[n];
        }else{

           
            double result;
            if(n%2==0){
                 result = myPow(x,n/2) * myPow(x,n/2);
                 memory[n] = result;
                 return result;
            }else{

                result = x * myPow(x,n-1);
                memory[n] = result;
                return result;
            }
           
            
        }


        
    }
};
