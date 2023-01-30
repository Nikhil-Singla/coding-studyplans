// First or BASE Solution of Code
class Solution {
public:
    int fib(int n) 
    {
        if(n == 0) {return 0;}
        if(n == 1) {return 1;}
        return(fib(n-1) + fib(n-2));
    }
};

// Quicker Method using Array's instead of recursion
class Solution {
public:
    int fib(int n) 
    {
        vector<int> holder;
        if(n == 0) {return 0;}
        holder.push_back(0);
        if(n == 1) {return 1;}
        holder.push_back(1);
        holder.resize(n+1);
        for(int i = 2; i <= n; i++)
        {
            holder[i] = holder[i-1] + holder[i-2];
        }
        return(holder[n]);
    }
};

// Quickest method using constant space.
class Solution {
public:
    int fib(int n) 
    {
        if(n == 0) {return 0;}
        if(n == 1) {return 1;}
        int firstIndex = 0, secondIndex = 1;
        int result; 
        for(int i = 2; i <= n; i++)
        {
            result = firstIndex + secondIndex;
            firstIndex = secondIndex;
            secondIndex = result;
        }
        return result;
    }
};