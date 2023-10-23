package letsstart;




public class MumbaiOffice implements IBank, IBankNew{                        /*A class can implement multiple interface*/
   public String createAccount(Customer customer){
                                                                               //business logic to create account
  return "Acc12345";
   }
   public double issueVehicleLoan(String vehicleType,Customer customer){
  if(vehicleType.equals("bike")){
      return 100000;
  }
  return 500000;
   }
   public double issueHouseLoan(Customer customer){
  return 200000;
   }
   public double issueGoldLoan(Customer customer){
  return 500000;
   }
   public boolean applyforCreditCard(Customer customer){
  return true;
   }
}


