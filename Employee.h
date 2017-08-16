#pragma once
#include <string>

namespace Records {
	const int kDefaultStartingSalary = 30000;

	class Employee {
	public:
		Employee();
		void promote(int raiseAmount = 1000);
		void demote(int demeritAmount = 1000);
		void hire();	//종업원 채용 또는 재채용
		void fire();	//종업원 해고
		void display() const;	//콘솔에 종업원 정보 출력

		//게터와 세터
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int newSalary);
		int getSalary() const;

		bool getIsHired() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNumber;
		int mSalary;
		bool mHired;
	};
}

