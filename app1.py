# Python Banking Program

def show_balance(balance):
    print(f'Your balance is ${balance:.2f}')


def deposit():
    amount = float(input('How much you want to deposit? '))

    if amount < 0:
        print('Amount must be greater than zero')
        return 0
    else:
        return amount


def withdraw(balance):
    amount = float(input('How much you want to withdraw? '))

    if amount < 0:
        print('Amount must be greater than zero')
        return 0
    elif amount > balance:
        print("You don't have sufficient amount")
        return 0
    else:
        return amount


def main():
    balance = 0
    is_running = True

    while is_running:
        print('**************************')
        print('    Banking Program      ')
        print('**************************')
        print('''
        1.Show balance
        2.Deposit
        3.Withdraw
        4.Exit
        ''')

        choice = input('Enter your choice(1-4): ')

        if choice == '1':
            show_balance(balance)
        elif choice == '2':
            balance += deposit()
        elif choice == '3':
            balance -= withdraw(balance)
        elif choice == '4':
            is_running = False
        else:
            print('**************************')
            print('This is not a valid number!')
            print('**************************')
    print('**************************')
    print('Thank you have a nice day')
    print('**************************')


main()