#include <iostream>

struct Data {
	std::string msg;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main()
{
	Data data;
	data.msg = "Test";
	uintptr_t tmp = serialize(&data);
	Data *result = deserialize(tmp);

	std::cout << "data: " << &data << " " << data.msg << std::endl;
	std::cout << "result: " << result << " " << result->msg << std::endl;
	return (0);
}