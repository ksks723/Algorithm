class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fiz;
        for(int i=1;i<n+1;i++)
        {
            if(i%3==0 && i%5==0)
               { fiz.push_back("FizzBuzz");}
            else if(i%3==0)
                {fiz.push_back("Fizz");}
            else if(i%5==0)
                {fiz.push_back("Buzz");}
            else
                {
                fiz.push_back(to_string(i));}
        }
        return fiz;
    }
};