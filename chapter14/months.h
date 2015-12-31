struct month{
    char name[10];
    char suoxie[3];
    int days;
    int no;
};

struct month year[12] =
    {
        {"January", "Jan", 31, 1},
        {"February", "Feb", 28, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "may", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12}
    };
