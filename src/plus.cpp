int plus(int x, int y)
{
    return x + y;
}

double plus(double x, double y)
{
    return x + y;
}

std::string plus(std::string x, std::string y)
{
    return x + y;
}


int main()
{
    std::cout << "11+12="s << plus(11, 12) << "\n"s;
    std::cout << "0.4+0.5="s << plus(0.4, 0.5) << "\n"s;
    std::cout << "a+b="s << plus("a", "b") << "\n"s;
}