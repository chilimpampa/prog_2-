#pragma once
#include <string>
#include <vector>

namespace apartment {

	class Owner {
	private:
		std::string fio;
		std::string name;

	public:
		Owner(const std::string& fio, std::string& name);
		std::string GetFIO() const;
		std::string GetNAME() const;
	};

	class Flat {
	private:
		int num;
		std::string owner_fio_name;

	public:
		Flat(const std::string& owner_fio_name, int num);
		Flat(const Owner& owner, int num);
		int GetNUM() const;
		std::string GetNAME() const;
	};


}

