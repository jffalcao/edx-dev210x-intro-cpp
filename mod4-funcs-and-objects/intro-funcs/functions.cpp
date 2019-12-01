int AddTwo(int i)
{
    return i + 2;
}

int main(int argc, char const *argv[])
{
    int i = 4;
    int j = AddTwo(i);
    AddTwo(j);
    j=AddTwo(j);
    return 0;
}

