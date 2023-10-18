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
		std::string GetFIO_OWNER() const;
		std::string GetNAME_OWNER() const;
	};

	class Flat {
	private:
		int num_flat;
		std::string owner_fio_name;

	public:
		Flat(const std::string& owner_fio_name, int num_flat);
		Flat(const Owner& owner, int num_flat);
		int GetNUM_FLAT() const;
		std::string GetNAME_OWNER() const;
	};

	class Concierge {
	private:
		std::string fio;
		std::string name;

	public:
		Concierge(const std::string& fio, std::string& name);
		std::string GetFIO_CONCIERGE() const;
		std::string GetNAME_CONCIERGE() const;
	};

	class Doorway {
	private:
		int kol_flat;
		int num_doorway;
		std::string flat;
		std::string concierge;

	public:
		Doorway(const std::string& flat, std::string& concierge, int kol_flat, int num_doorway);
		Doorway(const Flat* flat, const Concierge* concierge, int kol_flat, int num_doorway);
	};


}

