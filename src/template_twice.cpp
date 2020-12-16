template < typename T >

T twice(T x)
{
    return x * 2;
}

int main()
{
    std::cout << "twice(11)="s << twice(11) << "\n"s;
    std::cout << "twice(0.4)="s << twice(0.4) << "\n"s;
    // std::cout << "twice(\"a\")="s << twice("a") << "\n"s;
}
