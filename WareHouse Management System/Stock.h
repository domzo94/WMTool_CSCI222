

class Stock{
     
	public: 
	  
		/*char itemID[100], itemDes[200], MainCategory[100],
     		 SubCategory[100],   
	  		 TransactionID[100], TransactionDate[100];*/
		string itemID, itemDes, MainCategory,
     		 SubCategory,   
	  		 TransactionID, TransactionDate;
	  	int Threshold, price, qty, IncomingStock, OutgoingStock;  
	  
	  	Stock();
		~Stock();
	  	void addStock(fstream&, char*);
	  	void removeStock();
	  	void editStock();
	  	void searchStock();
	  	void stockMenu();
	  	void summaryReport(int);
	  	void displayOutput();
	  	
	  
	  
};

