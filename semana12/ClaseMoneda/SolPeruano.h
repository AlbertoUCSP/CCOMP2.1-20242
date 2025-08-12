#ifndef __SOL_PERUANO__
#define __SOL_PERUANO__

#include <iostream>

class SolPeruano{
    private:
        int soles;
        int centimos;
    public:
        SolPeruano(int s=0, int c=0) : soles{s}, centimos{c}{}
        int getSoles() const {
            return soles;
        }
        int getCentimos() const {
            return centimos;
        }
        void setSoles(int s) {
            soles = s;
        } 
        void setCentimos(int c) {
            centimos = c;
        }
        void print() const {
            std::cout << "S/. " << soles << "." << centimos << std::endl;
        }
        SolPeruano operator+(const SolPeruano& pen) const {
            int sumaSoles = soles + pen.soles;
            int sumaCentimos = centimos + pen.centimos;

            if (sumaCentimos >= 100) {
                sumaSoles += 1;
                sumaCentimos %= 100;
            }

            return SolPeruano(sumaSoles, sumaCentimos);
        }
        bool operator<(const SolPeruano& pen) const {
            if (soles < pen.soles) {
                return true;
            }
            return false;
        }
};
#endif