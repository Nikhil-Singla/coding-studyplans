// BASE code that exceeded Time Limit
class Solution {
public:
    int tribonacci(int n) 
    {
        if(n == 0) {return 0;}
        if(n == 1) {return 1;}
        if(n == 2) {return 1;}
        return(tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3)) 
    }
};

// Fastest Code using arrays passed testcases
class Solution {
public:
    int tribonacci(int n) 
    {
        if(n == 0) {return 0;}
        if(n == 1) {return 1;}
        if(n == 2) {return 1;}
        vector<int> trib(n+1);
        trib[0] = 0;
        trib[1] = 1;
        trib[2] = 1;
        for(int i = 3; i <= n; i++)
        {
            trib[i] = trib[i-1]+trib[i-2]+trib[i-3];
        }
        return trib[n];
    }
};

// Fastest code with constant memory usage
class Solution {
public:
    int tribonacci(int n) 
    {
        if(n == 0) {return 0;}
        if(n == 1) {return 1;}
        if(n == 2) {return 1;}
        uint first = 0, second = 1, third = 1, result;
        while((n--)-2)
        {
            result = first + second + third;
            first = second;
            second = third;
            third = result;
        }
        return result;
    }
};