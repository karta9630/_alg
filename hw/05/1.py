import threading
import os

def halt(f, input, timeout=10): #10秒限制，我認為大於10秒的時間，基本上等於死機

    thread = threading.Thread(target=f,args=(input,))
    thread.start()
    thread.join(timeout)  #超時

    if thread.is_alive():
        print(f"{f.__name__}({input}) timeout ")
        os._exit(1)  #卡掉
        return False
    else :
        return True

def f1(n):
    return n * n

def f2(n):
    s = 0
    for _ in range(n):
        for _ in range(n):
            for _ in range(n):
                for _ in range(n):
                     for _ in range(n):
                         for _ in range(n): 
                             for _ in range(n):
                                s = s + 1  # 大量計算

if __name__ == '__main__':
    print('halt(f1, 3) =', halt(f1, 3))  # 簡單的計算，應該完成
    print('halt(f2, 10) =', halt(f2, 10))  # 較大的計算，應該完成
    print('halt(f2, 1000) =', halt(f2, 10000))  # 超過 3 秒，程式終止
