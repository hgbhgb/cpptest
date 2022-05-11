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

void encrypt(std::string &str)
{
    for (auto &v : str)
    {
        v ^= 10;
    }
}

void decrypt(std::string &str)
{
    for (auto &v : str)
    {
        v ^= 10;
    }
}

void testEncrypt()
{
    std::string rawString("hgbhgb");
    encrypt(rawString);
    std::cout << "after encrypt, str : " << rawString << std::endl;
    decrypt(rawString);
    std::cout << "after decrypt, str : " << rawString << std::endl;
}

int main()
{
	std::cout << "__cplusplus : " << __cplusplus << std::endl;
    std::cout << __FILE__ << ":" << __LINE__  << "----" << __FUNCTION__ << std::endl;

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

    testEncrypt();

	return 0;	
}

