#set 3



import tkinter

class TestAvg:
    def __init__(self):
        # Create the main window.
        self.main_window = tkinter.Tk()

        # Create the five frames.
        self.Annual_interest_rate_frame = tkinter.Frame(self.main_window)
        self.Numbers_of_Years_frame = tkinter.Frame(self.main_window)
        self.Loan_Amount_frame = tkinter.Frame(self.main_window)
        self.Monthly_payment_frame = tkinter.Frame(self.main_window)
        self.Total_Payment_frame = tkinter.Frame(self.main_window)
        self.button_frame = tkinter.Frame(self.main_window)

        # Create and pack the widgets 
        self.Annual_Interest_Rate_label = tkinter.Label(self.Annual_Interest_Rate_label_frame, \
                        text='Annual Interest Rate')
        self.Annual_Interest_Rate_entry = tkinter.Entry(self.Annual_Interest_Rate_label_frame, \
                                         width=10)
        self.Annual_Interest_Rate_label.pack(side='left')
        self.Annual_Interest_Rate_entry.pack(side='left')

        # Create and pack the widgets 
        self.Numbers_of_Years_label = tkinter.Label(self.Numbers_of_Years_frame, \
                        text='Numbers of Years')
        self.Numbers_of_Years_entry = tkinter.Entry(self.Numbers_of_Years_frame, \
                                         width=10)
        self.Numbers_of_Years_label.pack(side='left')
        self.Numbers_of_Years_entry.pack(side='left')
        
        # Create and pack the widgets 
        self.Loan_Amount_label = tkinter.Label(self.Loan_Amount_frame, \
                        text='Loan Amount')
        self.Loan_Amount_entry = tkinter.Entry(self.Loan_Amount_frame, \
                                         width=10)
        self.Loan_Amount_label.pack(side='left')
        self.Loan_Amount_entry.pack(side='left')

        # Create and pack the widgets for the average.
        self.result_label = tkinter.Label(self.Monthly_payment_frame, \
                        text='Monthly Payment')
        self.Monthly_payment = tkinter.StringVar() # To update avg_label
        self.Monthly_payment_label = tkinter.Label(self.Monthly_payment_frame, \
                                    textvariable=self.Monthly_payment)
        self.result_label.pack(side='left')
        self.Monthly_payment_label.pack(side='left')

        # Create and pack the widgets for the average.
        self.result_label = tkinter.Label(self.Total_Payment_frame, \
                        text='Total Payment')
        self.Total_Payment= tkinter.StringVar() # To update avg_label
        self.Total_Payment_label = tkinter.Label(self.Total_Payment_frame, \
                                    textvariable=self.Total_Payment)
        self.result_label.pack(side='left')
        self.avg_label.pack(side='left')

        # Create and pack the button widgets.
        self.calc_button = tkinter.Button(self.button_frame, \
                                     text='Compute Payment', \
                                     command=self.calc_avg)
        self.quit_button = tkinter.Button(self.button_frame, \
                                text='Quit', \
                                command=self.main_window.destroy)
        self.calc_button.pack(side='left')
        self.quit_button.pack(side='left')

        # Pack the frames.
        self.Annual_Interest_Rate_frame.pack()
        self.Numbers_of_Years_frame.pack()
        self.Loan_Amount_frame.pack()
        self.Monthly_Payment_frame.pack()
        self.Total_Payment_frame.pack()
        self.button_frame.pack()

        # Start the main loop.
        tkinter.mainloop()

    # The calc_avg method is the callback function for
    # the calc_button widget.

    def calc_avg(self):
        # Get the three test scores and store them
        # in variables.
        self.Annual_Interest_Rate = float(self.Annual_Interest_Rate_entry.get())
        self.Numbers_of_Years = float(self.Numbers_of_Years_entry.get())
        self.Loan_Amount = float(self.Loan_Amount_entry.get())

        # Calculate the average.
        self.average = (self.Annual_Interest_Rate + self.Numbers_of_Years+ \
                        self.Loan_Amount) / 3.0

        # Update the avg_label widget by storing
        # the value of self.average in the StringVar
        # object referenced by avg.
        self.Monthly_Payment.set(self.average)
        self.Total_Payment.set(self.average)

# Create an instance of the TestAvg class.
test_avg = TestAvg()
