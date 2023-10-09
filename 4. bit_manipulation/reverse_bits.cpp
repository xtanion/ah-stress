unsigned int reverse(unsigned int A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more
    unsigned int B = 0;
    for (int i = 0; i < 32; i++)
    {
        B = B << 1;
        B = B | (A & 1);
        A = A >> 1;
    }
    return B;
}
