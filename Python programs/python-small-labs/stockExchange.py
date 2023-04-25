#Ali Eshghi 
#1112261
#HW3 set1

def input_data()->(str,int,float,float,float):
    stock_name=input("Stock Name: ")
    share_num=int(input("Number of Shares: "))
    stock_buy_price=float(input("Stock Purchase Price: "))
    stock_sell_price=float(input("Stock Sell Price: "))
    brkr_com=float(input("Broker Commission: "))
    return stock_name, share_num, stock_buy_price, stock_sell_price, brkr_com

    #IN THIS FUNCTION USER INPUTS STOCKS INFO

def calc(share_num:int, stock_buy_price:float, stock_sell_price:float, brkr_com:float)->(float,float,float,float,float):
    paid_stock=float(share_num) * stock_buy_price
    paid_buy_brkr=paid_stock * (brkr_com/100)
    sold_stock=float(share_num) * stock_sell_price
    paid_sold_brkr=sold_stock * (brkr_com/100)
    pro_loss=(-paid_stock - paid_buy_brkr) + (sold_stock - paid_sold_brkr)
    return paid_stock, paid_buy_brkr, sold_stock, paid_sold_brkr, pro_loss

    #THIS FUNCTION CALCULATES THE PROFIT AND LOSS AND COMMISON TO BROKER
    #FOR THE PROFIT/LOSS I CHANGED THE FORMULA CUZ THE OTHER FORMULA GAVE ME WRONG OUTPUT

def print_output(stock_name:str, paid_stock:float , paid_buy_brkr:float , sold_stock:float , paid_sold_brkr:float , pro_loss:float )->None:
    print("Stock Name is ",stock_name)
    print("The Amount Paid for The Stock: $", format(paid_stock,',.2f'), sep='')
    print("The Amount of Commission Paid to Broker When The Stock was Bought: $", format(paid_buy_brkr,',.2f'), sep='')
    print("The Amount That The Stock was Sold for: $", format(sold_stock,',.2f'), sep='')
    print("The Amount of Commission has to be Paid to Broker When the Stock was Sold: $", format(paid_sold_brkr,',.2f'), sep='')
    if pro_loss>0:
        print("Profit: ", format(pro_loss,',.2f'),'\n', sep='')
    else :
        print("Loss: ", format(pro_loss,',.2f'),'\n', sep='')

    #THIS FUNCTION PRINTS THE STOCK INFO, PROFIT/LOSS, TOTAL MONEY SPENT, TOTAL MONEY THE STOCK WAS SOLD FOR
    
def main():
    for i in range(0,5):
        stock_name, share_num, stock_buy_price, stock_sell_price, brkr_com = input_data()
        paid_stock, paid_buy_brkr, sold_stock, paid_sold_brkr, pro_loss = calc(share_num, stock_buy_price, stock_sell_price, brkr_com)
        print_output(stock_name, paid_stock, paid_buy_brkr, sold_stock, paid_sold_brkr, pro_loss)
    
if __name__=="__main__":
    main()

##>>> 
##====== RESTART: /Users/siavash/Desktop/HW3/PS1_Valipour_Amirarsalan.py ======
##Stock Name: ABC
##Number of Shares: 10
##Stock Purchase Price: 100.00
##Stock Sell Price: 200.00
##Broker Commission: 10
##Stock Name is  ABC
##The Amount Paid for The Stock: $1,000.00
##The Amount of Commission Paid to Broker When The Stock was Bought: $100.00
##The Amount That The Stock was Sold for: $2,000.00
##The Amount of Commission has to be Paid to Broker When the Stock was Sold: $200.00
##Profit: 700.00
##
##Stock Name: STC
##Number of Shares: 20
##Stock Purchase Price: 200
##Stock Sell Price: 400
##Broker Commission: 10
##Stock Name is  STC
##The Amount Paid for The Stock: $4,000.00
##The Amount of Commission Paid to Broker When The Stock was Bought: $400.00
##The Amount That The Stock was Sold for: $8,000.00
##The Amount of Commission has to be Paid to Broker When the Stock was Sold: $800.00
##Profit: 2,800.00
##
##Stock Name: BCD
##Number of Shares: 10
##Stock Purchase Price: 200.00
##Stock Sell Price: 100.00
##Broker Commission: 10
##Stock Name is  BCD
##The Amount Paid for The Stock: $2,000.00
##The Amount of Commission Paid to Broker When The Stock was Bought: $200.00
##The Amount That The Stock was Sold for: $1,000.00
##The Amount of Commission has to be Paid to Broker When the Stock was Sold: $100.00
##Loss: -1,300.00
##
##Stock Name: AAA
##Number of Shares: 1
##Stock Purchase Price: 1000
##Stock Sell Price: 2000
##Broker Commission: 50
##Stock Name is  AAA
##The Amount Paid for The Stock: $1,000.00
##The Amount of Commission Paid to Broker When The Stock was Bought: $500.00
##The Amount That The Stock was Sold for: $2,000.00
##The Amount of Commission has to be Paid to Broker When the Stock was Sold: $1,000.00
##Loss: -500.00
##
##Stock Name: XXX
##Number of Shares: 1000
##Stock Purchase Price: 9.99
##Stock Sell Price: 10.00
##Broker Commission: 1
##Stock Name is  XXX
##The Amount Paid for The Stock: $9,990.00
##The Amount of Commission Paid to Broker When The Stock was Bought: $99.90
##The Amount That The Stock was Sold for: $10,000.00
##The Amount of Commission has to be Paid to Broker When the Stock was Sold: $100.00
##Loss: -189.90
##
##>>> 
