package letsstart;




class Execute{
  public static void main(String[] args){
      IBank bank=new MumbaiOffice();                                   /*The interface reference points to an object of the class that implements the interface*/
      Customer customer = new Customer();
      customer.setCustomerId("cust1001");
      customer.setName("Ajay");
      String accountNumber = bank.createAccount(customer);
      System.out.println("Account number is..." +accountNumber);
      double gloan = bank.issueGoldLoan(customer);
      System.out.println("Gold loan amount is..." +gloan);
      double hloan = bank.issueHouseLoan(customer);
      System.out.println("House loan amount is..." +hloan);
      double vloan = bank.issueVehicleLoan("bike",customer);
      System.out.println("Vehicle loan amount is..." +vloan);                /* calling the methods with interface reference.*/
      System.out.println("Caution money is..." +IBank.CAUTION_MONEY);                /* Accessing the variable with interface name*/
      IBankNew nbank=new MumbaiOffice();
      boolean issueCard=nbank.applyforCreditCard(customer);
  }
}







