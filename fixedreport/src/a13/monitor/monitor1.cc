#include "monitor.ih"

Monitor::Monitor(char const *fifo)
:
    d_fifo(fifo)
{
        // fifo 0 contains messages from a connection (received from its
        // matching interactor to the monitor.
    unlink(fifo);

    if (mkfifo(fifo, 0600) != 0)
    {
        cerr << "Can't create fifo " << fifo << '\n';
        exit(1);
    }
}




