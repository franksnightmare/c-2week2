#include "monitor.ih"

void Monitor::run()
{
    string line;
    while (true)
    {
        ifstream in(d_fifo);
        getline(in, line);

        if (line.empty())
            continue;

        istringstream instr(line);
        instr.ignore(1);

        switch (line.front())
        {
            case 'r':
                insert(instr);
            break;

            case 'q':
                remove(instr);
            break;

            case 'Q':
            return;
        }
    }
}

