while True:
    try:
        x = float(input())
        y = float(input())
        d = round(x - int(x),8)
        
        if (d > y):
            x = int(x) + 1;
        
        print(int(x));

    except EOFError:
        break