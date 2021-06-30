import threading
import time
import sys


def mini_thread(n):
    while n > 0:
        time.sleep(0)
        n -= 1


def main():
    n_threads = int(sys.argv[1])
    n_iterations = int(sys.argv[2])

    for n in range(n_threads):
        x = threading.Thread(target=mini_thread, args=(n_iterations,))
        x.start()


if __name__ == "__main__":
    main()
