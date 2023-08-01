class Animal {
    public:
        int getWeight() { return weight; }
    private:
        int weight;
};

// Here is a solutions >>>
// class Tiger : virtual public Animal {};
// class Lion  : virtual public Animal {};
// Here is a solutions <<<
class Tiger : public Animal {};
class Lion  : public Animal {};
class Liger : public Tiger, public Lion {};

int main() {
    Liger lg;
    int weight = lg.getWeight();
    return 0;
}
