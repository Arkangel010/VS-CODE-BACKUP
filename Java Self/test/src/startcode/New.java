
}if(experience<3) {
	this.salary = basicPay + hra;
}
else if(experience>=3 && experience<5 ){
	this.salary = ((5/100)*basicPay) + basicPay + hra;
	
}
else if (experience>= 5 && experience<10) {
	this.salary = ((7/100)*basicPay) + basicPay + hra;
}
else(experience==10){
	this.salary = ((12/100)*basicPay) + basicPay + hra;

}