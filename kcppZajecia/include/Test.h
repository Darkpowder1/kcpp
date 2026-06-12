/// Test class for constructor, decosntructor, enums etc

class test {

    
    public:
        static int no_test;
    
        test(int a);
        
        void do_things();
        
        ~test();
        
        int get_test_no() {
            return no_test;
        }
        
        // default implementation
        enum TestEnumAnimals {
            Cat, // implicit 0, goes up by 1
            Dog=5, // defined 5
            Frog // 6, its 1 bigger
        };
        
        enum class Confusion: char {
            a = 'c',
            b = 'a',
            c = 'b'
        };

        
        int matchAnimalToNumber(TestEnumAnimals zwierz);
};

// this is also possible
enum AnimalLetters: char {
    Kitten = 'k',
    Doggo = 'd',
};
