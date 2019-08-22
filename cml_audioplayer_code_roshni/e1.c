    #include <stdio.h>
    enum week { sunday="ERR01", monday, tuesday, wednesday, thursday, friday, saturday };
    int main()
    {
        enum week today;
        //today = wednesday;
        printf("Day %s",today);
        return 0;
    }
