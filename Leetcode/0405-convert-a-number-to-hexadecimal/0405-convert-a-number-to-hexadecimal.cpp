class Solution {
public:
    string toHex(int n) {
        string str="";
        unsigned int num = n; //converting -ve no. to +ve no.

        if(n==0)        //edge_case
            return "0";
         
        while(num!=0){
            int rem = 0;
            char ch;

            rem = num%16;
            if(rem<10)
                ch = rem + 48;  //ASCII(0)==48
            else
                ch = rem + 97-10; //ASCII(a) == 97

            str+=ch;
            num /=16;
        }
        int i=0, j=str.size()-1;
        while(i<j){
            swap(str[i],str[j]);
            i++;
            j--;
        }

        return str;
    }
};