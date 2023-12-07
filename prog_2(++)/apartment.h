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
		int kol_rooms;
		int square;

	public:
		Flat(const int num_flat, int kol_rooms, int square);
		int GetNUM_FLAT() const;
		int GetKOL_ROOMS() const;
		int GetSQUARE() const;
	};

	class Concierge {
	private:
		std::string concierge_fio;
		std::string concierge_name;

	public:
		Concierge(const std::string& concierge_fio, std::string& concierge_name);
		std::string GetFIO_CONCIERGE() const;
		std::string GetNAME_CONCIERGE() const;
	};

	class Doorway {
	private:
		int kol_flat;
		int num_doorway;

	public:
		Doorway(const int kol_flat, int num_doorway);
		int GetKOl_FLAT() const;
		int GetNUM_DOORWAY() const;
	};

	class House {
	private:
		int num_house;
		int kol_rezidents;

	public:
		House(const int num_house, int kol_rezidents);
		int GetKOL_REZIDENTS() const;
		int GetNUM_HOUSE() const;
	};


	class ApartmentDataBase {
	public:
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

