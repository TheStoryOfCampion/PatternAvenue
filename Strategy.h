#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy
{
    public:
        //Strategy(/* args */);
        ~Strategy();
        virtual void Execute() = 0;
};


#endif
