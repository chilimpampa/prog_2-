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
		int GetKOl_FLAT() const;
		int GetNUM_DOORWAY() const;
		std::string GetFLAT() const;
		std::string GetCONCIERGE() const;
	};

	class House {
		int num_house;
		int kol_rezidents;
		std::string doorway;

	public:
		House(const std::string& doorway, int num_house, int kol_rezidents);
		House(const Doorway* doorway, int num_house, int kol_rezidents);
		int GetKOL_REZIDENTS() const;
		int GetNUM_HOUSE() const;
		std::string GetDOORWAY() const;
	};

	class ApartmentDataBase {
		ApartmentDataBase();
		~ApartmentDataBase();

		void AddOwner(const Owner& owner);
		void AddFlat(const Flat& flat);
		void AddConcierge(const Concierge& concierge);
		void AddDoorway(const Doorway& doorway);
		void AddHouse(const House& house);

		void PrintOwnerList() const;
		void PrintFlatList() const;
		void PrintConciergeList() const;
		void PrintDoorwayList() const;
		void PrintHouseList() const;
		Owner InputOwnerFromUser();
		Flat InputFlatFromUser();
		Concierge InputConciergeFromUser();
		Doorway InputDoorwayFromUser();
		House InputHouseFromUser();

	private:
		bool IsInteger(const std::string& str) const;

	private:
		std::vector<Owner> owners;
		std::vector<Flat> flats;
		std::vector<Concierge> concierges;
		std::vector<Doorway> doorways;
		std::vector<House> houses;
	};
}

