class Test
{
    int a;
    int *p;

    Test(int x)
    {
        a = x;
        p = new int[a]; // a new array is created of size a....and pointer p will be pointing to that array
    }

    Test(Test &t)
    {
        a = t.a;
        // p = t.p;// this will point to previously created array hence not creating a new array...
        p = new int[a];// this will be pointing to new array created
    }
};