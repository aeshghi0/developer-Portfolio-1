#Ali Eshghi
#1112261
#STOCK TRANSACTION PROGRAM (Program set number 2)#


#INPUT

count=0

while count!=2:
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

    count=count+1

    print("the stock name: ",stock)
    print("price paid for stock: $",format(stock_paid,',.2f'),sep='')
    print("commision paid to broker: $",format(com_amt,',.2f'),sep='')
    print("the price sold $",format(stock_sold,',.2f'),sep='')
    print("commision paid to broker for selling: $",format(com_paid,',.2f'),sep='')
    print("profit or loss : $",format(prf_loss,',.2f'),"\n\n",sep='')
    

##>>> 
## RESTART: /Users/alieshghi/Desktop/homework2.Ali/stock transaction program using while loop  aj version  copy.py 
##enter the following as requested
##stock name: aaa
##number of shares: 23
##stock price: 34
##selling price: 54
##brocker commision: 2
##the stock name:  aaa
##price paid for stock: $782.00
##commision paid to broker: $15.64
##the price sold $1,242.00
##commision paid to broker for selling: $24.84
##profit or loss : $419.52
##
##
##enter the following as requested
##stock name: ddd
##number of shares: 43
##stock price: 2
##selling price: 54
##brocker commision: 3
##the stock name:  ddd
##price paid for stock: $86.00
##commision paid to broker: $2.58
##the price sold $2,322.00
##commision paid to broker for selling: $69.66
##profit or loss : $2,163.76
##
##
##>>> 
