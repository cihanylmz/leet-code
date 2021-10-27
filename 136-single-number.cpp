//LeetCode 136. Try to find the number which is not recurring in the list.

int singleNumber(int A[], int n) {
    int result = 0;
    for (int i = 0; i<n; i++)
    {
        result ^=A[i]; //Used XOR. If list is [2,2,1,1,3], this line corresponds to:
    }                  //0 ^ 2 ^ 2 ^ 1 ^ 1 ^ 3. x^x = 0, so at the and only : 0 ^ 3 remains. Which is 3
    return result;
}

