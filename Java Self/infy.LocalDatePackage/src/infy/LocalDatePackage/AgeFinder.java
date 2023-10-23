package infy.LocalDatePackage;

import java.time.LocalDate;

public class AgeFinder {

	public int getAge(LocalDate dateOfBirth) {
		LocalDate n = LocalDate.now();
		int c = n.compareTo(dateOfBirth);
		System.out.println("Age is "+c);
		return c;

	}

	public LocalDate getDateAfterNDays(int noOfDays) {
		LocalDate n = LocalDate.now();
		System.out.println(n);
		LocalDate dt = n.plusDays(noOfDays);
		return dt;
	}

	public LocalDate getDateAfterXYearYMonthZDays(int year, int month, int day) {
		LocalDate c = LocalDate.now();

		LocalDate x = c.plusYears(year);
		LocalDate y = x.plusMonths(month);
		LocalDate z = y.plusDays(day);
		return z;
	}

	public static void main(String[] args) {
		AgeFinder Ag = new AgeFinder();
		LocalDate dt = LocalDate.of(2005, 8, 24);
		Ag.getAge(dt);
		System.out.println(Ag.getDateAfterNDays(5));
		System.out.println(Ag.getDateAfterXYearYMonthZDays(5, 5, 5));
	}

}
