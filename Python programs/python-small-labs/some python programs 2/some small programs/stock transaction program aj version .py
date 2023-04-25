#Ali Eshghi                           
#1112261                                         
#STOCK TRANSACTION PROGRAM (Program set number 2)


#INPUT

stock_check = int(input("enter the amount of the stocks you are following: "))

for stock_check in range(stock_check):
    print("enter the following as requested")
    stock=input("stock name: ")
    stock_qt=int(input("number of shares: "))
    stock_prc=float(input("stock price: "))
    stock_sell=float(input("selling price: "))
    broker=float(input("brocker commision: "))

    stock_paid = stock_qt * stock_prc
    com_amt = stock_paid * broker/100
    stock_sold = stock_qt * stock_sell
    com_paid = stock_sold* broker/100
    prf_loss =(stock_sold-com_paid)-(stock_paid+com_amt)

    print("the stock name: ",stock)
    print("price paid for stock: $",format(stock_paid,',.2f'),sep='')
    print("commision paid to broker: $",format(com_amt,',.2f'),sep='')
    print("the price sold $",format(stock_sold,',.2f'),sep='')
    print("commision paid to broker for selling: $",format(com_paid,',.2f'),sep='')
    print("profit or loss : $",format(prf_loss,',.2f'),"\n\n",sep='')
##>>> 
## RESTART: /Users/alieshghi/Desktop/homework2.Ali/stock transaction program aj version .py 
##enter the amount of the stocks you are following: 1
##enter the following as requested
##stock name: aa
##number of shares: 23
##stock price: 34
##selling price: 54
##brocker commision: 3
##the stock name:  aa
##price paid for stock: $782.00
##commision paid to broker: $23.46
##the price sold $1,242.00
##commision paid to broker for selling: $37.26
##profit or loss : $399.28
##
##
##>>> 
