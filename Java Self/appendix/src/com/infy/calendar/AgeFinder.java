package com.infy.calendar;

import java.sql.Date;
import java.time.Month;
import java.time.MonthDay;
import java.util.Calendar;

/**
 * @author aman0
 *
 */
/**
 * @author aman0
 *
 */
public class AgeFinder {
	void getAge(Date dateOfBirth) {
		
	}
	
	void getDateAfterNDays(int noOfDays) {
	Calendar cal = Calendar.getInstance();
	cal.add(cal.DAY_OF_MONTH, noOfDays);
	System.out.println("Date after "+noOfDays+" from now:"+cal.getTime());
	}
	void getDateAfterXyearYMonthZDays(int year,int month,int day) {
		Calendar cal = Calendar.getInstance();
		cal.add(cal.DATE, day);
		cal.add(cal.MONTH, month);
		cal.add(cal.YEAR, year);
		System.out.println("Date after "+year+" Year "+month+" Month "+"and "+day +" Days is: "+cal.getTime());

	}
	public static void main(String[] args) {
		AgeFinder req = new AgeFinder();
		req.getDateAfterNDays(4);
		
		req.getDateAfterXyearYMonthZDays(2, 2, 2);	}
	
	
}
