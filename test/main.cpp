#include <iostream>
#include <memory>

template <typename T>
T sum(const T &a, const T &b)
{
	return a+b;
}

template <typename T>
class CTest
{
public:
    CTest(T &a)
    {
        m_value = a;
    }
    virtual ~CTest(){}
    void Show()
    {
        std::cout << m_value << std::endl;
    }
protected:
private:
    T m_value;
};
int main()
{
	std::cout << "__cplusplus : " << __cplusplus << std::endl;

	int a = 1;
	int b = 2;
	std::cout << "sum int : " << sum(a, b) << std::endl;

	float c = 1.11111;
	float d = 2.22222;
	std::cout << "sum float : " << sum(c, d) << std::endl;

	std::string str1("ab");
	std::string str2("cd");
    std::cout << "sum string : " << sum(str1, str2) << std::endl;

    std::string i = "3.1415926";
    CTest<std::string> test(i);
    test.Show();

	return 0;	
}

